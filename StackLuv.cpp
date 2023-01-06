// ਤਰੁਣਦੀਪ ਸਿੰਘ
#include <bits/stdc++.h>
#define endl "\n";

using namespace std;

int main()
{
  stack<int> s;
  s.push(2);
  s.push(3);
  s.push(4);
  s.push(5);
  while(!s.empty()){
  	cout<<s.top()<<endl;
  	s.pop();
  }
  
  queue<string> q;
  q.push("abc");
  q.push("bcd");
  q.push("cde");
  q.push("def");
  q.push("ghi");
  while(!q.empty()){
  	cout<<q.front()<<endl;
  	q.pop();
  }
}