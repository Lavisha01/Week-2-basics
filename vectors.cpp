#include<iostream>
#include <bits/stdc++.h>
using namespace std; 

void PrintVec(vector<int> v){
    cout << v.size()<< endl;
    for(int i=0; i <v.size(); i++){
        cout << v[i]<<" ";
    }
    cout << endl;
}

int main(){
     
     vector <int> v;
     v.push_back(5);
     for (int i = 0; i < 4; i++)
     {
        int x;
        cin>> x;
        v.push_back(x);
     }
     PrintVec(v);

     vector <int> v2 = v; //making copy is expensive - O(n)
     vector <int> &v2 = v; //making copy is expensive - O(n)
     v2.push_back(4);
     PrintVec(v);
     PrintVec(v2);


     
    return 0;
}