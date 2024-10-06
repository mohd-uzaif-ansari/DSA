// ~mohd-uzaif-ansari
#include <iostream>
#include <limits.h>  // Add this to use INT_MAX
using namespace std;
int main()
{
    int num[] = {5, 10, 55, 77, -34, 22, -35};
    int size = 7;

    int smallest = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (num[i] < smallest)
        {
            smallest = num[i];
        }
    }
    cout << "smallest value is = " << smallest << endl;
    return 0;
}