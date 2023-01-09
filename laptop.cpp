#include<iostream>
#include<vector>
struct laptop
{
    int price;
    int quality;
};

using namespace std;
int main()
{
    int n; //no of laptops
    cin >> n;

    for (size_t i = 0; i < n; i++)
    {
        int a , b;
        cin >> a >> b;
        if (a != b)
        {
            cout << "Happy Alex" << endl;
            break;
        }
        else if (i == n-1)
        {
            cout << "Poor Alex" << endl;
            break;
        }
        
    }

    return 0;
}