#include<stdio.h>
int main()
{
    
    char str[50];  
    printf("Enter the string: ");
    scanf("%[^\n]", str);
   

    printf("You entered: %s\n", str);

    return 0;
}




