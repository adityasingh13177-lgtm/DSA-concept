#include <iostream>
#include <queue>
 //Queue has the concept of First in First out.
using namespace std;
int main() {
    queue<string>q;

    q.push("Aditya");
    q.push("Singh");
    q.push("Rajput");

    cout<<"Size before pop: "<<q.size()<<endl;
    cout<<"First element: "<<q.front()<<endl;
    q.pop();
    cout<<"First element: "<<q.front()<<endl;
    cout<<"Size before pop: "<<q.size()<<endl;
return 0;
}