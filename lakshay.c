#include<stdio.h>

void main(){
    // table kiska print karna hai Ex: 41
    // table kaha tak print karna hai Ex: 10
    // do variables 
    int n,t;
    printf("table kiska print karna hai : ");
    scanf("%d",&n);
    printf("table kaha tak print karna hai : ");
    scanf("%d",&t);

    for(int i=0;i<t;i++)
    {
        printf("%d * %d = %d \n",n,i+1,(n*(i+1)));
    }
}
