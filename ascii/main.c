#include <stdio.h>
#define COUNT 128
#define OFFSET 32
#define WIDTH 8

int main(void) {
    int i = 0;
    for (int code = OFFSET; code <= COUNT; code++) {
        printf("%4d %c", code, code);

        i++;
        if (i % WIDTH == 0) {
            printf("\n");
        }

    }
    return 0;
}