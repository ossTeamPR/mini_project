"desert.h"

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