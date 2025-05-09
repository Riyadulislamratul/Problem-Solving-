#include <stdio.h>

int main() {
    double num;
    int count = 0;

    // Read 6 numbers
    for (int i = 0; i < 6; i++) {
        scanf("%lf", &num);

        // Check if the number is positive
        if (num > 0) {
            count++;
        }
    }

    // Print the total count of positive numbers
    printf("%d valores positivos\n", count);

    return 0;
}
