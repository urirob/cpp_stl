// ਤਰੁਣਦੀਪ ਸਿੰਘ
// #include <bits/stdc++.h>

//nesting of vectors
#include<iostream>
#include<vector>
using namespace std;
// defining macros
#define pb push_back
#define mp make_pair

void printpairVec(vector<pair<int, int>> &s){
	cout<<"size of the vector is :"<<s.size()<<endl;
	for(int i=0; i< s.size(); ++i){
		//T.C. of v.size() being O(1)
		cout<< s[i].first <<" "<<s[i].second<<endl;
	}
	
	cout<<endl;
}


void printintVec(vector<int> &v){
	cout<<"size of the vector is :"<<v.size()<<endl;
	for(int i=0; i< v.size(); ++i){
		//T.C. of v.size() being O(1)
		cout<< v[i]<<" ";
	}
	
	cout<<endl;
}


void printVecVec(vector<int> &vv){
	cout<<"size of the vector is :"<<vv.size()<<endl;
	for(int i=0; i< vv.size(); ++i){
		//T.C. of v.size() being O(1)
		cout<< vv[i]<<" ";
	}
	
	cout<<endl;
}


int main()
{
// 	vector of pairs
    vector<pair<int, int>> s;
    
    printpairVec(s);
    int n;
    cin>>n;
    for(int i=0; i<n; ++i){
    	int x,y;
    	cin>>x>>y;
    	s.pb({x,y});
    	// alt-> s.push_back(mp(x,y));
    }
    printpairVec(s);
    
    
    
//     array of vectors
	int N;
	cin>>N;
	vector<int> v[N];
	for(int i=0; i<N; ++i){
		int n;
		cin>>n;
		for(int j=0; j<n; ++j){
			int x;
			cin>>x;
			v[i].pb(x);
		}
	}
	for(int i=0; i<N; ++i){
		printintVec(v[i]);
	}
	
	
	for(int i=0; i<N; ++i){
		printintVec(v[i]);
	}
// 	similar to 2d array in which no. of rows -> fixed but no. of columns are changed
	// cout<< v[0][0];
	
// vector of vector-> similar to 2D array-> both rows and columns being dynamic
	
	// taking user input
    int N1;
    cin>>N1;
	vector<vector<int>> vv;
    for(int i=0; i<N1; ++i){
  		int n;
  		cin>>n;
  		
  		//temp vector created to store the row as the input in dynamic 2D array
  		vector<int> temp;
  		for(int j=0; j<n; j++){
  			int x;
  			cin>>x;
  			temp.pb(x);
  		}
  		vv.pb(temp);
}
//   		printing the vector
  		for(int i=0; i<vv.size();++i){
  			printVecVec(vv[i]);
  		}
	
	
}