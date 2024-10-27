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

        printf("상품 정보를 입력하세요 (입력 중단은 id에 0 입력)\n");
        printf("상품 ID : ");
        scanf_s("%d", &p.id);

        if (p.id == 0) {
            break;
        }

        printf("상품명 : ");
        scanf_s("%s", p.name, sizeof(p.name)); 
        printf("가격 : ");
        scanf_s("%d", &p.price);

        products[count] = p;
        count++;
    }

    printf("\n<< 입력된 상품 목록 >>\n");
    for (int i = 0; i < count; i++) {
        printProduct(products[i]);
    }

    return 0;
}

void printProduct(struct Product p) {
    printf("상품 ID : %d\n", p.id);
    printf("상품명 : %s\n", p.name);
    printf("가격 : %d원\n\n", p.price);
}
