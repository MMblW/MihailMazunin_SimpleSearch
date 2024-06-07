#include <iostream>
using namespace std;
int LineSearch(string str, string substr)
{
    for (int i = 0; i < str.size(); i++)
    {
        if (substr[0] == str[i])
        {
            bool flag = true;
            for (int j = 1; j < substr.size(); j++)
            {
                if (substr[j] != str[i + j])
                {
                    flag = false;
                    j = substr.size();
                }
            }
            if (flag)
            {
                return i;
            }
        }
    }
    return -1;
}
int main()
{
    string str = "abcabceabcabcd";
    string substr = "abcd";
    cout << "String: " << str << endl << "Substring: " << substr << endl;
    cout << LineSearch(str, substr);
}