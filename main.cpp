#include "balanced_lists.h"
#include <cstdlib>
#include <ctime>

int main() {
    std::srand(static_cast<unsigned>(std::time(nullptr)));
    runTests();
    
    int n = 4; 
    int iterations = 10000;
    runExperiments(n, iterations);

    return 0;
}




