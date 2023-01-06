/*
all_of ->function operates on whole range of array elements 
and save time to run a loop to check each elements one by one

none_of->

any_of->

all three functions retunrns true/false values
*/

// ਤਰੁਣਦੀਪ ਸਿੰਘ
#include <bits/stdc++.h>
#define endl "\n";

using namespace std;
/*
T.C.1->

*/
int main()
{
	/*
	LAMBDA FUNCTION-> SYNTAX FOR WRITING TEMPORARY FUNCTION
	
	square brackets->empty
	round brackets->variable to pass
	curly brackets->return value
	round brackets->input 
	
	*/
	
	cout<<[](int x){return x+2;}(2)<<endl;
	cout<<[](int x , int y){return x+y;}(4,7)<<endl;
	
	//sum function declared
	auto sum = [](int x,int y){return x+y;};
	cout<<sum(2,3)<<endl;
	
	/*
	starting and ending address
	LAMBDA FUNCTION->
	check positive 
	*/
	vector<int> v = {-2,-3,-5};
	// if every output comes to true then true
	cout<<all_of(v.begin(), v.end(),
	[](int x){return x>0;})<<endl;
	
	/* if any output comes out to be true then 
	output comes out to be true*/ 
	cout<<any_of(v.begin(), v.end(),
	[](int x){return x>0;})<<endl;
	
	/*
	if no one matches same output then 
	none_of returns true as output
	*/
	
	cout<<none_of(v.begin(), v.end(),
	[](int x){return x>0;})<<endl;
	
	
	/*
	check even numbers present in the vector
	*/
	vector<int> v1 = {2,4,6};
	cout<<all_of(v1.begin(), v1.end(),
	[](int x){return x%2== 0;})<<endl;
	
}