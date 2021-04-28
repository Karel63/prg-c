#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//nahodna cislo od 0 do 100

int main() {
    float cislo;
    srand(time(NULL));
    cislo = (rand() / 100) % 101;
    printf("nahodne cislo je %04.1f", cislo);
    return 0;
}