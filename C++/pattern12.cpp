#include <iostream>
using namespace std ;

int main() {
    int n = 4;
    for (int i = 1; i <= n; i++)
    {
        for (int a = 1; a <= i; a++)
        {
            cout<< a<<"  ";
        }
        for (int b = 1; b <= 2*n - 2*i; b++)
        {
            cout<<"   ";
        }
        
        for (int c = i; c >= 1; c--)
        {
            cout<< c <<"  ";
        }
        
        cout<< endl;
    }
    
    return 0;
}