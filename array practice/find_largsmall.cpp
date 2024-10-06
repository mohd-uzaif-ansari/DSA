#include <iostream>
#include <limits.h>
using namespace std;
int main()
{
    int nums[] = {25, 67, 45, -79, -76, 0};
    // this line is for cheaking size of an array
    // cout << sizeof(nums)/sizeof(int)<<endl;
    int size = 6;

    int smallest = INT_MAX;
    int largest = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (nums[i] < smallest )
        {
            smallest = nums[i];
        }
        if(nums[i] > largest){
            largest = nums[i];
        }
    }
    cout << "Smallest value is = " << smallest << endl;
    cout << "Largest value is = " << largest << endl;
    return 0;
}