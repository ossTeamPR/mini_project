#include <stdio.h>

typedef struct{
    char name[20]; // �̸�
    int price; // ����
    int cal; // Į�θ�
} Dessert;

int CreateDS(Dessert*, index);
void ReadDS(Dessert*, index);
void UpdateDS(Dessert*);
void DeleteDS(Dessert*);
void ReadOneDS(Dessert, int);
int menu();
