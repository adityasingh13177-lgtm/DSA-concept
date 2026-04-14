#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<int, string> m;
    m[1] = "Aditya";
    m[13] = " Radhe Radhe";
    m[2] = "Singh";

    m.insert({5, "Rajput"});

    cout << "Before erase" << endl;
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }cout << endl;

    //m.erase(13);
    cout << "After erase" << endl;
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }cout << endl;
    auto it = m.find(5);
    for (auto i = it;i != m.end();i++)
    {
        cout << (*i).first << endl;
    }cout << endl;
    

    return 0;
}