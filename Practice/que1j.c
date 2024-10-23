#include<stdio.h>
int main()
{
    int i;
    double d;
    long double ld;
    char ch;
    printf("Enter the value of integer\n");
    scanf("%d",&i);
    printf("Enter the value of double\n");
    scanf("%lf",&d);
    printf("Enter the value of long double\n");
    scanf("%Lf",&ld);
    printf("Enter the value of character\n");
    scanf(" %c",&ch);
    printf("printing the values\n");
    printf("value of integer is%d\n",i);
    printf("value of double is%lf\n",d);
    printf("value of long double is%Lf\n",ld);
    printf("Value of character is: %c\n", ch);


    return 0;

    
}