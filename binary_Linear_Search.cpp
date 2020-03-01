/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

//linear function
int linearSearch(int array[], int size, int userValue)
{
     for(int i = 0; i < size; i++)
    {
        if (userValue == array[i])
        {
            return i;
        }
    }
 
    return -1;
}
//binary search function
int binarySearch(int array[], int size, int userValue)
{
    int low = 0;
    int high = size - 1;
 
    int middle;
 
    while (low <= high)
    {
        middle = (low + high) / 2;
 
        if(userValue == array[middle])
        {
            return middle;
        }
        else if (userValue > array[middle])
        {
            low = middle + 1;
        }
        else
        {
            high = middle - 1;
        }
    }
 
    return -1;
 
}
 

void display(int pass, int numbers[], int userValue)
{
    if(pass >= 0)
    {
        cout << "The number " << numbers[pass] << " was found at the"
                " element with index " << pass ;
    }
    else
    {
        cout << "The number " << userValue << " was not found. ";
    }
    
}


int main()
{

//declaration block
int numbers [10]= {1, 5, 12, 44, 67, 72, 75, 85, 92, 98};
int userValue;
int type;
int pass;

cout <<"Please enter a value to search."  << endl;
cin >> userValue;

cout<<"choose 1 for linear search or choose 2 for binary search";
cin>> type;

if (type == 1)
{

    pass = linearSearch(numbers, 10, userValue);
    display(pass, numbers, userValue);
    
}    
else if (type == 2)
{
    pass = binarySearch(numbers, 10, userValue);
    display(pass, numbers, userValue);
}

    return 0;
}







