//
// Created by Dmitry Seloustev on 20.08.2022.
//

#include "remove_duplicated_from_sorted_array.h"
int remove_duplicated_from_sorted_array::removeDuplicatedFromSortedArray(std::vector<int> &nums) {
    if (nums.empty()) {
        return 0;
    }
    auto i = 0;
    for (auto j = 1; j < nums.size(); ++j) {
        if (nums[i] != nums[j]) {
            ++i;
            nums[i] = nums[j];
        }
    }
    return i + 1;
}
