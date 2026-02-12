#include <stdio.h>
#include <math.h>

float get_float(const char* text) {
    float input;
    int been_cleared = 0;

    for (;;) {
        printf(text);
        scanf("%f", &input);

        been_cleared = 0;
        while (getchar() != '\n') {been_cleared = 1;}
        if (been_cleared == 0) {
            return input;
        }

        printf("[ERROR] Invalid input\n");
    }
}

int get_int(const char* text) {
    int input;
    int been_cleared = 0;

    for (;;) {
        printf(text);
        scanf("%d", &input);

        been_cleared = 0;
        while (getchar() != '\n') {been_cleared = 1;}
        if (been_cleared == 0) {
            return input;
        }

        printf("[ERROR] Invalid input\n");
    }
}

char get_char(const char* text) {
    char input;
    int been_cleared = 0;

    for (;;) {
        printf(text);
        scanf("%c", &input);

        been_cleared = 0;
        while (getchar() != '\n') {been_cleared = 1;}
        if (been_cleared == 0) {
            return input;
        }

        printf("[ERROR] Invalid input\n");
    }
}

int main(void) {
    char should_continue = 'y';
    do {

        const float radius = get_float("Enter radius: ");

        printf("1 | Circle circumference\n");
        printf("2 | Circle area\n");
        printf("3 | Sphere volume\n");
        printf("4 | Sphere surface\n");
        const int operation = get_int("Zadej operaci: ");
        switch (operation) {
            case 1: {
                printf("Circle circumference: %.2f\n", 2 * M_PI * radius);
                break;
            }
            case 2: {
                printf("Circle area: %f.2\n", M_PI * radius * radius);
                break;
            }
            case 3: {
                printf("Sphere volume: %f.2\n", 4.0f/3.0f * M_PI * radius * radius * radius);
                break;
            }
            case 4: {
                printf("Sphere surface: %f.2\n", 4 * M_PI * radius * radius);
                break;
            }
            default: {
                printf("Invalid Operation\n");
            }
        }

        should_continue = get_char("Should continue (y/n): ");

    } while (should_continue == 'y');

    return 0;
}
