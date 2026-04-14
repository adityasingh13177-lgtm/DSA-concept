#include <iostream>
#include <deque>
using namespace std;
int main() {
    deque<int>d;

    d.push_back(1);
    d.push_front(2);
    cout<<endl;
    //d.pop_pront()

    cout<<"Element at 1st index: "<<d.at(1)<<endl;

    cout<<"First element "<<d.front()<<endl;
    cout<<"Last element "<<d.back()<<endl;

    cout<<"Empty or not "<<d.empty()<<endl;

    cout<<"Before erase: "<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1); // delete first element i.e 2
    cout<<"After erase: "<<d.size()<<endl;
return 0;
}