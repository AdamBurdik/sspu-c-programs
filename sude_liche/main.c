#include <stdio.h>

int main() {
    int number = 0;
    do {
        printf("Enter an integer: ");
        scanf("%d", &number);

        int been_cleared = 0;
        while (getchar() != '\n') { been_cleared = 1; }
        if (been_cleared != 0) {
            printf("[ERROR] Please enter valid number\n");
            continue;
        }

        if (number == 0) {
            printf("The number is zero. Exiting the program.\n");
            return 0;
        }
        if (number % 2 == 0) {
            printf("The number %d is even\n", number);
        } else {
            printf("The number %d is odd\n", number);
        }
    } while (number != 0);

    return 0;
}
