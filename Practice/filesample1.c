#include<stdio.h>
int main()
{
    FILE *fp;
  char ch;
    fp=fopen("out.txt","r")
    if(fp==NULL)
    {
        printf("Error opening file");

    }
    fscanf(fp,"%c",&ch);
    printf("Character is=%c",ch)
    fclose(fp);
    return 0
}
