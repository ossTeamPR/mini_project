#include <stdio.h>

typedef struct{
    char name[20]; // 이름
    int price; // 가격
    int cal; // 칼로리
} Dessert;

void CreateDS();
void ReadDS();
void UpdateDS();
void DeleteDS();
void ReadOneDS();
int menu();
void Save();
void Load();
void SearchName();
void SearchPrice();