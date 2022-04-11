// main.cpp

#include <iostream>

class Solution {
public:
    std::string replaceSpace(std::string s) {
        int count = 0;
        int len = s.length();

        for (char c : s)
        {
            if (c == ' ')
                count++;
        }

        for (size_t i = 0; i < count; i++)
        {
            s += "00";
        }

        for (int i = len - 1, j = s.size()-1; i < j; i--, j--)
        {
            if (s[i] != ' ')
            {
                s[j] = s[i];
            }
            else
            {
                s[j - 2] = '%';
                s[j - 1] = '2';
                s[j] = '0';
                j -= 2;
            }
        }

        return s;
    }
};

int main()
{
    std::string str = "We are happy.";
    Solution so;
    std::string ret = so.replaceSpace(str);
    std::cout << ret << std::endl;
    getchar();
    return 0;
}