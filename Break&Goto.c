#include <stdio.h>
int main(){
    int year,answer;
    loop:
    printf("\n----------------------------------------------\n");
    printf("\nPlease enter a year (ຄ.ສ ຄຣິດຕະສັກກະຫລາດ): ");
    scanf("%d",&year);
    printf("\n----------------------------------------------");
    printf("\n [1] ພ.ສ (ພຸດທະສັກກະຫລາດ)\n [2] ຈ.ສ (ຈຸລະສັກກະຫລາດ) \n Change to : ");
    scanf("%d",&answer);
    printf("\n----------------------------------------------");
    switch(answer){
        case 1: printf("\nYear in ພ.ສ is %d",year+543);
                break;
        case 2: printf("\nYear in ຈ.ສ is %d",year-638);
                break;
    };
    goto loop;
    return 0;
}
