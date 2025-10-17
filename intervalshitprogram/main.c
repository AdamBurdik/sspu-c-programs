#include <stdio.h>
#define MAX_NUMBER 100
#define MIN_NUMBER 10

int main() {

    int number = MAX_NUMBER + 1;
    do {
        printf("Enter an integer: ");
        scanf("%d", &number);

        int been_cleared = 0;
        while (getchar() != '\n') {been_cleared = 1;}
        if (been_cleared == 1) {
            printf("[ERROR] Incorrect input\n");
            continue;
        }

        if (number > MAX_NUMBER) {
            printf("The number is too high\n");
            printf("Please use number between interval %d-%d\n", MIN_NUMBER, MAX_NUMBER);
        } else if (number < MIN_NUMBER) {
            printf("The number is too low\n");
            printf("Please use number between interval %d-%d\n", MIN_NUMBER, MAX_NUMBER);
        }
    } while (number < MIN_NUMBER || number > MAX_NUMBER);

    printf("Number: %d\n", number);

    // Use of correct integer number here

    return 0;
}