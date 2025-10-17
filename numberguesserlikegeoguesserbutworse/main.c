#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_NUMBER 100
#define MIN_NUMBER 1

int get_random_int(const int min, const int max) {
    return rand() % (max - min + 1) + min;
}

int main(void) {
    srand((unsigned)time(NULL));

    int been_cleared = 0;

    const int target = get_random_int(MIN_NUMBER, MAX_NUMBER);
    int input = -1;
    int attempts = 0;
    do {

        printf("\nEnter an integer between 1 and %d: ", MAX_NUMBER);
        scanf("%d", &input);
        while (getchar() != '\n') {been_cleared = 1;}
        if (been_cleared == 1) {
            printf("[ERROR] Incorrect input\n");
            continue;
        }

        if (input > MAX_NUMBER) {
            printf("The number is too high\n");
            printf("Please use number between interval %d-%d\n", MIN_NUMBER, MAX_NUMBER);
            continue;
        }
        if (input < MIN_NUMBER) {
            printf("The number is too low\n");
            printf("Please use number between interval %d-%d\n", MIN_NUMBER, MAX_NUMBER);
            continue;
        }

        if (input > target) {
            printf("The target number is lower than %d\n", input);
        } else if (input < target) {
            printf("The target number is higher than %d\n", input);
        }
        attempts++;

    } while (target != input);

    printf("You have guessed the correct number!\nYou needed %d attempts.\n", attempts);

    return 0;
}