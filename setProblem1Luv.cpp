/*
Given N strings, print unique strings
in lexicographical order
N <= 10^5
|S| <= 10^5
*/



/*T.C.1->
8
abc
def
abc
ghj
jkl
ghj
ghj
abc
2
abc 
ghj
*/


// ਤਰੁਣਦੀਪ ਸਿੰਘ
#include <bits/stdc++.h>
#define endl "\n";
using namespace std;

int main()
{
    set<string> s;
    int n;
    cin>>n;
    for(int i=0; i<n ; ++i){
    	string str;
    	cin>>str;
    	s.insert(str);
    }
    
    for(auto value :s){
    	cout<< value << endl;
    }
}