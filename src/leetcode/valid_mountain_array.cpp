//
// Created by Dmitry Seloustev on 25.08.2022.
//

#include "valid_mountain_array.h"
bool valid_mountain_array::validMountainArray(std::vector<int> &arr) {
    int n = arr.size(), i = 0;
    if (n < 3) return false;

    while (i + 1 < n && arr[i] < arr[i + 1]) i++;

    if (i == 0 || i == n - 1) return false;

    while (i + 1 < n && arr[i] > arr[i + 1]) i++;


    return i == n - 1;
}

bool valid_mountain_array::validMountainArray2(std::vector<int> &arr) {
    if (arr.size() < 3 || arr[0] >= arr[1]) {
        return false;
    }

    auto inc = true;

    for (auto i = 2; i <= arr.size(); i++) {
        if (inc) {
            if (arr[i] < arr[i - 1]) {
                continue;
            }
            inc = false;
        }
        if (arr[i] < arr[i - 1]) {
            continue;
        }
        return false;
    }

    return !inc;
}
