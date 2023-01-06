/*
LOWER AND UPPER BOUND FOR SET AND MAPS

FOR MAP LOWER UPPER BOUND WORK ON KEY ONLY

*/
// ਤਰੁਣਦੀਪ ਸਿੰਘ
#include <bits/stdc++.h>
#define endl "\n";

using namespace std;
/*
T.C.1->
6
4
5
5
25
7
8
*/
int main()
{
    /*
    COMMON MISTAKE IMPLEMENTING USING SET ->
    auto it = lower_bound(s.begin(), s.end(),5);	//T.C. 0(n)
    */
    int n; cin>>n;
    set <int> s;
    map<int,int> m;
    for(int i=0; i<int(1e6);++i){
    	s.insert(rand());
    }
    
    for(int i=0; i<int(1e5); ++i){
    auto it = s.lower_bound(rand());		//T.C. 0(log(n))
    }
    
    	
}