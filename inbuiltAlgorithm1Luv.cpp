// ਤਰੁਣਦੀਪ ਸਿੰਘ
#include <bits/stdc++.h>
#define endl "\n";

using namespace std;
/*
T.C.1->
6
2
3
1
6
7
6
*/
int main()
{
    int n; cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; ++i){
    	cin>>v[i];
    }
    int MIN_ELEMENT =*(min_element(v.begin(), v.end())); 		// returns iterator
    cout<<MIN_ELEMENT<<endl;
    
    int MAX_ELEMENT =*(max_element(v.begin(), v.end())); 		// returns iterator
    cout<<MAX_ELEMENT<<endl;
    
    /*
    accumulate returns sum of the array
    first argument ->starting address
    second argument-> ending address
    third argument -> initial sum given by the user
    */ 
    int sum = accumulate(v.begin(), v.end(),0 );
    cout<<sum<<endl;
    
    /*
    count returns number of occurences of the element
    in the array
    
    third argument -> element whose occurence to found
    */
    
    int ct = count(v.begin(), v.end(),3);
    cout<<ct<<endl;
    
    
    /*
    find -> gives iterator of the element of vector
    */
    
    // int element = *find(v.begin(), v.end(), 2);	//returns value
    // cout<<element<<endl;
    
    auto it = find(v.begin(), v.end(), 10);
    if(it !=v.end()){
    	cout<<*it<<endl;
	}
	else
		cout<<"Element not found\n";
		
		
		
	/*
	REVERSE -> STRING/ARRAY/VECTOR REVERSED
	*/
	
	reverse(v.begin(), v.end());
	for(auto val :v){
		cout<<val<<" ";
	}
	cout<<endl;
	
	
	string s1 = "atrarir";
	reverse(s1.begin(), s1.end());
	cout<<s1<<endl;
    
    
    
    
}	 