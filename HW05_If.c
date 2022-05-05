#include<stdio.h>
int main(){
    int i=1;
    while (i>0){
    int score;
    printf("\n\n===========================\n");
    printf("\nInsert your score (0-100): \n\n");
    scanf("%d",&score);
    if(score <0 || score >100 )
        printf("\nPLEASE INSERT CORRECT NUMBER!");
    else if (score >= 91)
        printf("\nYour NUOL grade is A");
    else if (score >= 81)
        printf("\nYour NUOL grade is B+");
    else if (score >= 70)
        printf("\nYour NUOL grade is B");
    else if (score >= 65)
        printf("\nYour NUOL grade is C+");
    else if (score >= 60)
        printf("\nYour NUOL grade is C+");
    else if (score >= 55)
        printf("\nYour NUOL grade is D+");
    else if (score >= 50)
        printf("\nYour NUOL grade is D");
    else
        printf("\nYour NUOL grade is F");
    }
    return 0;
}
