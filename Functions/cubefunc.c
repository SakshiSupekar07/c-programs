#include<stdio.h>
int cube(int x)
{
    int res=x*x*x;
    return res
}
int main()
{
    
    int x=10;
    int ans=cube(x);
    printf("Answer is %d\n",ans)
    return 0;
}