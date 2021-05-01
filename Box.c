#include <stdio.h>

//box

int main() {
    int x = 23;
    int y = 15;
    for(int g = 1; g < y; g++){
        for(int z = 1; z < x; z++){
            printf("X");
        }
        printf("\n");
    }
    return 0;
}