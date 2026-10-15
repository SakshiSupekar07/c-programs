#include<stdio.h>
int main()
{
    int i,j;
    printf("Enter the two integers");
    scanf("%d%d",&i,&j);
    int add=i+j;
    int sub=i-j;
    int mul=i*j;
    int div=i/j;
    printf("The addition of two numbers is %d\n",add);
    printf("The subtraction of two numbers is %d\n",sub);
    printf("The Multiplication of two numbers is %d\n",mul);
    printf("The division of two numbers is %d\n",div);
    return 0;


}
