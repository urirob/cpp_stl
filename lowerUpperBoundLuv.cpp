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


/*
LOWER BOUND(returns) 					UPPER BOUND(returns)
element present-> iterator		 		next iterator
element not present-> next iterator 	next iterator


corner cases->
array 				operation									output
1 3 3 3 9			auto itr =lower_bound(a,a+n,3) - a			1
					*itr			
					
					auto itr =lower_bound(a,a+n,10) - a			garbage value(element not found pointing to memory of next of last position)
					*itr											
*/
int main()
{	
	/*IMPORTANT-> SORTING MUST BEFORE LOWER UPPER BOUND*/
	
	/*
	T.C. of upper bound 0(log(n))
			lower bound 0(log(n))
	*/
	int n; cin>>n;
	vector<int> a(n);
	for(int i=0; i<n; ++i){
		cin>>a[i];
	}
	sort(a.begin(), a.end());
	for(int i=0;i<n;++i){
		cout<<a[i]<<" ";
	}
	cout<<endl;
	
	// lower_bound of which elemnt to find
	auto it = upper_bound(a.begin(), a.end(), 5);
	if(it == a.end()){
		cout<<"Not found";
		return  0;
	}
	cout<<(*it)<<endl;
	// int a[n];
	// for(int i=0; i<n; ++i){
		// cin>>a[i];
	// }
	// sort(a,a+n);
	// for(int i=0;i<n;++i){
		// cout<<a[i]<<" ";
	// }
	// cout<<endl;
// 	
	// // lower_bound of which elemnt to find
	// int *ptr = lower_bound(a,a+n,26);	
	// if(ptr == (a+n)){
		// cout<<"Not found";
		// return  0;
	// }
	// cout<<(*ptr)<<endl;
}