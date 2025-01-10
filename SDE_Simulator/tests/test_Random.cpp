#include <iostream>
#include "RandomGenerator.hpp"

void test_random_generator() {
    RandomGenerator rng;

    double sample = rng.generateGaussian();
    if (sample == 0) {
        std::cerr << "Test Failed: Gaussian random generator returned zero, which is unlikely.\n";
    } else {
        std::cout << "Test Passed: Random generator.\n";
    }
}

int main() {
    test_random_generator();
    return 0;
}
