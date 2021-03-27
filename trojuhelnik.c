int main() {
    int i = 1;
    int h = 8;
    int f = 1;
    while(i < h){
    printf(" ");
    i++;
    if(i >= h){
        for(int t = 1; t <= f; t = t + 2){
            printf("* ");
        }
        printf("\n");
        i = 1;
        h--; 
        f = f + 2;
        continue;
    }
    }
    for(int t = 1; t <= f; t = t + 2){
        printf("* ");
    }
    return 0;
}