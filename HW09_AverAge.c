#include <stdio.h>
int main()
{
    char student[][16]={"\0","Dalavang","Sivanonh","Souksomphone","Juje","Sokxay","Nouyongxiong","Anosith","Oudomphon","Thipphavong","Thippavanh","Vanasack","Anoulack","Solichanh","Sanaxay","Christmas","Sitthiphone","Soukdavy","Sanakham","Souphaxay","Thongchanh","Zeokham","Phouthongphet","Manikone","Pamisouk","Anousa","Ekthavyphon","Laofong","Mina","Andina"};
    int age[]=
    {
        0,18,19,20,18,19,21,22,23,20,19,18,19,18,19,18,20,18,19,18,19,20,18,19,18,19,18,19,20,18
    };
    printf("-----------------------------------\n");
    printf("1CS1 Student:\n");
    printf("-----------------------------------\n");
    int sum=0,i;
    for (i=1;i<30;i++){
        printf("%s\tis\t%d \n",student[i],age[i]);
        sum+=age[i];
    }
    printf("-----------------------------------\n");
    printf("The average of age is %d \n",sum/i);
    printf("-----------------------------------\n");
    return 0;
}