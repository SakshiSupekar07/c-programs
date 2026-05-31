#include<stdio.h>
#include<math.h>
int main()
{
    int a, b,c;
    printf("Enter the coefficient of a,b");
    scanf("%d%d",&a,&b);
    printf("Enter the constant");
    scanf("%d",&c);
    int res =(-b+sqrt(b*b-4*a*c))/(2*a);
       printf("The root is%d\n",res);
    int res1=(-b-sqrt(b*b-4*a*c))/(2*a);
         printf("The root is%d\n",res1);
    return 0

}