#include<iostream>
using namespace std; 

int main(){
     int  element[7]= {33, 3, -45, 6, 57, 12, 12};
     int smallest = INT16_MAX;
     int largest = INT16_MIN;
     int size = 7;
     for (int i = 0; i < size; i++)
     {
        // if (element[i] < smallest)
        // {
        //     smallest = element[i];
        // }
        
        // the alternative of this if statement is MIN function, which returns minimum value
        smallest = min(element[i], smallest); 
        largest = max (element[i], largest);      
     }
     cout << smallest << endl << largest << endl;    
    return 0;
}