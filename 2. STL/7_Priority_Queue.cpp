#include <iostream>
#include <queue>
//Priority queue is related to heap.
// Here First element is always maximum.
using namespace std;
int main() {
    priority_queue<int>maxi;

    priority_queue<int , vector<int>,greater<int> >mini;

    maxi.push(2);
    maxi.push(3);
    maxi.push(1);
    maxi.push(0);
    int n=maxi.size();

    for (int i = 0; i < n; i++)
    {
        cout<<maxi.top()<<" ";
        maxi.pop();
    }cout<<endl;

    mini.push(2);
    mini.push(3);
    mini.push(1);
    mini.push(0);
    int m=mini.size();

    for (int i = 0; i < m; i++)
    {
        cout<<mini.top()<<" ";
        mini.pop();
    }cout<<endl;
    
    cout<<"khali hai kya bhai?? -> "<<mini.empty();

return 0;
}