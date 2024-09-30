#include <iostream>
using namespace std ;

int main() {
    int c = 1;
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << c<< "  ";
            c += 1;
        }
    cout<<endl;   
    }
    
    return 0;
}