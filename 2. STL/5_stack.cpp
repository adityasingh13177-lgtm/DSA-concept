#include <iostream>
#include <stack>
// Stack has the concept of First in Last out.
using namespace std;
int main() {
    stack<string>s;

    s.push("Aditya");
    s.push("Singh");
    s.push("Rajput");

    cout<<"Top element: "<<s.top()<<endl;
    s.pop();
    cout<<"Top element after pop: "<<s.top()<<endl;

    cout<<"Size: "<<s.size()<<endl;
    cout<<"Empty or not: "<<s.empty()<<endl;

return 0;
}