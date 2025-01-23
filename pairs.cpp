#include<iostream>
#include <bits/stdc++.h>
using namespace std; 

int main(){
     pair <int, int> p;
     p = make_pair(2,4);

     p.first = 5;
     cout << p.first <<" " << p.second<< endl;
     

     pair <int, int> p1 =p;
     p1 = {2,3};

     cout << p1.first <<" " << p1.second;

      

    return 0;
}