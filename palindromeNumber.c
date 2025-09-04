#include <stdio.h>
int main() {
    int num, rev, rem, org;
    printf("Enter a number: ");
    scanf("%d", &num);
    org = num;
    for (rev=0; num != 0; num /= 10) {
        rem = num % 10;
        rev = rev * 10 + rem;
    }
    if (org == rev) {
        printf("%d is a palindrome number.\n", org);
    } else {
        printf("%d is not a palindrome number.\n", org);
    }
    return 0;
}

