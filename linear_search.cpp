#include<iostream>
using namespace std; 

int linearSearch(int arr[], int sz, int target){
    for (int i = 0; i < sz; i++){
        if (arr[i] == target){
            return i;
        }        
    }   
    return -1; 
}

int main(){
    int arr[] = {3,33,333,4,44,5,55,6,66};
    int sz = 8;
    int target = 55;
    cout << "the index of the element " << target << " is : " << linearSearch(arr, sz, target)<< endl;     
     
    return 0;
}