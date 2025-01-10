#include <iostream>
#include <vector>
#include "PathAnalyzer.hpp"

void test_path_analyzer() {
    std::vector<double> path = {1.0, 2.0, 3.0, 4.0, 5.0};

    double mean = PathAnalyzer::calculateMean(path);
    double variance = PathAnalyzer::calculateVariance(path);

    if (mean == 3.0 && variance == 2.0) {
        std::cout << "Test Passed: Path Analyzer.\n";
    } else {
        std::cerr << "Test Failed: Incorrect calculations.\n";
    }
}

int main() {
    test_path_analyzer();
    return 0;
}
