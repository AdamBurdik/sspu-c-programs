#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int x;
    int y;
} Point;

void print_point(const Point *p) {
    printf("Point(%d, %d)\n", p->x, p->y);
}

void add_point(Point *p, const int dx, const int dy) {
    p->x += dx;
    p->y += dy;
}

int main(void) {

    Point a = {1, 2};
    print_point(&a);

    add_point(&a, 10, 10);
    print_point(&a);

    free(&a);



    return 0;
}