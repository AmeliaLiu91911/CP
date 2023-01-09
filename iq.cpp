#include<iostream>
using namespace std;
int main()
{
    int n, parity = 0;

    cin >> n;
    int* a_array = new int[n];

    for (int i = 0; i < n; i++) //data input
    {
        cin >> a_array[i];
    }

    for (int i = 0; i < 3; i++) // if element is even then parity++
    {                           // if parity >= 2 then mostly even
        if (a_array[i]%2 == 0)
        {
            parity++;
        }
    }
    
    if (parity >= 2)
    {
        for (int i = 0; i < n; i++)
        {
            if (a_array[i]%2 != 0)
            {
                cout << i+1 ;
                break;
            }
            
        }
        
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (a_array[i]%2 == 0)
            {
                cout <<  i+1 ;
                break;
            }
            
        }
    }
    
    return 0;
}