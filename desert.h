#include <stdio.h>

typedef struct{
    char name[20]; // �̸�
    int price; // ����
    int cal; // Į�θ�
} Dessert;

void CreateDS(Dessert*, int);
void ReadDS(Dessert*);
void UpdateDS(Dessert*);
void DeleteDS(Dessert*);
void ReadOneDS(Dessert, int);
int menu();
