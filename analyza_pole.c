int main()
{
    int pocet = 10;
    int cislo, p[pocet];
    int count = sizeof(p) / sizeof(p[1]);
    int max = 100, min = 1;
    int seed = time(NULL);
    srand(seed);
    printf("%i ", min);
    for (int i = 0; i < count; i++)
    {
        p[i] = rand() % max;
        printf("%i ", p[i]);
    }
    for (int t = 0; t < count; t++)
    {
        for (int i = 0; i < count - t - 1; i++)
        { 
            if (p[i] > p[i + 1])
            {
                cislo = p[i];
                p[i] = p[i + 1];
                p[i + 1] = cislo;
            }
        }
    }
    for (int i = 0; i < count; i++)
    {
        printf("%i ", p[i]);
    }
    printf("%i ", max);
    return 0;
}