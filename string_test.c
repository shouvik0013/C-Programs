#include<stdio.h>


int main()
{
    // str always points to the first address of "Quick", NEVER CHANGE THE ADDRESS OF STR
    char str[] = "Quick";   // str is a CONSTANT POINTER to string "Quick"
    // str contains the first address of the string "Quick"
    // We can't change the address which is returned by the string "Quick"
    // But we can change the contents at the address

    char *p = "Quick";      // p is a pointer to a CONSTANT STRING

    puts(str);
    puts(p);

    //str++; not possible because str is constant
    *str = 'J'; // possible because str is constant but string is not
    // here str points to the same address, we are not changing the address that str contains
    // we are changing the value at the address which str contains

    puts(str);


    p++;    // p now points to 'u' of "Quick"
    // it is possible because p is not constant, so we can increment the value of p
    printf("\nValue of p is now \n");
    puts(p);
    //*p = 'M';  it will be compiled, but will not run properly
    // it is forbidden because the STRING is contant we can't change the content of the string
    puts(p);
    p = str;
    printf("\nNow the contents of p\n");
    puts(p);
    return 0;
}