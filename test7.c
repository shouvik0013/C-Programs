#include<stdio.h>

#define OUT printf

void disp(int *c);
void show(int **x);


int main()
{
    int m[] = {24, 55, 99, 89};
    int i;

    for(i=0; i<4; i++)
        disp(&m[i]);

    return 0;
}

void disp(int *c)
{
    show(&c);
}

void show(int **x)
{
    OUT("%d\t", **x);
}

