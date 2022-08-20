//
// Created by Dmitry Seloustev on 20.08.2022.
//

#include "duplicate_zeros.h"
void duplicate_zeros::duplicateZeros(std::vector<int> &nums) {
    auto zeros = std::count_if(std::begin(nums), std::end(nums), [](int i) { return i == 0; });

    for (auto i = nums.size() - 1, j = nums.size() + zeros - 1; i < j; --i, --j) {
        if (j < nums.size()) {
            nums[j] = nums[i];
        }
        if (nums[i] == 0) {
            if (--j < nums.size()) {
                nums[j] = nums[i];
            }
        }
    }
}
