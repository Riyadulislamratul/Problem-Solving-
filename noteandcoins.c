#include <stdio.h>

int main()
{
    float N, hun, fif, twe, ten, five, two, one, first;
    int remaining;

    scanf("%f", &N);
    remaining = N;

    hun = remaining / 100;
    remaining -= hun * 100;

    fif = remaining / 50;
    remaining -= fif * 50;

    twe = remaining / 20;
    remaining -= twe * 20;

    ten = remaining / 10;
    remaining -= ten * 10;

    five = remaining / 5;
    remaining -= five * 5;

    two = remaining / 2;
    remaining -= two * 2;

    one = remaining / 1;
    remaining -= one * 1;

    first = remaining / 0.5;
    remaining -= first * 0.5;



    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", hun);
    printf("%d nota(s) de R$ 50.00\n", fif);
    printf("%d nota(s) de R$ 20.00\n", twe);
    printf("%d nota(s) de R$ 10.00\n", ten);
    printf("%d nota(s) de R$ 5.00\n", five);
    printf("%d nota(s) de R$ 2.00\n", two);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", one);
    printf("%f moeda(s) de R$ 0.50\n", first);

    return 0;
}
