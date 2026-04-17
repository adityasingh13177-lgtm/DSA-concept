#include <iostream>
using namespace std;
int partition(int arr[], int s, int e){
    int pivot = arr[s];
    int count = 0;

    for (int i = s+1; i<=e; i++)
    {
        if(arr[i] <= pivot)
        count++;
    }

    //Place pive in right position
    int pivotindex = s + count;
    swap(arr[pivotindex],arr[s]);
    
    //left and right wala part sambhal lete hai
    int i = s;
    int j = e;

    while(i < pivotindex && j > pivotindex){
        while (arr[i] <= pivot)
            i++;

        while(arr[j] > pivot)
            j--;

        
        if(i < pivotindex && j > pivotindex)
            swap(arr[i++],arr[j++]);

    }
    
    return pivotindex;
}

void quicksort(int arr[], int s, int e){
    //base case
    if(s>=e)
    return ;
    
    //partition karenge
    int p = partition(arr, s, e);

    //left part ko sort karna
    quicksort(arr, s, p-1);
    
    //right part ko sort karna
    quicksort(arr, p+1, e);
}
int main() {
    int arr[10] = {8,12,45,0,34,8,4,7,3,6};
    int e = 10;   //size of array

    quicksort(arr, 0, e-1   );
    cout<<"---Array After Sorting---"<<endl;

    for (int i = 0; i < e; i++)
    {
        cout<<arr[i]<<" ";   
    }cout<<endl;
    
    return 0;
}