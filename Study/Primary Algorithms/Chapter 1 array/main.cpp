#include <iostream>

#include <string>
#include <vector>

#include "LC3_rotate_array.h"

using namespace std;



int main()
{
	vector<int> nums = { 1, 2, 3, 4, 5, 6, 7};
	int k = 3;
	Solution solu;
	solu.rotate(nums, k);

	for (int i = 0; i < nums.size(); i++)
	{
		cout << nums[i] << endl;
	}
	return 0;
}