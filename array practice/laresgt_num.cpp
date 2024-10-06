// ~mohd-uzaif-ansari
#include <iostream>
#include <limits.h> // Add this to use INT_MIN
using namespace std;
int main()
{
    int nums[] = {25, 67, 45, -79, -76, 0};
    // this line is for cheaking size of an array
    // cout << sizeof(nums)/sizeof(int)<<endl;
    int size = 6;
    int largest = INT_MIN;
    for (int i = 0; i < size; i++)
        if (nums[i] > largest)
        {
            largest = nums[i];
        }
    cout << "Largest value is = " << largest << endl;
    return 0;
}