#include<stdio.h>
int main()
{
    int a=3;
    int b=5;
 printf("values before swapping\n");
 printf("a=%d b=%d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
  printf("values after swapping\n");
  printf("a=%d b=%d\n",a,b);
  return 0;
    
}