#include <stdio.h>

typedef struct{
    char name[20]; // 이름
    int price; // 가격
    int cal; // 칼로리
} Dessert;

int CreateDS(Dessert*, int);
void ReadDS(Dessert*, int);
void UpdateDS(Dessert*);
void DeleteDS(Dessert*);
void ReadOneDS(Dessert, int);
int selectProduct();
int selectDataNo(Dessert*, int);
int menu();
