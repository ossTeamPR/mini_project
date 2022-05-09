#include "dessert.h"
    
int CreateDs(Dessert *ds, int index)
{
    printf("이름은? ");
    scanf("%[^\n]", ds->name);
    getchar();

    printf("가격은? ");
    scanf("%d", &ds->price);
    getchar();

    printf("칼로리는?");
    scanf("%d", &ds->cal);
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
    printf("1. 디저트 추가\n");
    printf("2. 디저트 보기\n");
    printf("3. 디저트 수정\n");
    printf("4. 디저트 삭제\n");
    printf("\n**********************************\n");
    printf("원하는 메뉴를 선택해주세요\n");
    scanf("%d", &n);
    getchar();
}

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
