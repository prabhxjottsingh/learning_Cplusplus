#include<bits/stdc++.h>
using namespace std;

/*
The usefull classes for working with files in C++ are:
1. fstreambase
2. ifstream       ----> derived from fstreambase
3. ofstream       ----> derived from fstreambase

In order to work with files in C++, you have to open it.
There are mainly two ways to open a file:
1. Using a Constructor
2. Using the member function open() of the class

*/


int main(){

    //opening files using constructors and writing it:
    string st="HelloHey";
    ofstream out("53_SampleFor52.txt");
    out<<st;

    //opening files using constructors and reading it:
    string st2;
    ifstream in("53_SampleFor52.txt");
    getline(in, st2);                                 //It intakes spaces and next line characters too, so it is preferable
    cout<<st2;
    return 0;
}