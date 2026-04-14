#include <iostream>
#include <list>
using namespace std;
int main() {
    list<int>l;
    list<int>L(5,100);
    cout<<"Printing L:"<<endl;
    for (int i : L)
    {
        cout<<i<<" ";
    }cout<<endl;

    l.push_back(1);
    l.push_front(2);

    for (int i : l)
    {
        cout<<i<<" ";
    }cout<<endl;

    cout<<"Before erase"<<endl;
    l.erase(l.begin());
    cout<<"After erase"<<endl;
    
    for (int i : l)
    {
        cout<<i<<" ";
    }cout<<endl;
    cout<<"size of list: "<<l.size();
return 0;
}