#include<iostream>
#include <cmath>

using namespace std;
int main()
{
    double n, m, a;
    
    cin >> n >> m >> a;

    cout << (long long)ceil(m/a)*(long long)ceil(n/a);

    return 0;
}