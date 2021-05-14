#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ceasar_encrypt(char *ot){
    for(int f = 0; f < strlen(ot); f++){
        p[f] = p[f];
        ot += 3;
    }
    printf("%s", ot);
}

int main() {
    char ot[] = "ABCDEFGHIJK";
    ceasar_encrypt(ot);
}