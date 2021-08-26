#include<bits/stdc++.h>
using namespace std;

template <class t>
void display(vector<t> &v){
    cout<<"Display this Vector"<<endl;
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<",";
        //cout<<v.at(i)<<",";
    }
    cout<<endl;
}

int main(){
    vector <int> vec;                                           //Zero Length Vector
    vector <char> vec2(4);                                       //4-elements character vector      
    vector <char> vec3(vec2);                                   //4-element character vector from vec2
    vector <int>  v(4,13);                                       //6-vector element of 3s                                 
    
    //display(vec);
    
    //vec2.push_back('5');
    
    //display(vec2);
    
    //display(vec3);
    vector<int>::iterator iter = v.begin();
    v.insert(iter, 12);
    display(v);
    cout<<v.size()<<endl;
    
    
    //cout<<"Enter the size of the vector: ";
    //cin>>n;
    //for(int i=0; i<n; i++){
    //    int a;
    //    cout<<"Enter an element to add to the vector: ";
      //  cin>>a;
    ////    vec.push_back(a);
        
    //}
    //vec.pop_back();
    ////display(vec);
    //vector<int>::iterator iter=vec.begin();
    //cout<<"Enter the position where you want to insert the new element: ";
    //int a;
    //cin>>a;
    //vec.insert(iter+a,5, 566);                     //to insert an element in the vector at any specific position
    //display(vec);
    
    return 0;
}