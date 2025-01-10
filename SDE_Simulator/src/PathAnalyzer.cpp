#include "PathAnalyzer.hpp"
#include <numeric>
#include <cmath>

double PathAnalyzer::calculateMean(const std::vector<double>& path) {
    return std::accumulate(path.begin(), path.end(), 0.0) / path.size();
}

double PathAnalyzer::calculateVariance(const std::vector<double>& path) {
    double mean = calculateMean(path);
    double variance = 0.0;
    for (double value : path) {
        variance += (value - mean) * (value - mean);
    }
    return variance / path.size();
}
