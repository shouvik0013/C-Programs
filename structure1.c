#include<stdio.h>
#include<stdlib.h>

// void linkfloat();


int main()
{
    struct book 
    {
        char name;
        int page;
        float price;
    };

    struct book b[100]; // initialising array b of 100 struct book
    int i;

    for(i=0; i<=99; i++)
    {
        printf("\n Enter the name price and page of the book\n");
        fflush(stdin);
        scanf("%c %f %d", &b[i].name, &b[i].price, &b[i].page);
    }

    for(i=0; i<=99; i++)
    {
        printf("\n %c %f %d", b[i].name, b[i].price, b[i].page);
    }

    return 0;
}

// void linkfloat()
// {
//     float a, *b;
//     b = &a;
//     a = *b;
// }