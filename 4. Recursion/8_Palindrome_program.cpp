#include <iostream>
using namespace std;
bool CheckPalindrome(string &str, int i, int j)
{
    // base case
    if (i > j)
        return true;

    if (str[i] != str[j])
        return false;

    else
    {
        swap(str[i], str[j]);
        i++;
        j--;
        CheckPalindrome(str, i, j);
    }
}
int main()
{
    string str = "hjkgkjh";
    int i = 0;
    int j = str.length() - 1;
    // bool isPalindrome = CheckPalindrome(str, i, j);
    // if (isPalindrome)
    //     cout << "It is a Palindrome " << endl;
    // else
    //     cout << "Not a Palindrome " << endl;
    CheckPalindrome(str, i, j) ? cout << "It is a Palindrome " << endl : cout << "Not a Palindrome " << endl;
    return 0;
}