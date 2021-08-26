#include <bits/stdc++.h>
using namespace std;

class Baseclass
{
public:
    int varbase;
    virtual void display(int x)
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







//Runtime Polymorphism --> If we make a function virtual toh woh access ni hoga dusri class ke pointer se, quite complicated but CODEWITHHARRY video made it simple just watch that if you are in doubt or anyhthing like tht, okay 