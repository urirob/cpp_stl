// https://www.hackerearth.com/problem/algorithm/the-monk-and-class-marks/
//Monk and class Marks

// ਤਰੁਣਦੀਪ ਸਿੰਘ
#include <bits/stdc++.h>
#define endl "\n";

using namespace std;

/*
T.C.1->
3
Eve 78
Bob 99
Alice 78

n-> number of students
string-> name of student
integer-> marks

problem approach->

key -> stored in ordered manner
key stores marks, marks need to
store in desceding order


value mein  multiple log rakhne hai woh bhi sorted order mein
in -> use set
			
*/
int main()
{
	map<int,multiset<string> > marks_map;
	
    int n;
    cin>>n;
    
    
    for(int i=0; i<n; ++i){
    	int marks;
    	string name;
    	cin>>name>>marks;
    	//declaring key
    	marks_map[marks].insert(name);
    }
    
    //iterator traverse from last to first marks
    auto current_it = --marks_map.end();
    while(true){
    	auto &students= (*current_it).second;
    	int marks = (*current_it).first;
    	for(auto student : students){
    		cout<< student <<" "<<marks<<endl;
    	}
    	
    	if(current_it == marks_map.begin()) break;
    	current_it --;
    }
    
}