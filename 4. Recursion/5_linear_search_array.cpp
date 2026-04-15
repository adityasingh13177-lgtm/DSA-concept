#include <iostream>
using namespace std;
bool linearsearch(int arr[], int size, int key) {

    //base case
    if(size == 0) {
        return false;
    }

    if(arr[0] == key) {
        return true;
    }

    else {
        bool remainingPart = linearsearch(arr+1, size-1, key);
    return remainingPart;
  }
}


int main() {
    int arr[5] = {1,3,5,2,4};
    int size = 5;
    int key = 2;
    bool ans = linearsearch(arr,size,key);

    if(ans){
        cout<<"Present"<<endl;
    }
    else{
        cout<<"Absent"<<endl;
    }
return 0;
}