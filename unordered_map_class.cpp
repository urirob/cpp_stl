// ਤਰੁਣਦੀਪ ਸਿੰਘ
// #include <bits/stdc++.h>
#include<iostream>
#include<unordered_map>
// implemented using hashtable 

// difference b/w ordered and unordered map
//                   | map    (slow)         | unordered_map(fast)
// ---------------------------------------------------------
// Ordering        | increasing  order   | no ordering
//                 | (by default)        |

// Implementation  | Self balancing BST  | Hash Table
//                 | like Red-Black Tree |  

// search time     | log(n)              | O(1) -> Average 
//                 |                     | O(n) -> Worst Case

// Insertion time  | log(n) + Rebalance  | Same as search
                      
// Deletion time   | log(n) + Rebalance  | Same as search
using namespace std;
int main()
{
    int arr[]= {1,2,3,4,5,6,5};
    unordered_map<int,int> m;

    for (int i=0; i<7; i++){
        // m.insert(make_pair())
        m[arr[i]] = m[arr[i]]+1;
    }
    unordered_map<int,int>::iterator it;
    for(it=m.begin(); it!=m.end(); it++){
        cout<<it->first<<" : "<<it->second<<endl;
    }
    cout<<endl;
    m.erase(1);
    for(it=m.begin(); it!=m.end(); it++){
        cout<<it->first<<" : "<<it->second<<endl;
}
}