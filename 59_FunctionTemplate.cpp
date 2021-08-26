#include <bits/stdc++.h>
using namespace std;

template <class t1, class t2>
float funcavg(t1 a, t2 b)
{
    return (a + b) / 2;
}

int main()
{
    cout << funcavg<float, float>(5, 2) << endl;
    return 0;
}