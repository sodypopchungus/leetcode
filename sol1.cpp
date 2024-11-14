#include "sol1.hpp"

std::vector<int> Solution1::twoSum(std::vector<int>& nums, int target) {
    // Declaring an unordered_map "solutionMap"
    std::unordered_map<int, int> solutionMap;

    // Getting a size of "nums" vector for later
    int numsSize = nums.size();

    // Mapping a vector<int>& nums to unordered_map for quicker search
    // Keys = nums elements; Values = nums indexes (and a potential first index)
    for (int solution1 = 0; solution1 < numsSize; solution1++) {
        solutionMap[nums[solution1]] = solution1;
    }

    for (int solution1 = 0; solution1 < numsSize; solution1++) {
        // A key for second index is a difference 
        // between a target number and a key for the first index
        // (Because Keys = nums elements)
        int solution2_key = target - nums[solution1];
        // When there is an element in the map that corresonds
        // to the key for second index
        // AND solution second index != first index
        // returns {first index, second index}
        if (solutionMap.count(solution2_key) && solutionMap[solution2_key] != solution1) {
            return { solution1, solutionMap[solution2_key] };
        }
        else {
            return { -1};
        }
    }
    // Returns empty vector<int> (because a solution is returned from the cycle)
    // AND the method is not "void"
    return {};
};