/* Unit 3 - Program 2: Sum of all elements of a one-dimensional array */
#include <stdio.h>

int main() {
    int arr[100];
    int n, i, sum = 0;

    printf("How many elements? ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        sum = sum + arr[i];
    }

    printf("Sum of all elements = %d\n", sum);

    return 0;
}
