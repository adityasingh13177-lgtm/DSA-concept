#include <iostream>
using namespace std;
bool isSorted(int arr[], int size) {

    //base case
    if(size == 0 || size == 1) {
        return true;
    }

    if(arr[0] > arr[1]) {
        return false;
    }
    else{
        bool remainingPart = isSorted(arr+1, size-1);
        return remainingPart;
    }
}
int main() {
    int arr[] = {1, 2, 7, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    if(isSorted(arr, size)) {
        cout << "Array is sorted." << endl;
    } else {
        cout << "Array is not sorted." << endl;
    }
    return 0;
}