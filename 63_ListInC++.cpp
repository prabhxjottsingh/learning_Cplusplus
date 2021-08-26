//List is used whenever there is a need to delete elements beech beech mein se, thus making insertiond and deletion fast 
//List is bidirectional, that we can move in forward as well as backward direction


#include<bits/stdc++.h>
using namespace std;

void display(list<int> &li){
    list<int>::iterator it;
    for(it=li.begin(); it!=li.end();it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;
}


int main()
{
    list<int> list1;         //list of 0 length, this list varibale has no elements
    list<int> list2(3);      //emplty list of size 7, this list variable contains 7 elements but these elements have no value right now
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(6);
    list1.push_back(5);
    list<int>::iterator iter = list1.begin();
    cout<<*(++iter)<<endl;
    list1.pop_back();
    list1.remove(9);                         //Remove all the 9s in the array, REMOVING ELEMENTS FROM THE LIST
    list1.pop_front();
    //Sorting the lists:
    list1.sort();
    display(list1);

    list<int>::iterator iter2;
    iter2 = list2.begin();
    *iter2 = 45;
    iter2++;
    *iter2 = 345;
    iter2++;
    *iter2 = 5;
    
    cout<<endl;
    list2.sort();
    display(list2);
    list1.merge(list2);
    list1.reverse();
    display(list1);
    list1.swap(list2);
    display(list1);
    display(list2);
    return 0;
}