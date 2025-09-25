#include "closest_pair_tonum.h"
#include <utility>
#include <cmath>


std::pair<int, int> closest_pair_tonum(int upper_limit){
    for (int i = upper_limit - 1; i > 1; i--) {
        for (int j = i - 1; j > 0; j--) {
            int sm = i + j;
            int ost = i - j;
            if (sqrt(sm) == static_cast<int>(sqrt(sm)) && sqrt(ost) == static_cast<int>(sqrt(ost))) {
                return std::pair(i, j);
            }
        }
    }
    return std::pair(0, 0);
} 
