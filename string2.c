#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char *names[6];
    char *p;
    int i, len;
    char n[50];


    for(i=0; i<=5; i++)
    {
        printf("\nEnter a name: \n");
        scanf("%s", n);
        len = strlen(n);
        p = (char *) malloc(len+1);
        strcpy(p, n);
        names[i] = p;
    }

    printf("\n\n\n");
    for(i=0; i<=5; i++)
    {
        printf("%s\n", names[i]);
    }

    return 0;
}