#include <iostream>

//using namespace std;

void f(int & x)
{
    x = x+100;
}

int main()
{
    int total = 100;
    cout << "Total = " << total << "\n";
    int & m = total;

    cout << "m = " << m << "\n";

    cout << "Address of total " << &total << "\n";
    cout << "Address of m " << &m << "\n";

    f(total);

    cout << "Now the value of total " << total << "\n";

    
    return 0;
}