#include <cmath>
#include <string>
#include<iostream>
using namespace std;

int main()
{
    string input;
    int cum;
    cin >> input; // takes in the number as a string
    
    if (input.size()>=3)
    {
        input = input.substr(input.size() - 3); // only last 3 digits are relavent 
        cum = stoi(input); // convert char to int
    }
    else
    {
        cum = stoi(input);// convert char to int
    }
    

    if (cum%4 == 0) // if last 3 digits are divisable by 4 then return 4 otherwise 0 
    {
        cout << 4 << endl;
    } else
    {
        cout << 0 << endl;
    }
    
}