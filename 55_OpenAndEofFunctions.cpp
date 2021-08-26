#include <bits/stdc++.h>
using namespace std;
int main()
{

    ofstream out;
    out.open("Sample.txt");
    out << "This is me 2";
    out << endl
        << "This is also me.";
    out.close();

    ifstream in;
    in.open("Sample.txt");
    string st, st2;
    //getline(in, st);
    //getline(in, st2);
    //cout << st << endl
     //    << st2 << endl;
    while(in.eof()==0){
        getline(in, st);
        cout<<st<<endl;
    }
    in.close();

    return 0;
}