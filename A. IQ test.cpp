#include<iostream>
using namespace std;

int main(){
    int n, parity = 0; 
    cin >> n;

    int* a_array = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a_array[i];

        if (a_array[i]%2==0) //parity keeps track of the amount of even to odd inputs
        {                    // if parity > 0 more odd inputs. If parity < 0 more even inputs
            parity++;
        }
        else
        {
            parity--;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (parity<0 && (*(a_array + i)%2 == 0))
        {
            cout << i+1;
            break;
        }
        else if (parity>0 && (*(a_array + i)%2 != 0))
        {
            cout << i+1;
            break;
        }
        
    }
    
    
    return 0;
}
