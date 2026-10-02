#include <stdio.h>
#include <stdbool.h>

int main()
{
    int height;

    while(true)
    {
        printf("Height: ");
        scanf("%d", &height);

        if(height<=8 && height>0)
        {
            break;
        }
    }

    for(int i=1; i<=height; i++)
    {
        for(int j=1; j<=height-i; j++)
        {
            printf(" ");
        }

        for(int k=1; k<=i; k++)
        {
            printf("#");
        }

        printf("  ");

        for(int l=1; l<=i; l++)
        {
            printf("#");
        }

        printf("\n");
    }

    return 0;
}
