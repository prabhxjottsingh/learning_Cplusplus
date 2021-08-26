#include<bits/stdc++.h>
using namespace std;

template <class t1=int, class t2=char>
class prabh{
    public:
    t1 a;
    t2 b;
    prabh(t1 data1, t2 data2){
        this->a = data1;
        this->b = data2;
    }
    void display(void){
        cout<<a<<","<<b<<endl;
    }
};


int main(){
    prabh <int,char>p(1,'c');
    prabh <> ar(4,6);
    p.display();
    cout<<endl;
    ar.display();
    return 0;
}