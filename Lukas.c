int l(int n)
{
    if(n == 1)
    {
        return 2; 
    }
    if(n == 2)
    { 
        return 1; 
    }
        n-=1;
        int x = 2;
        int z, y = 1;
        while(n) 
    {
        z = y;
        y+= x;
        x = z;
        n--;
    }
    return y;
}
int main() {
    printf("%i", l(5));
    return 0;
}