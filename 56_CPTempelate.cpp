#include<bits/stdc++.h>
using namespace std;

template <class T>
class Vector{
    
    public:
    T* arr;
    int size;
    Vector(int m){
        size = m;
        arr = new T [size];

    }
    T dotproduct(Vector &v){
        T d=0;
        for(int i=0; i<size; i++){
            d+= this->arr[i]*v.arr[i];
        }
        return d;
    }
};


int main(){
    Vector <int>v1(3);
    v1.arr[0]=4;
    v1.arr[1]=3;
    v1.arr[2]=1;
    Vector <int>v2(3);
    v2.arr[0]=1;
    v2.arr[1]=0;
    v2.arr[2]=1;
    int a = v2.dotproduct(v1);
    cout<<a<<endl;

    Vector <float>v3(3);
    v3.arr[0]=4.9;
    v3.arr[1]=3.7;
    v3.arr[2]=1.6;
    Vector <float>v4(3);
    v4.arr[0]=1.1;
    v4.arr[1]=0.5;
    v4.arr[2]=1.4;
    float b = v4.dotproduct(v3);
    cout<<b<<endl;
    return 0;
}


//Templates are also called Parameterized Classes.