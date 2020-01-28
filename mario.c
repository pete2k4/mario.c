#include <cs50.h>
#include <stdio.h>

int main(void)
{    
    int n;
    do
    {
        n = get_int("Height: ");
    }    
    while (n < 1 || n > 8);
    
   for (int i = 0; i < n ; i++)
   {
           for (int l = 0; l< n-i-1; l++)
           {
               printf(" ");
           }    
               for (int j = 0; j < i+1 ; j++)                                 
           printf("#");                           
           printf("  ");
       for (int e = 0; e<i+1; e++)
           printf("#");
       printf("\n"); 
   }
}
