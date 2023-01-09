#include<iostream>
using namespace std;

int *comp(int input[],  int size, bool pointer_mode)
{
    int* test = new int[size];
    int* pointer_array = new int[1];

    for (int i = 0; i < size; i++)
    {
        test[i] = input[i];
    }
    
    int test_len = size;
    int pointer = 0;
    int* output= new int[test_len+1];
    int pin=0, pen=pin+1;

    while (pen != test_len+1)
    {
        if (test[pin] != test[pen])
        {
            output[pointer] = test[pin];
            pin = pen;
            pen++;
            pointer++;
            
        }else if(pen == test_len)
        {
            output[pointer] = test[pin];
            pen++;
        }else
        {
            pen++;
        }
    }
    
    //output == reduced input array
    //pointer == length output
    if (pointer_mode == true)
    {
        pointer_array[0] = pointer;
        return pointer_array;
    }
    else
    {
        return output;
    }
    
}

int main()
{
    int t, cursor;
    cin >> t;


    for (int i = 0; i < t; i++)
    {
        int n0;
        cin >> n0;
        int* a_array0 = new int[n0];
        int* a_array = new int[n0];
        int n;

        for (int j = 0; j < n0; j++)
        {
            cin >> a_array0[j];
        }
        
        a_array = comp(a_array0,n0, false);
        n = comp(a_array0,n0, true)[0];

        if (n>2)
        {
            for (int k = 1; k < n-1; k++)
            {
                if (a_array[k-1]<a_array[k] && a_array[k]>a_array[k+1])
                {
                    cout << "NO" << endl;
                    break;
                } else if (k == n-2) 
                {
                    cout << "YES" <<endl;
                }
                
            }
        } else
        {
            cout << "YES" << endl;
        }
    
    }
    
    return 0;
}