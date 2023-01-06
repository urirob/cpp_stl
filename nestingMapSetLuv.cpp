// ਤਰੁਣਦੀਪ ਸਿੰਘ
#include <bits/stdc++.h>
#define endl "\n";
// #define push_back pb;
using namespace std;

/*
T.C. 1->
3 
a b 4
1 2 3 4
c d 2
1 2 
d f 3
2 3 4 
*/
int main()
{
    map<pair<string, string>,vector<int> > m;
    // set<pair<int,int> > st;
    int n;
    cin>>n;
    for(int i=0; i<n; ++i){
    	string fn ,ln;
    	int count;
    	cin>>fn>>ln>>count;
    	for(int j=0; j<count; ++j){
    		int x;
    		cin>>x;
    		m[{fn,ln}].push_back(x);
    	}
    }
    //print map
    for(auto &pr:m){
    	auto &full_name = pr.first;
    	auto &list = pr.second;
    	cout<< full_name.first<<" "<<full_name.second<<endl;
    	cout<<list.size()<<endl;
    	
    	for(auto &element :list){
    		cout<<element<<" ";
    	}
    	
    	cout<<endl;
    }
    	
    
}