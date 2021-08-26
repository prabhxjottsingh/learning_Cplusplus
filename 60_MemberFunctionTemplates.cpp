#include <bits/stdc++.h>
using namespace std;

template <class t>
class harry
{
public:
    t data;
    harry(t a)
    {
        data = a;
    }
    void display(void);
};

template <class t>
void harry<t>::display()
{
    cout << data << endl;
}

void func(int a)
{
    cout << "I am First Function: " << a << endl;
}

template <class t>
void func(t a)
{
    cout << "I am Template Function: " << a << endl;
}

int main()
{
    harry<int> h(5);
    h.display();
    harry<char> p('k');
    p.display();
    func(10);
    func(10.123);
    return 0;
}