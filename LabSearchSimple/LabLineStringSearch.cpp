#include <iostream>
#include <string>
using namespace std;
int LSS(string str, string substr)
{
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == substr[0])
        {
            int count = 0;
            for (int j = 0; j < substr.size(); j++)
            {
                if (str[i + j] != substr[j])
                {
                    j = substr.size();
                }
                else
                {
                    count++;
                }
            }
            if (count == substr.size())
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
    string substr = "abce";
    cout << LSS(str, substr);
}