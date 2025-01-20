#include<iostream>
using namespace std; 

int main(){
     int marks[ 5] = { 99, 98,91,86,89 };
     int size = sizeof(marks)/sizeof(int);

    //  cout <<marks[2] << endl;
     for (int i = 0; i < size; i++)
     {
        cout<< marks[i] << endl;
     }
     
    return 0;
}