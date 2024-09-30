
#include<bits/stdc++.h>
using namespace std ;

bool palindrome(int i ,string &str){

    if(i >= str.size()/2) return true;

    if(str[i] != str[str.size()-1-i] )return false;

    return palindrome(i+1 ,str);
}


int main() {
    string s;
    getline(cin,s);
    int check = palindrome(0,s);
    if(check==1) cout<< "It is a palindrome";
    else if (check ==0) cout<< "It is not a palindrome";
    
    return 0;
}