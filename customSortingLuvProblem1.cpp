/*
 from nestingProblem1Luv
 Monk and class marks using comparator functions
 https://www.hackerearth.com/problem/algorithm/the-monk-and-class-marks/
*/
/*
Custom sorting-> defined by the user using custom function
*/
// ਤਰੁਣਦੀਪ ਸਿੰਘ
#include <bits/stdc++.h>
#define endl "\n";
/*
3
Eve 78
Bob 99
Alice 78
*/

using namespace std;



    /*
    comparator function use inbuilt sorting which returns->
    false -> swap
    true -> no swap
    */

bool cmp(pair<string ,int> a, pair<string,int> b){
	if(a.first != b.first){
		if(a.second < b.second)	return false;
		return true;
	}
	
	
	
	if(a.first!=b.first && a.second == b.second ){
		if(a.first>b.first) return false;
		return true;
	}
}

int main()
{
    int n;
    cin>>n;
    // int a[n];
    vector <pair<string,int> > v;
    for(int i=0; i<n; ++i){
    	cin>>v.first>>v.second;
    }
    
    
    sort(v.begin(), v.end(), cmp);
    
    for(int i=0; i<n; ++i){
    	cout<<v.first<<" "<<v.second<<endl;
    }
    cout<<endl;
}



