#include<stdio.h>

int main()
{
    int arr[6];
    int i;
    int num;
    printf("Value of arr[0] is %d", arr[0]);
    printf("Value of arr[6] is %d", arr[6]);

    for(i=0; i<=10; i++)
        arr[i] = i;
    return 0;
}