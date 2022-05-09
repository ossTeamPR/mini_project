#include "desert.h"
    
int CreateDs(Dessert *ds)
{
    printf("이름은? ");
    scanf("%[^\n]", p->name);
    getchar();

    printf("가격은? ");
    scanf("%d", &p->price);
    getchar();

    printf("칼로리는?");
    scanf("%d", &p->cal);
    getchar();

    return 1;
}

void ReadDS(Dessert *ds)
{
    printf("    %2s %2d %3d\n", p.name, p.price, p.check);
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
