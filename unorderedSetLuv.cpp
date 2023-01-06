// ਤਰੁਣਦੀਪ ਸਿੰਘ
#include <bits/stdc++.h>
#define endl "\n";
using namespace std;

// unordered_set prints in sorted order 
void print(unordered_set<string> &s){
	for(string value : s){
		cout<<value<<endl;
	}
	
	
	// for(auto it = s.begin(); it != s.end(); ++it){
		// cout<<(*it)<<endl;
	// }
}

int main()
{
	unordered_set<string> s;
  	s.insert("abc");	// o(1)
  	s.insert("zsdf");
  	s.insert("bcd");
  	s.insert("abc");
  	
  	auto it = s.find("abc");	//o(1)
  	if(it!= s.end()){
  		s.erase(it);
  	}
//   	s.erase() takes both iterator and the key as well 
//		both works same
	
	s.erase("abc");
  	print(s);
}