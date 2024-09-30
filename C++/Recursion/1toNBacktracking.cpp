#include <iostream>
#include<bits/stdc++.h>
using namespace std ;

void one2N(int i ){
    if (i<1)    
    {
        return;
    }
    one2N(i-1);
    cout<< i<<"  ";
    
}

int main() {
    int n=5;

    one2N(n);

    return 0;
}