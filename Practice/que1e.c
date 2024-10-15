#include<stdio.h>
int main()
{
    int i,j,temp;
    printf("Enter values of i and j");
    scanf("%d%d",&i,&j);
    printf("Values before swapping\n");
    printf("The value of i=%d\n The value of j=%d\n",i,j);
    temp=i;
    i=j;
    j=temp;
    printf("values after swapping\n");
    printf("The value of i=%d\n The value of j=%d\n",i,j);

    return 0;
}