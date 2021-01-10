/* Prints a specific pattern */
/* Author: Shouvik Mandal */
/* Let Us C Chapter 4 D.f */
#include<stdio.h>


int main()
{
    int i, j, k;
    for(i=65; i<=71; i++)
        printf("%c ", i);
    for(i=i-2; i>=65; i--)
        printf("%c ", i);
    printf("\n");   // line break
    // FROM THIS POINT PRINTING OF SECOND LINE STARTS
    for(i=0; i<6; i++)  // THIS LOOP HANDLES HOW MANY LINES TO PRINT
    {
        for(j=65; j<=70-i; j++) // THIS LOOP PRINTS THE FIRST HALF CHARACTERS
        {
            printf("%c ", j);
        }

        // WE NEED ANOTHER LOOP TO PRINT SPACES
        // i=0 s=1
        // i=1 s=3
        // i=2 s=5 
        // i=3 s=7
        // i=4 s=9
        

        // I need to iterate this loop every next odd number from 1
        for(k=0; k<i+(i+1); k++)
        {
            printf("  ");
        }

        // WE NEED ANOTHER LOOP TO PRINT THE NEXT HALF CHARACTERS
        for(j=j-1; j>=65; j--)
            printf("%c ", j);

        printf("\n");   // LINE BREAK
    }

    return 0;
}