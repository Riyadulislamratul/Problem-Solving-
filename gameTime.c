#include<stdio.h>
int main()
{
    int start,end,equ;
    scanf("%d%d",&start,&end);
    if(end>start)
    {
        equ=end-start;
    }
    else{
        equ=24-start+end;
    }
    printf("O JOGO DUROU %d HORA(S)\n",equ);
    return 0;
}
