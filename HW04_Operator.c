#include<stdio.h>
int main(){
    printf("\n---------------------------\n");

    //Arithmetic Operators
    printf("Arithmetic Operator Example\n");
    printf("---------------------------\n\n");
    int x=24,y=12,z;
    z=x+y;
    printf("x+y=%d\n",z);
    z=x-y;
    printf("x-y=%d\n",z);
    z=x*y;
    printf("x*y=%d\n",z);
    z=x/y;
    printf("x/y=%d\n",z);
    z=x%y;
    printf("x mod y=%d\n",z);
    z=15;
    printf("z=%d\n",z);
    z++;
    printf("z=%d\n",z);
    z--;
    printf("z=%d\n",z);

    printf("\n---------------------------\n");
    //Relational Operators
    printf("Relational Operator Example\n");
    printf("---------------------------\n\n");
    int A,B;
    A=2,B=3;
    if(A==B){
        printf("A==B is True\n");
    }
    else{
        printf("A==B is False\n");
    }
    if(A!=B){
        printf("A!=B is True\n");
    }
    else{
        printf("A!=B is False\n");
    }
    if(A>B){
        printf("A>B is True\n");
    }
    else{
        printf("A>B is False\n");
    }
    if(A<B){
        printf("A<B is True\n");
    }
    else{
        printf("A<B is False\n");
    }
if(A>=B){
        printf("A>=B is True\n");
    }
    else{
        printf("A>=B is False\n");
    }
    if(A<=B){
        printf("A<=B is True\n");
    }
    else{
        printf("A<=B is False\n");
    }
    
    printf("\n---------------------------\n");
    //Logical Operators
    printf("Logical Operator Example\n");
    printf("---------------------------\n\n");
    int C,D;
    C=1,D=0;
    if(C&&D)
    {
        printf("( C && D ) = True\n");
    }
    else{
        printf("( C && D ) = False\n");
    }
    if(C||D)
    {
        printf("( C || D ) = True\n");
    }
    else{
        printf("( C || D ) = False\n");
    }
    
    printf("\n---------------------------\n");
    //Bitwise Operators
    printf("Bitwise Operator Example\n");
    printf("---------------------------\n\n");
    unsigned int G=39,H=64,I;
    I=G & H ;
    printf("G & H = %d\n",C);
    I=G|H ;
    printf("G|H = %d\n",C);
    I=G^H ;
    printf("G^H = %d\n",C);
    I=~H ;
    printf("~H = %d\n",C);
    I=H<<2 ;
    printf("H<<2 = %d\n",C);
    I=H>>2 ;
    printf("H>>2 = %d\n",C);

    printf("\n---------------------------\n");
    //Assigned Operators
    printf("Assigned Operator Example\n");
    printf("---------------------------\n\n");
    C=40,D=50;
    int E;
    E=C+D ;
    printf("C+D = %d\n",E);
    E+=C;
    printf("E+=C is %d\n",E);
    E-=C;
    printf("E-=C is %d\n",E);
    E*=C;
    printf("E*=C is %d\n",E);
    E/=C;
    printf("E/=C is %d\n",E);
    E%=C;
    printf("E mod= C is %d\n",E);
    E<<=2;
    printf("E <<=2 is %d\n",E);
    E>>=2;
    printf("E >>=2 is %d\n",E);
    E&=2;
    printf("E &=2 is %d\n",E);
    E^=2;
    printf("E ^=2 is %d\n",E);
    E|=2;
    printf("E |=2 is %d\n",E);
    
    printf("\n---------------------------\n");
    printf("   Thank you (^ o ^)");
    printf("\n---------------------------\n");
    return 0;
}
