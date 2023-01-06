// ਤਰੁਣਦੀਪ ਸਿੰਘ
// #include <bits/stdc++.h>
#include <iostream>
#include <utility>

using namespace std;
int main()
{
    pair<int,char> p;

    p = make_pair(2,'b');

    cout<<p.first<<" "<<p.second<<endl;
    pair<int,char> p2(1,'a');

    cout<<p2.first << " "<<p2.second<<endl;
	
	//copying pair
	pair<int,char> p3= p;
	p3= {2,'t'};
	cout<<p3.first<<" " <<p3.second<<endl;
	
	//declaring pair of arrays
	int a[]= {1,2,3};
	int b[]={2,3,4};
	pair<int ,int> p_array[3];
	p_array[0]={1,2};
	p_array[1]={2,3};
	p_array[2]={3,4};
	// for(int i=0; i<3; ++i){
		// cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
	// }
	
	swap(p_array[0],p_array[2]);
	for(int i=0; i<3; ++i){
		cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
	}
    
}