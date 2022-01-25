#include <stdio.h>

int main() 
{
    int hlavy;
    printf("Kolik hlav?\t");
    scanf("%i", &hlavy);
    printf("počet hlav: %i\n", hlavy);

    int nohy;
    printf("Kolik noh?\t");
    scanf("%i", &nohy);
    printf("počet noh: %i\n\n", nohy);

    int slep = nohy / 2;
    int krav = 0;
    for(int x = nohy / 2; x != hlavy; x--)
    {
        krav++;
        slep = slep - 2;
    }
    if(nohy % 2 > 0 || nohy / 4.1 > hlavy)
    {
        printf("To nepůjde");
    }
    else
    {
        printf("Slepice = %i\n", slep);
        printf("Krávy = %i\n", krav);
    }
    return 0;
}
