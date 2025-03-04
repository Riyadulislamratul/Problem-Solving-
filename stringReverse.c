#include<stdio.h>
int main()
{
    char str[100];
    int l=0,i;
    printf("Enter Name :");
    scanf("%s", &str);
    for(i=0;str[i]!='\0';i++)
    {
        l++;
    }

    for(i=l-1;i>=0;i--)
    {
        printf("%c", str[i]);
    }
    return 0;
}
