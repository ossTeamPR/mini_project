#include <stdio.h>

typedef struct{
    char name[20]; // �̸�
    int price; // ����
    int cal; // Į�θ�
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