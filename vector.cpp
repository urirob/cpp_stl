// ਤਰੁਣਦੀਪ ਸਿੰਘ
// #include <bits/stdc++.h>
// vector -> dynamic size array
#include<iostream>
#include<vector>
using namespace std;


void printVector(vector<int> v){
	
	cout<<"size of the vector is :"<<v.size()<<endl;
	for(int i=0; i< v.size(); ++i){
		//T.C. of v.size() being O(1)
		cout<< v[i]<<" ";
	}
	
	cout<<endl;
}

void printVector1(vector<int> v1){
	
	cout<<"size of the vector is :"<<v1.size()<<endl;
	for(int i=0; i< v1.size(); ++i){
		//T.C. of v.size() being O(1)
		cout<< v1[i]<<" ";
	}
	
	cout<<endl;
}
int main()
{
    vector<int> v;
 	int n;
 	cin>>n;
 	for(int i=0; i<n; ++i){
 		int x;
 		cin>>x;
 		// push the elements into a vector from the back
		v.push_back(x);	//T.C. of push_back being O(1)
 		
 	}   
 	printVector(v);
 	
 	
 	vector<int> v1;
 	v1.push_back(7);
 	v1.push_back(6);
 	printVector(v1);
 	//coping of vector v1 in v2
 	vector<int> v2= v1; //T.C. of coping 0(n)
 	// v1.pop_back();
 	v2.push_back(5);
 	printVector1(v1);
 	printVector1(v2);
}