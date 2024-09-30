#include <iostream>
#include<bits/stdc++.h>
using namespace std ;

void ntimes(int i){
    if(i<1){
        return;
    }
    cout<<"Name"<<" ";
    ntimes(i-1);
}


int main() {
    int n=5;
    ntimes(n);
    return 0;
}