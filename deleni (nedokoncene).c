int main() {
    int x = 10;
    int y = 21;
    if(y > x){
        x = y / x;
        printf("%d", x);
    }
    return 0;
}