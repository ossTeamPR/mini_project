"desert.h"

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