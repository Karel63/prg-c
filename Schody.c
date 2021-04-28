#include <stdio.h>
#define Velikost 12

//schody

int main() {
    int a = 1;
    int c = 2;
    for(int b = Velikost; b > a; a++){
        if(a == c){
            c++;
            a = 1;
            printf("\n");
        }
        printf("D");

    }
    return 0;
}