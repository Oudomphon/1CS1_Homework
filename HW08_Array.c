#include <stdio.h>
int main(){
    char student[][16]={"\0","Dalavang","Sivanonh","Souksomphone","Juje","Sokxay","Nouyongxiong","Anosith","Oudomphon","Thipphavong","Thippavanh","Vanasack","Anoulack","Solichanh","Sanaxay","Christmas","Sitthiphone","Soukdavy","Sanakham","Souphaxay","Thongchanh","Zeokham","Phouthongphet","Manikone","Pamisouk","Anousa","Ekthavyphon","Laofong","Mina","Andina"};
    printf("---------------------\n");
    printf("1CS1 Student:\n");
    for (int i=1;i<30;i++){
    printf("%d. %s\n",i,student[i]);
    }
    printf("---------------------\n");
    return 0;
}