#include<stdio.h>
#include<math.h>

int main()
{
    int i, j, k, l, m;
    char c='A';
    for(i=0; i<7; i++)
    {   
        // G=71
        // F=70
        /* This loop prints the first half characters */
        for(j=65;j<=71-i; j++)
        {
            printf("%c ", j);
        }
        /* This loop will print the spaces after the first half */
        for(k=0; k<i; k++)
        {
            printf("1 ");
        }
        
        /* This will print the second half of spaces */
        for(l=i;l>1;l--)
        {
            printf("0");
        }

        /* This will print the rest characters */
        /*
            In the first line j is on H
            to print F I need to minus 2 that is F
            In the second line it is also started with F

            first line i=0
            second line i=1
        */
       --j; // positioning the j to the last character it printed
       // for the first iteration the last character it printed is G
       // after printing G it is promoted into H
       // now j is on G         g=71
       // F=70
       for(m=j-i-1; m>=65; m--)
        printf("%c ", m);


        printf("\n");
    }

    return 0;
}