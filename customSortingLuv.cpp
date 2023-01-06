/*
Custom sorting-> defined by the user using custom function
*/
// ਤਰੁਣਦੀਪ ਸਿੰਘ
#include <bits/stdc++.h>
#define endl "\n";
/*
T.C.1->
for should_i_swap
6
4
5
2
25
7
8

T.C.2->
for should_i_swap_pair and cmp
6
4 3
5 5
5 3
25 6
7 9
8 5
*/

using namespace std;

/*
 make necessary change in input and output while using 
 should_i_swap function if you want to use it
*/ 
bool should_i_swap(int a,int b){
	if(a>b) return true;
	return false;
	
}



/*making function s.t. 2nd element
in the pair sort in descending order*/
bool should_i_swap_pair(pair<int ,int> a, pair<int,int> b){
	if(a.first != b.first){
		if(a.first > b.first)	return true;
		return false;
	}
	else{
		if(a.second<b.second) return true;
		return false;
	}
}

    /*
    comparator function use inbuilt sorting which returns->
    false -> swap
    true -> no swap
    */

bool cmp(pair<int ,int> a, pair<int,int> b){
	if(a.first != b.first){
		if(a.first > b.first)	return false;
		return true;
	}
	else{
		if(a.second<b.second) return false;
		return true;
	}
}

int main()
{
    int n;
    cin>>n;
    // int a[n];
    vector <pair<int,int> > a(n);
    for(int i=0; i<n; ++i){
    	cin>>a[i].first>>a[i].second;
    }
    
    /*
    0(n^2) sort->
    
    */
    
    // for(int i=0; i<n; ++i){
    	// for(int j=i+1; j<n; ++j){
    		// if(should_i_swap_pair(a[i], a[j])){
    			// swap(a[i], a[j]);
    		// }
    	// }
    // }
    
    
    /*
    comparator function use inbuilt sorting  which returns->
    false -> swap
    true -> no swap
    */ 
    
    sort(a.begin(), a.end(), cmp);
    
    for(int i=0; i<n; ++i){
    	cout<<a[i].first<<" "<<a[i].second<<endl;
    }
    cout<<endl;
}



