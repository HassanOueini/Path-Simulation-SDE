#include <iostream>
#include "SDE.hpp"

void test_SDE_simulation() {
    double mu = 0.05, sigma = 0.1, S0 = 100.0, dt = 0.001;
    int steps = 250;

    SDE sde(mu, sigma, S0, dt, steps);
    std::vector<double> path = sde.simulatePath();

    if (path.size() != steps + 1) {
        std::cerr << "Test Failed: Incorrect path length.\n";
    } else {
        std::cout << "Test Passed: SDE simulation.\n";
    }
}

int main() {
    test_SDE_simulation();
    return 0;
}
