#include<iostream>
using namespace std;

int *comp(int input[],  int size, bool pointer_mode)
{
    int* test = new int[size];
    int* pointer_array = new int[1];

    for (int i = 0; i < size; i++)
    {
        test[i] = input[i];
    }
    
    int test_len = size;
    int pointer = 0;
    int* output= new int[test_len+1];
    int pin=0, pen=pin+1;

    while (pen != test_len+1)
    {
        if (test[pin] != test[pen])
        {
            output[pointer] = test[pin];
            pin = pen;
            pen++;
            pointer++;
            
        }else if(pen == test_len)
        {
            output[pointer] = test[pin];
            pen++;
        }else
        {
            pen++;
        }
    }
    
    //output == reduced input array
    //pointer == length output
    if (pointer_mode == true)
    {
        pointer_array[0] = pointer;
        return pointer_array;
    }
    else
    {
        return output;
    }
    
}
int main()
{
    const int size1 = 5;
    int testarray[size1] = {6, 1, 2, 3, 3};
    int *result;
    bool return_pointer = true;
    result = comp(testarray,  size1, return_pointer);
    cout << result[0];

}
