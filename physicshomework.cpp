#include<iostream>
using namespace std;
int main()
{
    int t;
    int sx=0, sy=0, sz=0;

    cin >> t;
    while (t--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        sx += x;
        sy += y;
        sz += z;
           
    }

    if( sx == 0 && sy == 0 && sz == 0)
    {
        cout << "YES" << endl;

    } else
    {
        cout << "NO" << endl;
    }
    
    return 0;
}