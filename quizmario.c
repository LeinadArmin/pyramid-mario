#include <stdio.h>

int get_height(void);

int main(void)
{
    //Preguntar alto piramide hasta que se cumpla la condicion (minimo 1 / maximo 8)
    int height = get_height();
    int width = height;

    
    //Print height of toward - LEFT
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            printf(" ");
        }
        
        width--;

        for (int j = 0-1; j < i; j++)
        {          
            printf("#");
        }

        printf(" ");

        for (int j = 0-1; j < i; j++)
        {
            printf("#");
        }
        
        
        printf("\n");    
    }

    
    
    
}

int get_height(void)
{
    int i;
    do
    {
        printf("Height: ");
        scanf("%i",&i);
    } while (i < 1 || i > 8);

    return i;
}

   