﻿#pragma once

#include <vector>

using namespace std;

/*给你一个数组，将数组中的元素向右轮转 k 个位置，其中 k 是非负数。

示例 1:

输入: nums = [1,2,3,4,5,6,7], k = 3
输出: [5,6,7,1,2,3,4]
解释:
向右轮转 1 步: [7,1,2,3,4,5,6]
向右轮转 2 步: [6,7,1,2,3,4,5]
向右轮转 3 步: [5,6,7,1,2,3,4]
示例 2:

输入：nums = [-1,-100,3,99], k = 2
输出：[3,99,-1,-100]
解释: 
向右轮转 1 步: [99,-1,-100,3]
向右轮转 2 步: [3,99,-1,-100]
 

提示：

1 <= nums.length <= 105
-231 <= nums[i] <= 231 - 1
0 <= k <= 105
 

作者：力扣 (LeetCode)
链接：https://leetcode-cn.com/leetbook/read/top-interview-questions-easy/x2skh7/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
*/

class Solution
{
public:
	Solution();
	~Solution();

	//输入: nums = [1, 2, 3, 4, 5, 6, 7], k = 3
	//输出 : [5, 6, 7, 1, 2, 3, 4]
	// 方法一：逐个翻转
	/*void rotate(vector<int>& nums, int k) {
		int len = nums.size();
		for (int i = 0; i < k; i++)
		{
			int temp = nums[len-1];
			for (int j = len-1; j > 0; j--)
			{
				nums[j] = nums[j-1];
			}
			nums[0] = temp;
		}
	}
	*/

	// 方法二：
	void reverse(vector<int>& nums, int start, int end)
	{
		while (start < end)
		{
			swap(nums[start], nums[end]);
			start += 1;
			end -= 1;

		}
	}

	void rotate(vector<int>& nums, int k) {
		k %= nums.size();
		reverse(nums, 0, nums.size()-1);
		reverse(nums, 0, k-1);
		reverse(nums, k, nums.size() - 1);
	}

	

private:

};

