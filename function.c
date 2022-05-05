#include <stdio.h>
void plus(int,int);
void minus(int,int);
void multiple(int,int);
void divide(int,int);

int main(){
    int a,b;
    int select;
    printf("Enter number: \na = ");s
    scanf("%d",&a);
    printf("\nb = ");
    scanf("%d",&b);
    printf("\nSelect a function : \n 1. PLUS \n 2. MINUS \n 3. MULTIPLE \n 4. DIVIDE \n");
    scanf("%d",&select);
    switch(select){
        case 1: plus(a,b);break;
        case 2: minus(a,b);break;
        case 3: multiple(a,b);break;
        case 4: divide(a,b);break;
        default : printf("End");break;
    }
    return 0;
}
void plus(a,b){
    printf("%d",a+b);
}
void minus(a,b){
    printf("%d",a-b);
}
void multiple(a,b){
    printf("%d",a*b);
}
void divide(a,b){
    printf("%d",a/b);
}