#include <stdio.h>
#include <string.h>

#define MAX_PRODUCTS 5


struct Product {
    int id;                 
    char name[100]; 
    int price;             
};

void printProduct(struct Product p);

int main() {
   struct Product products[MAX_PRODUCTS]; 
    int count = 0; 

    while (count < MAX_PRODUCTS) {
        struct Product p;

        printf("��ǰ ������ �Է��ϼ��� (�Է� �ߴ��� id�� 0 �Է�)\n");
        printf("��ǰ ID : ");
        scanf_s("%d", &p.id);

        if (p.id == 0) {
            break;
        }

        printf("��ǰ�� : ");
        scanf_s("%s", p.name, sizeof(p.name)); 
        printf("���� : ");
        scanf_s("%d", &p.price);

        products[count] = p;
        count++;
    }

    printf("\n<< �Էµ� ��ǰ ��� >>\n");
    for (int i = 0; i < count; i++) {
        printProduct(products[i]);
    }

    return 0;
}

void printProduct(struct Product p) {
    printf("��ǰ ID : %d\n", p.id);
    printf("��ǰ�� : %s\n", p.name);
    printf("���� : %d��\n\n", p.price);
}
