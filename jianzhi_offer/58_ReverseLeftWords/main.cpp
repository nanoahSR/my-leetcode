// main.cpp

#include <iostream>

class Solution {
public:
    std::string reverseLeftWords(std::string s, int n) {
        if (s.length() <= n)
        {
            return s;
        }

        int len = s.length();
        std::string temp("");
        for (size_t i = 0; i < n; i++)
        {
            temp += s.at(i);
        }

        for (size_t i = 0, j = n; j < len; i++, j++)
        {
            s.at(i) = s.at(j);
        }

        for (size_t i = len - n, j =0; i < len; i++, j++)
        {
            s.at(i) = temp.at(j);
        }
        return s;
    }
};

int main()
{
    Solution so;
    std::string str = "lrloseumgh";
std::string ret =  so.reverseLeftWords(str, 6);
std::cout << ret << std::endl;
    return 0;
}