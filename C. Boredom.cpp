#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


vector<int> zeroends(vector<int> input)
{
    if (input[0] != 0)
    {
        input.insert(input.begin(), 0);
    }
    if (input[input.size()]!=0)
    {
        input.push_back(0);
    }
    return input;
}
void printvect(vector<int> input)
{
    int n = input.size();
    for (size_t i = 0; i < n; i++)
    {   
        cout << input[i];
    }
    cout << endl;
}
vector<int> cyc(vector<int> input, int sum, bool returnSum)
{
    

    if (returnSum)
    {
        vector<int> sumvect;
        sumvect.push_back(sum);
        return sumvect;
    }
    else
    {
        return input;
    }   
}


int main()
{
    int n;
    int sum = 0;
    cin >> n;
    vector<int> input;
    for (size_t i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        input.push_back(temp);
    }
    
    printvect(input);
    input = zeroends(input);
    printvect(input);
    
    
    return 0;
}