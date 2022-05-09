#include "dessert.h"
    
int CreateDS(Dessert *ds)
{
    printf("이름은? ");
    scanf("%[^\n]", ds->name);
    getchar();

    printf("가격은? ");
    scanf("%d", &ds->price);
    getchar();

    printf("칼로리는? ");
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
    printf("\nNo 디저트이름 가격 칼로리\n");
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
    printf("1. 디저트 추가\n");
    printf("2. 디저트 보기\n");
    printf("3. 디저트 수정\n");
    printf("4. 디저트 삭제\n");
    printf("\n**********************************\n");
    printf("원하는 메뉴를 선택해주세요\n");
    scanf("%d", &n);
    getchar();

    return n;
}

int selectDataNo(Dessert *ds, int count){
    int no;
    // listProduct(ds, count);
    printf("번호는 (취소 :0)? ");
    scanf("%d", &no);
    getchar();
    return no;
} // 수정 및 삭제에 필요한 특정 숫자 받기


void UpdateDS(Dessert *ds, int no)
{
    /*int num;
    printf("업데이트하고 싶은 디저트 번호를 입력하세요: ");
    scanf("%d", &num);
    getchar();
    num-=1;*/ //어차피 selectDataNo 에서 업데이트 하고 싶은 번호를 불러오는 거라 일단 주석처리함
    CreateDS(&ds[no-1]);
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
