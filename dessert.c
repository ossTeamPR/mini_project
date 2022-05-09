#include "dessert.h"
    
int CreateDS(Dessert *ds, int index)
{
    printf("�̸���? ");
    scanf("%[^\n]", ds[index].name);
    getchar();

    printf("������? ");
    scanf("%d", &ds[index].price);
    getchar();

    printf("Į�θ���?");
    scanf("%d", &ds[index].cal);
    getchar();

    return 1;
}

void ReadDS(Dessert *ds, int index)
{
    printf("    %2s %2d %3d\n", ds[index].name, ds[index].price, ds[index].cal);
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
}

int selectDataNo(Dessert *ds, int count){
    int no;
    // listProduct(ds, count);
    printf("��ȣ�� (��� :0)? ");
    scanf("%d", &no);
    getchar();
    return no;
} // ���� �� ������ �ʿ��� Ư�� ���� �ޱ�


void UpdateDS(Dessert *ds)
{
    int num;
    printf("������Ʈ�ϰ� ���� ����Ʈ ��ȣ�� �Է��ϼ���: ");
    scanf("%d", &num);
    getchar();
    num-=1;
    CreateDS(ds, num);
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
