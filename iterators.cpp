// ਤਰੁਣਦੀਪ ਸਿੰਘ
// #include <bits/stdc++.h>
#include<iostream>
#include<iterator>
#include<vector>
using namespace std;
int main()
{
    //similar to pointers for containers in c++ stl
    vector<int> v={2,3,5,6,7};
    for(int i =0; i<v.size(); ++i){
    	cout<<v[i]<<" ";
    }
    
    cout<<endl;
//begin() :- This function is used to return the beginning position of the container.
//end() :- This function is used to return the after end position of the container.
     vector<int> :: iterator it1= v.begin();
     cout<<(*it1)<<endl;
     for(it1=v.begin(); it1!= v.end(); ++it1){
     	cout<<(*it1)<<endl;
     }
     
     vector<pair<int,int>> vp= {{1,2}, {2,3}, {3,4}};
     vector<pair<int, int>> :: iterator it;
     for (it = vp.begin(); it!= vp.end(); ++it ){
     	cout<<(*it).first<<" "<<(*it).second<<endl; 
     }
     // alt->
     // for (it = vp.begin(); it!= vp.end(); ++it ){
     	// cout<<(it->first)<<" "<<(it->second)<<endl; 
     // }
     // (*it).first <=> (it->first)
     
     
//      range based loops
		
		vector<pair<int,int>> vp1 = {{1,2},{3,4}};
		for(pair<int,int> &value : vp1){
			cout<< value.first <<" "<<value.second<<endl;
		}
		// for(int value:v){
			// value++;
			// cout<< value<<" ";
		// }
		cout<<endl;
		
		// auto keyword in C++ automatically detects and assigns a data type to the variable with which it is used.
		auto a= 1;
		cout<<a;
}