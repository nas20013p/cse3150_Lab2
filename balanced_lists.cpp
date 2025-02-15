#include "balanced_lists.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cassert>

void fisherYatesShuffle(std::vector<int>& arr) {
    for (int i = arr.size() - 1; i > 0; --i) {
        int j = std::rand() % (i + 1);
        std::swap(arr[i], arr[j]);
    }
}

bool isBalanced(const std::vector<int>& arr) {
    int sum = 0;
    for (int num : arr) {
        sum += num;
        if (sum < 0) return false;
    }
    return sum == 0;
}

void runExperiments(int n, int iterations) {
    int balancedCount = 0;

    for (int i = 0; i < iterations; ++i) {
        std::vector<int> arr(n, 1);
        arr.insert(arr.end(), n, -1);
        fisherYatesShuffle(arr);
        
        if (isBalanced(arr)) balancedCount++;
    }

    std::cout << "Balanced lists: " << balancedCount << "\n";
    std::cout << "Total lists: " << iterations << "\n";
    std::cout << "Proportion: " << static_cast<double>(balancedCount) / iterations << "\n";
}


