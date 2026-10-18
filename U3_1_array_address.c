/* Unit 3 - Program 1: Array elements with their memory addresses */
#include <stdio.h>

int main() {
    int intArr[5];
    float floatArr[5];
    char charArr[5];
    int i;

    printf("Enter 5 integers: ");
    for (i = 0; i < 5; i++) {
        scanf("%d", &intArr[i]);
    }

    printf("Enter 5 float numbers: ");
    for (i = 0; i < 5; i++) {
        scanf("%f", &floatArr[i]);
    }

    printf("Enter 5 characters: ");
    for (i = 0; i < 5; i++) {
        scanf(" %c", &charArr[i]);
    }

    printf("\n--- Integer Array ---\n");
    for (i = 0; i < 5; i++) {
        printf("Value = %d \t Address = %p\n", intArr[i], (void *)&intArr[i]);
    }

    printf("\n--- Float Array ---\n");
    for (i = 0; i < 5; i++) {
        printf("Value = %.2f \t Address = %p\n", floatArr[i], (void *)&floatArr[i]);
    }

    printf("\n--- Character Array ---\n");
    for (i = 0; i < 5; i++) {
        printf("Value = %c \t Address = %p\n", charArr[i], (void *)&charArr[i]);
    }

    return 0;
}
