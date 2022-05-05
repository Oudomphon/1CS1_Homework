#include<stdio.h>
extern int L,l,Area;
void rectangle(void){
printf("Wanna find area of rectangle? \n Pls tell me the length is \n");
scanf("%d",&L);
printf("The width is \n");
scanf("%d",&l);
Area = L*l;
printf("The result is %d",Area);
}
