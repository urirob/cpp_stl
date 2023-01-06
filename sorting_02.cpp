// ਤਰੁਣਦੀਪ ਸਿੰਘ
// #include <bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<utility>
using namespace std;

struct Interval{
    int st;
    int et;         // for sorting interval array
};

bool compare_using_first_element(Interval i1, Interval i2){

    return i1.st<i2.st;     // for sorting on basis of first element of the pair
}

int main(){
    int arr[]={1,3,2,5,7,6};

    sort(arr,arr+6);
    for(int i=0; i<6; i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    cout<<"if element 3 is there return '1'"<<endl;
    
    cout<<binary_search(arr,arr+6,3)<<endl;
    // returning 1 means it is true 
    cout<<"if element 8 is there return '1'"<<endl;
    cout<<binary_search(arr,arr+6,8);

    cout<<endl;

    cout<<"index of element '5' is -> "<<endl;
    cout<<lower_bound(arr,arr+6,5) - arr<<endl;

    cout<<"upper bound of element '3' is -> "<<endl;
    cout<<upper_bound(arr,arr+6,3) - arr<<endl;


    // implemented using <cmath>
    cout<<"gcd of 10 and 6 is->"<<endl;
    cout<<__gcd(10,6)<<endl;

    cout<<"2 raise to power 5 is-> "<<endl;
    cout<<pow(2,5)<<endl;



    // swap implement using <utility>
    int x =10;
    int y=12;
    swap(x,y);
    cout<<"value of x after swap-> "<<endl;
    cout<<x<<endl;
    cout<<"value of y after swap-> "<<endl;
    cout<<y<<endl;


    cout<<"max between 14 and 18 is -> "<<endl;
    cout<<max(14,18)<<endl;
    cout<<"min between 14 and 18 is -> "<<endl;
    cout<<min(14,18)<<endl;
    
}