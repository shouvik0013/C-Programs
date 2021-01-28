#include<stdio.h>
#include<string.h>


int main()
{
    char source[] = " Mandal";
    char target[30] = "Shouvik"; // here we are taking more memory because we are adding more characters to it
    char *p;
    int i=0;
    
    strcat(target, source);
    puts(target);

    target[25] = 'J';
    printf("\nNow target is \n");
    puts(target);

    printf("\nIndividual element of target is \n");
    p = target;
    while(i<=29)
    {
        printf("%c ", target[i]);
        i++;
    }


    return 0;
}