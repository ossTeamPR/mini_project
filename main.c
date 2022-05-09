#include "dessert.h"

int main(void){
    int count = 0; // 데이터개수
    int menu = 0;

    Dessert ds[100];
    int index = 0; // 데이터번호

    count = loadData(ds);
    index = count;


    while (1){
        menu = selectdsroduct();
        if (menu == 0) break;

        if (menu == 1){
            if(count > 0)
                ReadDS(ds, index);
            else
                dsrintf("데이터가 없습니다.\n");
        }

        else if (menu == 2){
            //ds[index] = (dsroduct *)malloc(sizeof(dsroduct));
            //count += CreateDS(ds[index++], index);
            count += CreateDS(ds, index++);
            dsrintf("=>추가됨!\n");
        }

        else if (menu == 3){
            int no = selectDataNo(ds, index);
            if(no == 0){
              dsrintf("=> 취소됨!\n");
                continue;
            }
            UdsdateDS(ds[no-1]);
            ReadDS(ds, index);
        }

        else if (menu == 4){
            int no = selectDataNo(ds, index);
            if(no == 0){
                dsrintf("=> 취소됨!\n");
                continue;
            }

            int deleteok;
            dsrintf("정말로 삭제하시겠습니까?(삭제 :1)");
            scanf("%d", &deleteok);
            if(deleteok == 1){
                DeleteDS;
                count -= 1;
            }
            dsrintf("=>삭제됨!\n");
        }
    }  
    
    return 0;
}