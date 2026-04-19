#include <iostream>
#include <vector>
using namespace std;
class Solution
{
private:
    void Find(string digit, vector<string> &ans, string output, int index, string mapping[])
    {
        if (index >= digit.length())
        {
            ans.push_back(output);
            return;
        }
        int number = digit[index] - '0';
        string value = mapping[number];
        for (int i = 0; i < value.length(); i++)
        {
            output.push_back(value[i]);
            Find(digit, ans, output, index+1, mapping);
            output.pop_back();
        }
    }

public:
    vector<string> letterCombo(string digit)
    {
        vector<string> ans;
        if (digit.length() == 0)
            return ans;

        string output;

        int index = 0;
        string mapping[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqr", "stu", "vwxyz"};
        Find(digit, ans, output, index, mapping);
    }
};
int main()
{
    Solution sol;
    string input;
    cout << "Enter digits (2-9): ";
    cin >> input;
    vector<string> combination = sol.letterCombo(input);
    cout << " Possible combination: " << endl;
    for (const string &s : combination)
    {
        cout << s << " ";
    }
    cout << endl;
    return 0;
}