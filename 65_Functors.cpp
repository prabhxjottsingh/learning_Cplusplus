#include<bits/stdc++.h>
using namespace std; 
int main(){
    //Function Object: Function wrapped in class so that it is available like an object(IT IS AN OBJECT WHICH WILL WORK WITH THE FUNCTION)
    int arr[5]={1,2,3,4,5};
    sort(arr, arr+5, greater<int>());
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}