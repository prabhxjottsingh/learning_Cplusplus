#include <bits/stdc++.h>
using namespace std;
int main()
{

    ofstream hout("Sample.txt");
    cout << "Enter your name: ";
    string name;
    cin >> name;
    hout << "My Name is: " + name;
    hout.close();

    ifstream hin("Sample.txt");
    string s;
    getline(hin, s);
    cout << s << endl;
    hin.close();

    return 0;
}

//ofstream --------> Writing in file.
//ifstream --------> Reading the file.