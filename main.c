#include "dessert.h"

int main(void){
    int count = 0; // 데이터개수
    int menu = 0;

    Dessert ds[100];
    int index = 0; // 데이터번호

    count = loadData(ds);
    index = count;


    while (1){
        menu = selectProduct();
        if (menu == 0) break;

        if (menu == 1){
            count += CreateDS(&ds[index++]);
            printf("=>추가됨!\n");
        }

        else if (menu == 2){
            if(count > 0)
                ListDS(ds, index);
            else
                printf("데이터가 없습니다.\n");
        }

        else if (menu == 3){
            int no = selectDataNo(ds, index);
            if(no == 0){
              printf("=> 취소됨!\n");
                continue;
            }
//            UpdateDS(ds[no-1]);
            UpdateDS(ds, no);
            ListDS(ds, index);
        }

        else if (menu == 4){
            int no = selectDataNo(ds, index);
            if(no == 0){
                printf("=> 취소됨!\n");
                continue;
            }

            int deleteok;
            printf("정말로 삭제하시겠습니까?(삭제 :1)");
            scanf("%d", &deleteok);
            if(deleteok == 1){
                DeleteDS(ds, no);
                count -= 1;
            }
            printf("=>삭제됨!\n");
        }

        else if (menu == 5){
            saveData(ds, index);
        }
    }  
    
    return 0;
}