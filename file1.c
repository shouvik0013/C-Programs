#include<stdio.h>


int main()
{
    FILE *f1;

    char c;

    printf("\nData Input\n\n");
    f1 = fopen("genome.txt", "w");

    /* Get a character from keyboard */
    while((c=getchar()) != EOF)
    {
        /* Write a character to INPUT */
        putc(c, f1);
    }
    fclose(f1);
    printf("\nData Output\n\n");

    f1 = fopen("genome.txt", "r");


    while((c=getc(f1)) != EOF)
    {
        printf("%c",c);
    }

    fclose(f1);

    return 0;
}