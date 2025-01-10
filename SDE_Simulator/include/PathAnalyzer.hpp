#ifndef PATHANALYZER_HPP
#define PATHANALYZER_HPP

#include <vector>

class PathAnalyzer {
public:
    static double calculateMean(const std::vector<double>& path);
    static double calculateVariance(const std::vector<double>& path);
};

#endif
