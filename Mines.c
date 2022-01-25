int x = 10;

//velikost (Y)
int y = 10;

//počet min = 5

int main()
{
    for(int fieldy; fieldy < y; fieldy++)
    {   
        for(int fieldx = 0; fieldx < x; fieldx++)
        {
            if (fieldx == 2 && fieldy == 5)
            {
                printf("X");
            }
            else if (fieldx == 3 && fieldy == 8)
            {
                printf("X");
            }
            else if (fieldx == 1 && fieldy == 2)
            {
                printf("X");
            }
            else if (fieldx == 9 && fieldy == 4)
            {
                printf("X");
            }
            else if (fieldx == 5 && fieldy == 7)
            {
                printf("X");
            }
            else
            {
                printf("O");
            }
        }
        printf("\n");  
    }
    return 0;
}
