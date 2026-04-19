#include <iostream>
#include <vector>
using namespace std;

class Solution
{
private:
    void solve(vector<int> num, vector<vector<int>>& ans, int index)
    {
        // base case
        if (index >= num.size())
        {
            ans.push_back(num);
            return ;
        }
        for (int j = index; j < num.size(); j++)
        {
            swap(num[index], num[j]);
            solve(num, ans, index+1);
            // backtrack
            swap(num[index], num[j]);
        }
    }

public:
    vector<vector<int>> permute(vector<int> &num)
    {
        vector<vector<int>> ans;
        int index = 0;
        solve(num, ans, index);
        return ans;
    }
};
int main()
{
    Solution sol;
    vector<int> input = {1, 2, 3};
    vector<vector<int>> result = sol.permute(input);
    cout << " Possible Permutation: " << endl;
    for (const auto &p : result)
    {
        cout << "[";
        for (int val : p)
        {
            cout << val << " ";
        }
        cout << "]" << endl;
    }
    cout << endl;
    return 0;
}