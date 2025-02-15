#include "balanced_lists.h"
#include <cassert>
#include <iostream>

void runTests() {
    std::vector<int> test1 = {1, -1};
    assert(isBalanced(test1) == true);

    std::vector<int> test2 = {1, 1, -1, -1};
    assert(isBalanced(test2) == true);

    std::vector<int> test3 = {1, -1, -1, 1};
    assert(isBalanced(test3) == false);

    std::vector<int> test4 = {1, -1, 1, -1};
    assert(isBalanced(test4) == true);

    std::vector<int> test5 = {-1, 1}; 
    assert(isBalanced(test5) == false);

    std::vector<int> test6 = {1, 1, -1}; 
    assert(isBalanced(test6) == false);

    std::cout << "All tests passed!\n";

}
