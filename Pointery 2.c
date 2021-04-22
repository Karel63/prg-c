#include <stdio.h>

//pointery 2

int main() {
    int pole[4] = {10, 20, 30, 40};
    int *t = pole;
    printf("%i\n%i", *t, *t++);
    return 0;
}