/* Given N strings print unique strings in lexicographical order 
with their frequency 
N<=10^5
|S|<=100
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
*/ 

// ਤਰੁਣਦੀਪ ਸਿੰਘ
#include <bits/stdc++.h>
using namespace std;
int main()
{	//string taken as key bcoz requirement of unique string as output
    map<string,int> m;
    int n;
    cin>>n;
    for(int i=0; i<n; ++i){
    	string s;
    	cin>>s;
    	m[s]=m[s]+1;
    }
    //print map
    for(auto pr:m){
    	cout<<pr.first <<" "<<pr.second<<endl;
    }
}