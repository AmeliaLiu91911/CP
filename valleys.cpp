#include <iostream>
#include <vector>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> array;

        for (size_t i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            if (i == 0 || temp != array.back()) array.push_back(temp); // if first data or non-consecutive then add to data array
        }

        if (array.size() > 2)
            {
                for (size_t i = 1; i < array.size()-1; i++)
                {
                    if (array[i-1]<array[i] && array[i]>array[i+1])
                    {
                        cout << "NO" << endl;
                        break;
                    } else if (i == array.size()-2) 
                    {
                        cout << "YES" << endl;
                    }
                }
            } else
            {
                cout << "YES" << endl;
            }
    }
    return 0;
}