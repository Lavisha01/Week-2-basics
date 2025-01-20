#include<iostream>
using namespace std; 

int main(){
     int  element[7]= {33, 3, -45, 6, 57, 12, 12};
     int smallest = INT16_MAX;
     int size = 7, count;

     for (int i = 0; i < size; i++)
     {
        if (smallest > element[i]){
            smallest = element[i];
            count = i;
        }         
     }
    cout<<"The smallest number in the array is " << smallest << " and its index is : " << count<< endl;  
    return 0;
}