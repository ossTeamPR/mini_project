#include "dessert.h"

int main(void){
    int count = 0; // �����Ͱ���
    int menu = 0;

    Dessert ds[100];
    int index = 0; // �����͹�ȣ

    //count = loadData(ds);
    index = count;


    while (1){
        menu = selectProduct();
        if (menu == 0) break;

        if (menu == 1){
            if(count > 0)
                ReadDS(ds, index);
            else
                printf("�����Ͱ� �����ϴ�.\n");
        }

        else if (menu == 2){
            //ds[index] = (dsroduct *)malloc(sizeof(dsroduct));
            //count += CreateDS(ds[index++], index);
            count += CreateDS(ds, index++);
            printf("=>�߰���!\n");
        }

        else if (menu == 3){
            int no = selectDataNo(ds, index);
            if(no == 0){
              printf("=> ��ҵ�!\n");
                continue;
            }
//            UpdateDS(ds[no-1]);
            UpdateDS(ds);
            ReadDS(ds, index);
        }

        else if (menu == 4){
            int no = selectDataNo(ds, index);
            if(no == 0){
                printf("=> ��ҵ�!\n");
                continue;
            }

            int deleteok;
            printf("������ �����Ͻðڽ��ϱ�?(���� :1)");
            scanf("%d", &deleteok);
            if(deleteok == 1){
                DeleteDS;
                count -= 1;
            }
            printf("=>������!\n");
        }
    }  
    
    return 0;
}