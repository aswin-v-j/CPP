#include <iostream>
#include<bits/stdc++.h>
using namespace std ;

int factorial(int i ){

    if(i== 0 ){
        return 1;
    }
    return i * factorial(i-1);
}


int main() {
    int n;
    cin>>n;
    cout<< "The factorial is : "<<factorial(n);
    return 0;
}