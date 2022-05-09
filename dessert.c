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
    printf("\n**********************************\n");
    printf("���ϴ� �޴��� �������ּ���\n");
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
    /*int num;
    printf("������Ʈ�ϰ� ���� ����Ʈ ��ȣ�� �Է��ϼ���: ");
    scanf("%d", &num);
    getchar();
    num-=1;*/ //������ selectDataNo ���� ������Ʈ �ϰ� ���� ��ȣ�� �ҷ����� �Ŷ� �ϴ� �ּ�ó����
    CreateDS(&ds[no-1]);
}

void DeleteDS(Dessert *ds)
{
    int num;
    printf("�����ϰ� ���� ����Ʈ ��ȣ�� �Է��ϼ���: ");
    scanf("%d", &num);
    getchar();
    num-=1;
    ds[num].price = -1;
    printf("������ �Ϸ�Ǿ����ϴ�.\n");
}
