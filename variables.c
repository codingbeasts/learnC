// checking scope of variable in c
#include<stdio.h>

int num1,num2;
void callvar(){
num1 = 20;
num2 = 20;
printf("num 1 : %d \n",num1);
printf("num 2 : %d",num2);
}

void main (){
    callvar();
}
