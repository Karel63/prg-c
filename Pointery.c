#include <stdio.h>

//zkouška pointerů

int main() {
    int pole[3] = {5, 8, 4};
    int *p = pole;
    p++;
    printf("%i", *p);
    return 0;
}