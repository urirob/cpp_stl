// ਤਰੁਣਦੀਪ ਸਿੰਘ
#include <bits/stdc++.h>
#define endl "\n";
using namespace std;

/*
T.C.1->
8
abc
def
abc
ghj
jkl
ghj
ghj
abc
3
abc 
ghj
abcdef
*/

void print(multiset<string> &s){
	for(string value : s){
		cout<<value<<endl;
	}
	
}


int main()
{
	multiset<string> s;
  	s.insert("abc");	// log(n)
  	s.insert("zsdf");
  	s.insert("bcd");
  	s.insert("abc");
  	
  	/*s.find() returns value of first iterator 
  	if duplicates are present */
  	
  	// auto it = s.find("abc");	//log(n)
  	// if(it!= s.end()){
  		// s.erase(it);		//only single copy will be erased
  	// }


	s.erase("abc");		/*using s.erase()
	alone will erase all copies of the string
	abc */
  	print(s);
}