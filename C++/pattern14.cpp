#include <iostream>
#include<bits/stdc++.h>
using namespace std ;

int main() {
    int  n=5;
    for(int i=1;i<=n;i++){
        for(char ch='A'; ch<= 'A'+i; ch++){
            cout<< char(ch) <<" ";
        }
        cout<<endl;
    }
    
    return 0;
}