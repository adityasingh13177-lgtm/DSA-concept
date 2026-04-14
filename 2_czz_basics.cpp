#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Method 1: Using a fixed-size array
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);

    int sum = 0; 
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    cout << "Sum of array: " << sum << endl;

    // Method 2: Using a vector
    vector<int> vec = {5, 15, 25, 35};
    int sum2 = 0;
    for (int num : vec)
    {
        sum2 += num;
    }

    cout << "Sum of vector: " << sum2 << endl;

    return 0;
}