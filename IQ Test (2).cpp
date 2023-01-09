#include<iostream>
using namespace std;
int main()
{
    int n,curr;
    bool a, b, c, t1, t2;
    bool flg;

    cin >> n;
    int* a_array = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a_array[i];
    }

    
    flg = false;
    curr = n-1;

    while(flg == false)
    {
        // [a0, a1, a2, a3, a4, ... , an]
        //                  <--[a ,b ,c ]
        //                     [ t1,t2  ]
        c = (a_array[curr]%2 != 0);
        b = (a_array[curr-1]%2 != 0);
        a = (a_array[curr-2]%2 != 0);
        t1 = a==b;
        t2 = b==c;

        if (t1&&t2)
        {
            curr--;
        }
        else if ( (!t1)&&(!t2) )
        {
            cout << curr;
            flg = true;
        }
        else
        {
            if (t1)
            {
                cout << curr + 1;
                flg = true;
            }
            else
            {
                cout << curr - 1;
                flg = true;
            }
            
        }
        
    }
    
    return 0;
}