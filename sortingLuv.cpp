// ਤਰੁਣਦੀਪ ਸਿੰਘ
#include <bits/stdc++.h>
#define endl "\n";

using namespace std;

/*
T.C.1->
6
4
5
2
25
7
8
*/
int main()
{
    int n;
    cin>>n;
    // int a[n];
    vector <int> a(n);
    for(int i=0; i<n; ++i){
    	cin>>a[i];
    }
    
    
    /*
    a equivalent to address of a[0]
    a+n equivalent to address of a[n+1]
    */
    
    /*
    T.C.-> 0(nlong(n))
    sorting function do->
    takes initial address from where sorting is being started 
    takes address of next of destination element of array 
    */
    sort(a.begin(), a.end());
    // sort(a,a+n);
    for(int i=0; i<n; ++i){
    	cout<<a[i]<<" ";
    }
    cout<<endl;
}