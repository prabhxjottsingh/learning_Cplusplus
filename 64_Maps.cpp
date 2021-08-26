#include<bits/stdc++.h>
using namespace std;

//Map is an associative array
int main(){
    map<string,int> marks;
    marks["prabh"] = 98;
    marks["hel"]  = 57;
    marks["roahn"] = 89;
    marks.insert({{"hehe",178},{"hwsde",1783}});
    map<string, int> :: iterator iter;
    for(iter = marks.begin(); iter!=marks.end(); iter++){
        cout<<(*iter).first<<" "<<(*iter).second;
        cout<<endl;
    }
    cout<<"The size is: "<<marks.size()<<endl;
    cout<<"The size is: "<<marks.max_size()<<endl;
    cout<<"The size is: "<<marks.empty()<<endl;
    return 0;
}