#include <stdio.h>

int main() {
    double N;
    int notes, coins;
    int note_values[] = {100, 50, 20, 10, 5, 2};
    int coin_values[] = {100, 50, 25, 10, 5, 1};

    scanf("%lf", &N);

    int total_cents = (int)(N * 100 + 0.5); // Convert to cents to avoid precision errors

    printf("NOTAS:\n");
    for (int i = 0; i < 6; i++) {
        notes = total_cents / (note_values[i] * 100);
        total_cents %= (note_values[i] * 100);
        printf("%d nota(s) de R$ %d.00\n", notes, note_values[i]);
    }

    printf("MOEDAS:\n");
    for (int i = 0; i < 6; i++) {
        coins = total_cents / coin_values[i];
        total_cents %= coin_values[i];
        printf("%d moeda(s) de R$ %.2f\n", coins, coin_values[i] / 100.0);
    }

    return 0;
}
