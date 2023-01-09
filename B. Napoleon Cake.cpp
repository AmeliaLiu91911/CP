#include<iostream>
using namespace std;

int main(){

    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int* a_array = new int[n];

        for (int j = 0; j < n; j++)
        {
            cin >> a_array[j];
        }

        for (int j = n-2; j > -1 ; j--)
        {
            a_array[j] = max(a_array[j], a_array[j+1]-1);
        }

        for (int j = 0; j < n; j++)
        {
            cout << (a_array[j] != 0 ? 1 : 0) << " ";
        }

        cout << endl;
        
    }
    
    return 0;
}
