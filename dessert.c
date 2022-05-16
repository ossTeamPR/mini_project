#include "dessert.h"
    
int CreateDS(Dessert *ds)
{
    printf("�̸���? ");
    scanf("%[^\n]", ds->name);
    getchar();

    printf("������? ");
    scanf("%d", &ds->price);
    getchar();

    printf("Į�θ���? ");
    scanf("%d", &ds->cal);
    getchar();

    return 1;
}

void ReadDS(Dessert ds)
{
    printf(" %2s %2d %3d\n", ds.name, ds.price, ds.cal);
}

void ListDS(Dessert *ds, int count)
{
    printf("\nNo ����Ʈ�̸� ���� Į�θ�\n");
    printf("==========================\n");
    for(int i = 0; i < count; i++){
        if(ds[i].price == -1) continue;
        printf("%2d", i+1);
        ReadDS(ds[i]);
    }
    printf("\n");
}

int selectProduct()
{
    int n;
    printf("\n**********************************\n");
    printf("1. ����Ʈ �߰�\n");
    printf("2. ����Ʈ ����\n");
    printf("3. ����Ʈ ����\n");
    printf("4. ����Ʈ ����\n");
    printf("5. ����Ʈ ����\n");
    printf("0. ���α׷� ����\n");
    printf("\n**********************************\n");
    printf("���ϴ� �޴��� �������ּ���\n");
    printf("=> ");
    scanf("%d", &n);
    getchar();

    return n;
}

int selectDataNo(Dessert *ds, int count){
    int no;
    // listProduct(ds, count);
    printf("��ȣ�� (��� :0)? ");
    scanf("%d", &no);
    getchar();
    return no;
} // ���� �� ������ �ʿ��� Ư�� ���� �ޱ�


void UpdateDS(Dessert *ds, int no)
{
    CreateDS(&ds[no-1]);
}

void DeleteDS(Dessert *ds, int no)
{
    ds[no-1].price = -1;
    printf("������ �Ϸ�Ǿ����ϴ�.\n");
}

void saveData(Dessert *ds, int count)
{
    FILE *fp;
    fp = fopen("DessertData.txt", "w");
    for (int i = 0; i < count; i++)
    {
        if (ds[i].cal >= 0) fprintf(fp, "%d %d %s\n",ds[i].price, ds[i].cal, ds[i].name);
    }

    fclose(fp);
    printf("=> �����! ");
}

int loadData(Dessert *ds)
{
    int i = 0;
    FILE *fp;
    fp = fopen("DessertData.txt", "rt");

    if (fp == NULL){
        printf("=> ���� ����\n");
        return 0;
    }

    for(; i < 100; i++){
        //ds[i] = (Dessert *)malloc(sizeof(Dessert));
        fscanf(fp, "%d", &ds[i].price);
        fscanf(fp, "%d", &ds[i].cal);
        fscanf(fp, "%[^\n]s", ds[i].name);
        if(feof(fp)) break;
    }

    fclose(fp);
    printf("=> �ε� ����!\n");
    return i;
}