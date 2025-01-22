#include<iostream>
#include <bits/stdc++.h>
using namespace std; 
int partition(vector <int> &arr, int low, int high ){
    int pivot = arr[low];
    int i = low;
    int j= high;
    while (i <j)
    {
        while (arr[i] <= pivot && i < high){
            i++;
        }
        while ( arr[j] > pivot && j > low){
            j--;           
        }
        if (i<j) swap(arr[i], arr[j]);              
    }
    swap(arr[low], arr[j]);
    return j;
}

void qs(vector <int> &arr, int low, int high){
    if(low < high){
        int pIndex = partition(arr, low, high);
        qs(arr, low, pIndex-1);
        qs(arr, pIndex+1, high);
    }
}
int main(){
     vector<int> arr = {2,9,8,5,2,7,6};
     int n = arr.size();
    qs(arr, 0, n - 1);
  
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}