// ਤਰੁਣਦੀਪ ਸਿੰਘ
// #include <bits/stdc++.h>
#include<iostream>
#include<algorithm>
using namespace std;

struct Interval{
    int st;
    int et;         // for sorting interval array
};

bool compare_using_first_element(Interval i1, Interval i2){

    return i1.st<i2.st;     // for sorting on basis of first element of the pair
}

bool compare_using_second_element(Interval i1, Interval i2){

    return i1.st>i2.st;     // for sorting on basis of second element of the pair
}



int main()
{

    Interval array[]= {{6,4}, {3,4}, {4,6}, {8,13}};
    cout<<"sorted array using first element of pair"<<endl;
    sort(array,array+4,compare_using_first_element);

    for(int i=0; i<4; i++){
        cout<<array[i].st<<" : "<<array[i].et<<endl;
    }


    sort(array,array+4,compare_using_second_element);
    cout<<"sorted array using second element of pair"<<endl;
    for(int i=0; i<4; i++){
        cout<<array[i].st<<" : "<<array[i].et<<endl;
    }






    int arr[]={1,3,2,5,7,6};

    sort(arr,arr+6);
    for(int i=0; i<6; i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;
    //to sort in descending order->
    sort(arr,arr+6, greater<int>());
    for(int i=0; i<6; i++){
        cout<<arr[i]<<" ";
    }
}