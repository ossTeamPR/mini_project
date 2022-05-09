#include "desert.h"
    
int CreateDs(Dessert *ds)
{
    printf("ì´ë¦„ì€? ");
    scanf("%[^\n]", p->name);
    getchar();

    printf("ê°€ê²©ì€? ");
    scanf("%d", &p->price);
    getchar();

    printf("ì¹¼ë¡œë¦¬ëŠ”?");
    scanf("%d", &p->cal);
    getchar();

    return 1;
}

void ReadDS(Dessert *ds)
{
    printf("    %2s %2d %3d\n", p.name, p.price, p.check);
}

    

int selectProduct()
{
    int n;
    printf("\n**********************************\n");
    printf("1. µğÀúÆ® Ãß°¡\n");
    printf("2. µğÀúÆ® º¸±â\n");
    printf("3. µğÀúÆ® ¼öÁ¤\n");
    printf("4. µğÀúÆ® »èÁ¦\n");
    printf("\n**********************************\n");
    printf("¿øÇÏ´Â ¸Ş´º¸¦ ¼±ÅÃÇØÁÖ¼¼¿ä\n");
    scanf("%d", &n);
    getchar();
}

void UpdateDS(Dessert *ds)
{
    int num;
    printf("ì—…ë°ì´íŠ¸í•˜ê³  ì‹¶ì€ ë””ì €íŠ¸ ë²ˆí˜¸ë¥¼ ì…ë ¥í•˜ì„¸ìš”: ");
    scanf("%d", &num);
    getchar();
    num-=1;
    CreateDS(ds, num);
}
void DeleteDS(Dessert *ds)
{
    int num;
    printf("ì‚­ì œí•˜ê³  ì‹¶ì€ ë””ì €íŠ¸ ë²ˆí˜¸ë¥¼ ì…ë ¥í•˜ì„¸ìš”: ");
    scanf("%d", &num);
    getchar();
    num-=1;
    ds[num].price = -1;
    printf("ì‚­ì œê°€ ì™„ë£Œë˜ì—ˆìŠµë‹ˆë‹¤.\n");
}
