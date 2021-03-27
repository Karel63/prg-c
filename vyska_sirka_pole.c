#include <stdio.h>

//tento program vypisuje šířku a výšku pole se znaménkem #

const int SIRKA = 8;
const int VYSKA = 10;

int main() {
    int pole[SIRKA][VYSKA];
    int x;
    int y;
    for(y = 0; y < VYSKA; y++){
        for(x = 0; x < SIRKA; x++){
            
            printf("#");
        }
        printf("\n");
    }
    return 0;
}