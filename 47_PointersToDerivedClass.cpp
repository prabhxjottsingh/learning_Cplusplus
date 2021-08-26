#include <bits/stdc++.h>
using namespace std;

class Baseclass
{
public:
    int varbase;
    void display(int x)
    {
        varbase = x;
        cout << "The variable of base class is: " << varbase << endl;
    }
};

class Derivedclass : public Baseclass
{
public:
    int varderi;
    void display(int x)
    {
        varderi = x;
        cout << "The variable of derived class is: " << varderi << endl;
    }
};

int main()
{
    Baseclass *ptr;
    Baseclass objbase;
    Derivedclass objderi;

    ptr = &objderi;
    ptr->display(4);
    return 0;
}
< ---------------------------important-- ------------------->
                             //if we point a baseclass pointer to a derived classs that would be okay, but we can only access things which are inherited to the derived class form the base classs through that base classs piinter

                             //a derived classs pointer can be used to accessed derived as well as base class member functions a\nd methods,