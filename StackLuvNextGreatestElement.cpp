/*
https://www.hackerrank.com/contests/second/challenges/next-greater-element/problem

IMPORTANT QUESTION USED FREQUENTLY IN CONTESTS
*/
// ਤਰੁਣਦੀਪ ਸਿੰਘ
#include <bits/stdc++.h>
#define endl "\n";

using namespace std;

vector<int> NGE(vector<int> v){
	vector<int> nge(v.size());
	/*
	stack is made up of indexes
	*/ 
	stack<int> st;
	for(int i=0; i<v.size(); ++i){
		while(!st.empty() && v[i]>v[st.top()]){
			nge[st.top()] = i;
			st.pop();
		}
		st.push(i);
	}
	while(!st.empty()){
		nge[st.top()] = -1;
		st.pop();
	}
	return nge;
}
/*
intialising a loop and comparing from next of curr element to last element 
and taking upto last element will end in 0(n^2) complexity

using stack, problem reduced to 0(n) complexity
*/
int main()
{
  int n;
  cin>>n;
  vector<int> v(n);
  for(int i=0; i<n; ++i){
  	cin>>v[i];
  }
  /*
  printing final array
  */
  vector<int> nge = NGE(v);
  for(int i=0; i<n; ++i){
  	cout<< v[i]<<" "<<(nge[i]== -1 ? -1: v[nge[i]])<<endl;
  }
  /*
  if nge[i]==-1 then print -1 
  else print v[nge[i]]	is equivalent to ->
  (nge[i]== -1 ? -1: v[nge[i]])
  */
}