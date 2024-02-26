//
// Created by elias on 19.02.2024.
//

#include "power_of_two.h"

bool Solution::isPowerOfTwo(int n) {
    if (n <= 0) {
        return false;
    }

    int z = n;
    while (z > 0) {
        if (z % 2 == 0) {
            z /= 2;
            continue;
        } else if (z == 1) {
            return true;
        }

        return false;
    }
    return true;
}