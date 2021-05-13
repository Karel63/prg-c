#include <stdio.h>

void ceasar_encrypt(*p){
    printf("%c, ", p);
}

int main() {
    char p = 65;
    for(int d = ; p <= d; d++){
        p = *p + 2;
        ceasar_encrypt; 
    }
    return 0;
}

//lépe už to nevymyslím...