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
    printf("The Name Length: %d", l);
    return 0;
}
