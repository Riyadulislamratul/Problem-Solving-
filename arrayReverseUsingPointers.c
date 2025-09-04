#include <stdio.h>

int main()
{
    int a[100], n, i;
    int *ptr;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // Set pointer to the last element of the array
    ptr = &a[n - 1];

    // Print elements in reverse order using pointer
    printf("Array in reverse order:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", *ptr);
        ptr--;  // Move pointer to the previous element
    }

    printf("\n");

    return 0;
}

