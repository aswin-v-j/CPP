#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 7;
    for (int i = 1; i <= n; i++)
    {
        cout << "*  " ;
         
        for (int j = 0; j < n - 2; j++)
        {
            if (i == 1 || i == n)
            {
                cout<<"*  ";
            }
            else cout<<"   ";
        }

        cout << "*  ";

        cout<<endl;
    }

    return 0;
}