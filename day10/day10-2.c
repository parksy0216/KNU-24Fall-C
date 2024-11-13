#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef enum {
    VIP = 1,
    GOLD,
    SILVER,
    BRONZE
} Rank;

typedef struct Customer {
    char* customerName;
    Rank rank;
    int order_amount;
    int point;
    struct Customer* prev;
    struct Customer* next;
} Customer;

Customer* createCustomer(char* name, Rank rank, int order_amount, int point);
void insertCustomer(Customer** head, char* name, Rank rank, int order_amount, int point);
void deleteCustomer(Customer** head, char* name);
void updateCustomer(Customer* head, char* name, Rank rank, int order_amount, int point);
void printCustomerList(Customer* head);
void freeCustomerList(Customer* head);

int main() {
    Customer* head = NULL;
    int choice;
    char name[50];
    int rank, order_amount, point;

    while (1) {
        printf("\n1. �� �߰�\n");
        printf("2. �� ����\n");
        printf("3. �� ����\n");
        printf("4. ��ü ����Ʈ ���\n");
        printf("5. ����\n");
        printf("input : ");
        scanf_s("%d", &choice);

        switch (choice) {
        case 1: 
            printf("�� �̸�: ");
            scanf_s("%49s", name, (unsigned)_countof(name)); 
            printf("�� ��� (1:VIP, 2:GOLD, 3:SILVER, 4:BRONZE): ");
            scanf_s("%d", &rank);
            printf("��ü �ֹ���: ");
            scanf_s("%d", &order_amount);
            printf("����Ʈ: ");
            scanf_s("%d", &point);
            insertCustomer(&head, name, rank, order_amount, point);
            break;

        case 2: 
            printf("������ �� �̸�: ");
            scanf_s("%49s", name, (unsigned)_countof(name)); 
            deleteCustomer(&head, name);
            break;

        case 3: 
            printf("������ �� �̸�: ");
            scanf_s("%49s", name, (unsigned)_countof(name)); 
            printf("���ο� ��� (1:VIP, 2:GOLD, 3:SILVER, 4:BRONZE): ");
            scanf_s("%d", &rank);
            printf("���ο� ��ü �ֹ���: ");
            scanf_s("%d", &order_amount);
            printf("���ο� ����Ʈ: ");
            scanf_s("%d", &point);
            updateCustomer(head, name, rank, order_amount, point);
            break;

        case 4: 
            printCustomerList(head);
            break;

        case 5: 
            freeCustomerList(head);
            return 0;

        default:
            printf("�߸��� �Է��Դϴ�.\n");
        }
    }
}

Customer* createCustomer(char* name, Rank rank, int order_amount, int point) {
    Customer* newCustomer = (Customer*)malloc(sizeof(Customer));
    if (newCustomer == NULL) {
        printf("�޸� �Ҵ� ����\n");
        exit(1);
    }

    newCustomer->customerName = (char*)malloc(strlen(name) + 1); 
    if (newCustomer->customerName == NULL) {
        printf("�޸� �Ҵ� ����\n");
        free(newCustomer);
        exit(1);
    }

    strcpy_s(newCustomer->customerName, strlen(name) + 1, name); 
    newCustomer->rank = rank;
    newCustomer->order_amount = order_amount;
    newCustomer->point = point;
    newCustomer->prev = NULL;
    newCustomer->next = NULL;
    return newCustomer;
}

void insertCustomer(Customer** head, char* name, Rank rank, int order_amount, int point) {
    Customer* newCustomer = createCustomer(name, rank, order_amount, point);

    if (*head == NULL) {
        *head = newCustomer;
        return;
    }

    Customer* current = *head;
   
    while (current != NULL) {
        if (current->rank > rank ||
            (current->rank == rank && current->order_amount < order_amount) ||
            (current->rank == rank && current->order_amount == order_amount && current->point < point)) {
            break;
        }
        current = current->next;
    }

    if (current == *head) {
        newCustomer->next = *head;
        (*head)->prev = newCustomer;
        *head = newCustomer;
    }
    else if (current == NULL) {
        Customer* tail = *head;
        while (tail->next != NULL) {
            tail = tail->next;
        }
        tail->next = newCustomer;
        newCustomer->prev = tail;
    }
    else {
       
        newCustomer->prev = current->prev;  
        newCustomer->next = current;         

        if (current->prev != NULL) {
            current->prev->next = newCustomer; 
        }
        current->prev = newCustomer;         
    }
}

void deleteCustomer(Customer** head, char* name) {
    if (head == NULL || *head == NULL) return;

    Customer* current = *head;
    while (current && strcmp(current->customerName, name) != 0) {
        current = current->next;
    }

    if (!current) {
        printf("���� ã�� �� �����ϴ�.\n");
        return;
    }

    if (current->prev) current->prev->next = current->next;
    if (current->next) current->next->prev = current->prev;
    if (current == *head) *head = current->next;

    free(current->customerName);
    free(current);
}

void updateCustomer(Customer* head, char* name, Rank rank, int order_amount, int point) {
    Customer* current = head;
    while (current && strcmp(current->customerName, name) != 0) {
        current = current->next;
    }

    if (!current) {
        printf("���� ã�� �� �����ϴ�.\n");
        return;
    }

    current->rank = rank;
    current->order_amount = order_amount;
    current->point = point;
}

void printCustomerList(Customer* head) {
    Customer* current = head;
    while (current) {
        printf("�̸�: %s, ���: %d, �ֹ���: %d, ����Ʈ: %d\n",
            current->customerName, current->rank, current->order_amount, current->point);
        current = current->next;
    }
}

void freeCustomerList(Customer* head) {
    Customer* current = head;
    while (current) {
        Customer* temp = current;
        current = current->next;
        free(temp->customerName);
        free(temp);
    }
}
