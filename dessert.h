#include <stdio.h>

typedef struct{
    char name[20]; // �̸�
    int price; // ����
    int cal; // Į�θ�
} Dessert;

int CreateDS(Dessert*, int);
void ReadDS(Dessert*, int);
void UpdateDS(Dessert*);
void DeleteDS(Dessert*);
void ReadOneDS(Dessert, int);
int selectProduct();
int selectDataNo(Dessert*, int);
int menu();
