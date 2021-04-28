#include <stdio.h>

//microtest 3

int main() {
    int *a[5] = {10, 20, 30, 40, 50};
    &a = a[0];
    *a = 3;
    printf("%i", a);
    return 0;
}