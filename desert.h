#include <stdio.h>

typedef struct{
    char name[20]; // 이름
    int price; // 가격
    int cal; // 칼로리
} Dessert;

void CreateDS(Dessert*, int);
void ReadDS(Dessert*);
void UpdateDS(Dessert*);
void DeleteDS(Dessert*);
void ReadOneDS(Dessert, int);
int menu();
