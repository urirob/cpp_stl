/*
Given string of parentheses check it whether balanced or not
*/
// https://www.hackerrank.com/challenges/balanced-brackets/problem
// ਤਰੁਣਦੀਪ ਸਿੰਘ
#include <bits/stdc++.h>
#define endl "\n";
#include <unordered_map>

using namespace std;

/*
T.C.1 ->
3              
{[()]}       
{[(])}          
{{[[(())]]}}
*/

unordered_map<char,int> symbols = { {'[',-1 }, {'{',-2}, {'(', -3}, {']',1}, {'}',2}, {')',3} };
//USING MAP WILL MAKE BRACKETS AS INTEGERS AND IF BALANCED THEN
// SUM WILL BE ZERO ELSE NOT
string isBalanced(string s){
	stack<char> st;
	/*
	STRING LEFT WITH OPENING TYPE -> NEGATIVE 
	STRING LEFT WITH CLOSING TYPE -> POSITIVE
	*/
	for(char bracket:s){
		if(symbols[bracket]<0){
			st.push(bracket);
		}
		
		else{
			if(st.empty())	return "NO";	//balanced parentheses nahi hai
			char top = st.top();
			st.pop();
			// whether top and curr bracket is valid pair
			if(symbols[top]+ symbols[bracket]!=0){
			return "NO";
		}	
	}
	}
	if(st.empty())	return "YES";
	 return "NO";
}

int main()
{
    int t;
    cin>>t;
    while(t--){
    	string s;
    	cin>>s;
    	cout<< isBalanced(s)<<endl;
    }
}