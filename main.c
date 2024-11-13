#include <stdio.h>

int main()
{
    FILE *fp;
    char ch='a';
    int b=20;
    fp=fopen("abcd.txt","w");
    if(fp==NULL)
    {
        printf("no file exists");
        return 1;
    }
    fprintf(fp,"%c %d",ch,b);
    fclose(fp);
    return 0;
}
