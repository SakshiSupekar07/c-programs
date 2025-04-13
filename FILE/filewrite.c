#include<stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("out.txt","w");
    if(fp==NULL)
    {
        printf("Error opening file");

    }
    fprintf(fp,"Hello GOOD Morning!!!")
    fclose(fp)
    return 0
}
