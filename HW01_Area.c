#include <stdio.h>
#include <math.h>

#define PI 3.14159265

void circle();
void pentagon();
void trapezium();
void triangle();

int main(){
    int select;
    printf("\n----------------------------------------------\n");
    printf("\nPlease select a shape to calculate the area :\n");
    printf("\n 1) Circle \n 2) Pentagon \n 3) Trapezium \n 4) Triangle \n");
    printf("\n----------------------------------------------\n");
    loop:
    printf("select : ");
    scanf("%d",&select);
    printf("\n----------------------------------------------\n");
    switch(select){
        case 1: circle();goto loop;break;
        case 2: pentagon();goto loop;break;
        case 3: trapezium();goto loop;break;
        case 4: triangle();goto loop;break;
        default: goto loop;break;
    }
    return 0;
}

void circle(){
    float r;
    printf("r = ");
    scanf("%f",&r);
    printf("\n----------------------------------------------\n");
    printf("The area of circle is %f",r*r*PI);
    printf("\n----------------------------------------------\n");
}

void pentagon(){
    float b,h;
    printf("b = ");
    scanf("%f",&b);
    h=b/(2*tan(PI/5));
    printf("\n----------------------------------------------\n");
    printf("The area of pentagon is %f",(b*h)*5/2);
    printf("\n----------------------------------------------\n");
}

void trapezium(){
    float a,b,h;
    printf("a = ");
    scanf("%f",&a);
    printf("b = ");
    scanf("%f",&b);
    printf("h = ");
    scanf("%f",&h);
    printf("\n----------------------------------------------\n");
    printf("The area of trapezium is %f",(a+b)*h/2);
    printf("\n----------------------------------------------\n");
}

void triangle(){
    float b,h;
    printf("b = ");
    scanf("%f",&b);
    printf("\n----------------------------------------------\n");
    printf("The area of trapezium is %f",b*b*sqrt(3)/4);
    printf("\n----------------------------------------------\n");
}