#include<iostream>
#include <bits/stdc++.h>
using namespace std; 

void merge(vector <int> &arr, int low, int mid, int high){
    int left= low, right = mid+1;
    vector<int> temp;
    while (left <= mid && right <= high){
        if (arr[left] <= arr[right]){
            temp.push_back(arr[left]);
            left++;          
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }        
    }
    while (left <= mid){
        temp.push_back(arr[left]);
        left++;
    }
    while (right <= high){
        temp.push_back(arr[right]);
        right++;
    }
    for (int i = low; i <= high; i++){
        arr[i] = temp[i-low];        
    }    
}

void mS(vector <int> &arr, int low, int high){
    if( low == high) return;
    int mid = (low +high)/2;
    mS(arr, low, mid);
    mS(arr, mid+1, high);
    merge(arr, low, mid, high);
}

int main(){
    vector<int> arr = {14,4}; //5,7,78,8,1,2,12,1,2,87,14};
    int n = arr.size();
    mS(arr, 0, n-1);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
     
    return 0;
}