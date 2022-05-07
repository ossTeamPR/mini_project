"desert.h"

void UpdateDS(Dessert *ds)
{
    int num;
    printf("업데이트하고 싶은 디저트 번호를 입력하세요: ");
    scanf("%d", &num);
    getchar();
    num-=1;
    CreateDS(ds, num);
}
void DeleteDS(Dessert *ds)
{
    int num;
    printf("삭제하고 싶은 디저트 번호를 입력하세요: ");
    scanf("%d", &num);
    getchar();
    num-=1;
    ds[num].price = -1;
    printf("삭제가 완료되었습니다.\n");
}