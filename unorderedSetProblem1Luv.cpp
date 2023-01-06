/*
Given N strings and Q queries
In each query you are given a string
print yes if string is present 
else print no

N<= 10^6
|S| <= 100
Q<=10^6


T.C.1->
8
abc
def
abc
ghj
jkl
ghj
ghj
abc
3
abc 
ghj
abcdef
*/


// ਤਰੁਣਦੀਪ ਸਿੰਘ
#include <bits/stdc++.h>
#define endl "\n";
using namespace std;

int main()
{
    unordered_set<string> s;
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
    
    int q;
    cin>>q;
    while(q--){
    	string str;
    	cin>>str;
    	if(s.find(str) == s.end()){
    		cout<<"no\n";
    		
    	}
    	
    	else{
    		cout<<"yes\n";
    	}
    }
}