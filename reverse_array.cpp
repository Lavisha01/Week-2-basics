#include<iostream>
#include <bits/stdc++.h>
using namespace std; 

void reverseArray(int arr[], int sz){
    int start = 0, end = sz-1;
    
        while (start < end){
            swap(arr[start], arr[end]);
            start ++;
            end --;
        }
    }

int main(){
    // 2-pointer approach
    int arr[8]= {12,14,54,85,97,75,32,14};
    int sz = 8;
    reverseArray( arr, sz); // Pass the array itself, not arr[8]

    for (int i = 0; i < sz; i++){
        cout << arr[i] << " ";
    }   

    return 0;
}