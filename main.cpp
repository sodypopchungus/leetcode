#include "sol1.hpp"

int sol1() {
	Solution1 sol;
	std::vector<int> nums = { 1, 2, 3, 4, 5 };
	int target = 3;

	std::vector<int> solution = sol.twoSum(nums, target);

	if (sol.twoSum(nums, target)[0] == -1) {
		std::cout << "No solutions";
	}
	else {
		std::cout << "(" << sol.twoSum(nums, target)[0] << ", " << sol.twoSum(nums, target)[1] << ")";
	}

	return 0;
}

int main() {

	sol1();

}
