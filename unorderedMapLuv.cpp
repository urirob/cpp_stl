// ਤਰੁਣਦੀਪ ਸਿੰਘ
// #include <bits/stdc++.h>
#include<iostream>
#include<unordered_map>
//unordered_map implemented using hashtables
#include<vector>
#include<string>
using namespace std;
void print(unordered_map<int,string> &m){
	cout<<m.size()<<endl;
	for(auto &pr:m){
	 	cout<<pr.first<<" "<<pr.second<<endl;
	 }
}



int main()
{
	// Maps contain sorted key-value pair
     // keys are arranged in ascending order, its because maps always arrange its keys in sorted order.
	 unordered_map<int,string> m;
	 m[1]="abc";	
	 m[5]= "cdc";
	 m[3]="acd";
	 m[6]="a";
	 // m.insert({4,"afg"});
	 // key-> unique, but pair overwrite over the older one
	 m[5]="cde";
	 
	 //insertion T.C. also depedent on the data type of key in the map
	 

	 
	 auto it= m.find(5);	//T.C. 0(log(1))
	 
	 if(it!=m.end())
	 	m.erase(it); //T.C. 0(log(1))
	 
	 // if(it==m.end()){
	 	// cout<<"no value";
	 // }
	 // else{
	 	// cout<<(*it).first<<" "<<(*it).second<<endl;
	 // }
// 	 alt-> for printing map instead of using auto keyword
	 // map<int,string> :: iterator it;
	 // for(it=m.begin(); it!=m.end();++it){
	 	// cout<<(it->first)<<" "<<(it->second)<<endl;
	 // }
	 print(m);
}