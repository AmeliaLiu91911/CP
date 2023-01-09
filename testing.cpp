#include<iostream>
using namespace std;

int *comp(int *arr, int size, bool sizemode)
{   //take in a dynamic array and outputs the first 2 elements in a new array
    int* fun_array = new int[size];
    int* pointer_array = new int[1];

    int pointer = size-1;
    for (size_t i = 0; i < pointer ; i++)
    {
        fun_array[i] = 2*arr[i];
    }
    if (sizemode == false)
    {
        return fun_array;
    }
    else
    {
        pointer_array[0] = pointer; 
        return pointer_array;
    }
    
    
}

int main()
{
    const int size1 = 5;
    int testarray[size1] = {6, 1, 2, 3, 3};
    int* outputarray = new int[size1];
    bool mode = false;
    outputarray = comp(testarray,size1, mode);
    cout << outputarray[0];
    return 0;
}