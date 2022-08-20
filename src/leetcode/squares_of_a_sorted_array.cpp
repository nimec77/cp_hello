//
// Created by Dmitry Seloustev on 20.08.2022.
//

#include "squares_of_a_sorted_array.h"
std::vector<int> squares_of_a_sorted_array::sortedSquares(std::vector<int> &nums) {
    int left = 0, right = nums.size() - 1;
    std::vector<int> result;
    while (left <= right) {
        if (abs(nums[left]) > abs(nums[right])) {
            result.push_back(nums[left] * nums[left]);
            ++left;
        } else {
            result.push_back(nums[right] * nums[right]);
            --right;
        }
    }
    std::reverse(result.begin(), result.end());
    return result;
}
