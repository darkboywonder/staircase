#include <stdio.h>
#include <cs50.h>


int main(void)
{
    //variable for height
    int height;
    
    //gets an int from user used for height
    do
    {
        printf("height please: ");
        height = GetInt();
    } 
    while (height < 0 || height > 23 );
    
    //loops through each level established by height
    for (int i = 0; i < height; i++)
    {
        //prints allowed amount of spaces per line
        for (int j = 1; j < (height - i); j++)
        {
            printf(" ");
        }
        
        // prints allowed amount of #'s per line
        for (int k = 0; k < (i + 2); k++)
        {
            printf("#");
        }
        
        // moves to new line 
        printf("\n");
    }
    //That's all folks!
    return 0;
}
