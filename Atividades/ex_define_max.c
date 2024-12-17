#include <stdio.h>
#include <stdlib.h>

#define MAX(x, y) ((x) > (y) ? (x) : (y))

int main() {
    printf("%d\n", MAX(5, 3));
    return 0;
}