#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ceasar_encrypt(char *ot){
    for(int f = 0; f < strlen(ot); f++){
        p[f] += 3;
    }
    printf("%s\n", ot);
}

int main() {
    char ot[] = "ABCDEFGHIJK";
    printf("%s\n", ot);
    ceasar_encrypt(ot);
}