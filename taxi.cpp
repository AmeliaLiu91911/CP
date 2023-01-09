#include<iostream>
#include<vector>
using namespace std;

void printvect(vector<int> input)
{
    int n = input.size();
    for (size_t i = 0; i < n; i++)
    {   
        cout << input[i];
    }
    cout << endl;
}
vector<int> fillTaxi(vector<int> input, bool anotherTaxi)
{
    const int TAXI_LIMIT = 4;
    int vector_n = input.size();
    int taxi_required = 0;
    int filled_seats = 0;
    
    for (size_t i = 0; i < vector_n; i++) // takes groups and fills up taxi
    {
        if( (input[i]>0) && ((filled_seats + input[i]) <= TAXI_LIMIT))// if adding group to taxi does not exceed limit then keep adding
        {
            filled_seats += input[i]; // add the group to the taxi
            input[i] = 0; // remove the group from the selection
            taxi_required = 1;
        }
    }

    if (anotherTaxi)
    {
        vector<int> taxiRequire;
        taxiRequire.push_back(taxi_required);
        return taxiRequire;
    } else
    {
        return input;
    }
    
}

int main()
{
    int n;
    cin >> n;
    int num_taxi = 0;
    vector<int> input;
    for (size_t i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        input.push_back(temp);
    }
    


    for (size_t i = 0; i < n; i++)
    {
        num_taxi += fillTaxi(input, true)[0];
        input = fillTaxi(input, false);
    }
    
    cout << num_taxi << endl;

    return 0;
}