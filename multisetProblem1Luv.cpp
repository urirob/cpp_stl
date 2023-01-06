// https://www.hackerearth.com/practice/data-structures/trees/heapspriority-queues/practice-problems/algorithm/monk-and-the-magical-candy-bags/
// Monk and the candies
// ਤਰੁਣਦੀਪ ਸਿੰਘ
#include <bits/stdc++.h>
#define endl "\n";
using namespace std;

/*
T.C.1 ->
1
5 3
2 1 7 4 2
*/

//  int range(+ve and -ve), you can write this range in between (—10^9 to +10^9).

//  long long int range(+ve and -ve), the range is in between (—10^18 to +10^18).
int main()
{
    /* aim -> maximum candies monk ko khilani hai, select bag with maximum 
    candies, 1 minute alloted for 1 bag to finish
    
    need to chose maximum element use and avoiding deletion of duplicaate 
    entries-> multiset
    
    n-> bags, k->minutes
    */
    
    int t;
    cin>>t;
    while(t--){
    	int n,k;
    	cin>>n>>k;
    	multiset<long long> bags;
    	
    	for(int i=0; i<n; ++i){
    		long long candy_count;
    		cin>>candy_count;
    		bags.insert(candy_count);
    	}
    	
    	long long total_candies = 0;
    	for(int i=0; i<k; ++i){
    		auto last_it = (--bags.end());
    		long long candy_count = *last_it;
    		total_candies += candy_count;
    		bags.erase(last_it);
    		bags.insert(candy_count/2);
    	}
    	cout<< total_candies << endl;
    }
    
    
}