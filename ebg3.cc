#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

class Person
{
    string name;
    int age;

    public:
        void getdata(void);
        void display(void);
};


void Person :: getdata(void)
{
    cout << "Enter name\n";
    cin >> name;
    cout << "\nEnter age\n";

    getline(cin, name);
}

void Person :: display(void)
{
    cout    << "\nName: " << name << "\n";
    cout    << "Age: "  << age << "\n";
}

int main()
{
    Person p;

    p.getdata();
    p.display();

    return 0;
}