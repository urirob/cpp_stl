// ਤਰੁਣਦੀਪ ਸਿੰਘ
// #include <bits/stdc++.h>
#include<iostream>
#include<map>
// map stores key-value pair
// implemented using BST
using namespace std;
int main()
{
    int arr[]= {1,2,3,4,5,6,5};
    map<int,int> m;

    for (int i=0; i<7; i++){
        // m.insert(make_pair())
        m[arr[i]] = m[arr[i]]+1;
    }
    map<int,int>::iterator it;
    for(it=m.begin(); it!=m.end(); it++){
        cout<<it->first<<" : "<<it->second<<endl;
    }
    cout<<endl;
    m.erase(1);
    for(it=m.begin(); it!=m.end(); it++){
        cout<<it->first<<" : "<<it->second<<endl;
    }
}