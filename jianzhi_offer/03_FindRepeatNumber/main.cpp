// main.cpp

#include <iostream>
#include <vector>
#include <unordered_map>

class Solution {
public:
    int findRepeatNumber(std::vector<int>& nums) {
        std::unordered_map<int, int> mapNum;

        for (int num : nums)
        {
            std::unordered_map<int, int>::iterator iter = mapNum.find(num);
            if (iter != mapNum.end())
            {
                return num;
            }
            else
            {
                mapNum[num] = 1;
            }
        }
        return -1;
    }
};

int main()
{
    std::vector<int> vec = {2, 3, 1, 0, 2, 5, 3};
    Solution so;
    int ret = so.findRepeatNumber(vec);
    std::cout << ret << std::endl;
    return 0;
}
