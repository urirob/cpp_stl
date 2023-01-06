// ਤਰੁਣਦੀਪ ਸਿੰਘ
// #include <bits/stdc++.h>
#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int> s;
    int arr[]= {1,2,3,4,5,6,5};
    for(int i=0; i<7; i++){
        s.insert(arr[i]);
    }

    set<int> ::iterator it;

    // to traverse the set
    for(it=s.begin(); it!=s.end(); it++){
        cout<<*it<<endl;
    }


    // to find the element present or not
    if (s.find(6)== s.end()){
        cout<<"element not found";
    }

    else{
        cout<<"element found"<<endl;
    }
    
    
    if (s.find(7)== s.end()){
        cout<<"element not found";
    }

    else{
        cout<<"element found"<<endl;
    }

}