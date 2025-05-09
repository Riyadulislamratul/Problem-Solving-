#include <stdio.h>

int main()
{

    int N,hun,fif,twe,ten,five,two,one;
    scanf("%d",&N);
    hun=N/100;
    fif=(N%100)/50;
    twe=((N%100)%50)/20;
    ten=(((N%100)%50)%20)/10;
    five=((((N%100)%50)%20)%10)/5;
    two=(((((N%100)%50)%20)%10)%5)/2;
    one=((((((N%100)%50)%20)%10)%5)%2)/1;
    printf("%d\n", N);
    printf("%d nota(s) de R$ 100,00\n",hun);
    printf("%d nota(s) de R$ 50,00\n",fif);
    printf("%d nota(s) de R$ 20,00\n",twe);
    printf("%d nota(s) de R$ 10,00\n",ten);
    printf("%d nota(s) de R$ 5,00\n",five);
    printf("%d nota(s) de R$ 2,00\n",two);
    printf("%d nota(s) de R$ 1,00\n",one);
    return 0;
}
