#include <iostream>
#include <vector>
#include <map>
#include <unordered_set>
using namespace std;

class Solution {
public:
	/*bool containsDuplicate(vector<int>& nums) {
		if (1 >= nums.size())
		{
			return false;
		}
		map<int, int> mapNums;
		for (int num : nums)
		{
			auto iter = mapNums.find(num);
			if (iter != mapNums.end())
			{
				return true;
			}
			else
			{
				mapNums.insert(make_pair(num, 1));
			}
		}
		return false;

	}*/

	// leetcode
	bool containsDuplicate(vector<int>& nums) {
		if (1 >= nums.size())
		{
			return false;
		}
		unordered_set<int> setNums;

		for (int num : nums)
		{
			auto iter = setNums.find(num);
			if (iter != setNums.end())
			{
				return true;
			}
			setNums.insert(num);
		}

		return false;
	}
};

int main()
{

	vector<int> nums = {1, 2, 3, 1};

	Solution so;
	bool ret = so.containsDuplicate(nums);

	cout << ret << endl;

	return 0;
}