#include <iostream>
#include "SDE.hpp"
#include "PathAnalyzer.hpp"
#include "Utils.hpp"

int main() {
    // Parameters
    double mu = 0.08, sigma = 0.1, S0 = 100.0, dt = 0.005;
    int steps = 1000, numPaths = 5;

    // Simulate multiple SDE paths
    SDE sde(mu, sigma, S0, dt, steps, numPaths);
    std::vector<std::vector<double>> allPaths = sde.simulatePaths();  // This is now a vector of paths

    // Loop through each path to analyze and output results
    for (int i = 0; i < numPaths; ++i) {
        std::vector<double> path = allPaths[i];  // Get the individual path

        // Analyze the path
        double mean = PathAnalyzer::calculateMean(path);
        double variance = PathAnalyzer::calculateVariance(path);

        // Output results for this path
        std::cout << "Path " << i + 1 << " Mean: " << mean << "\n";
        std::cout << "Path " << i + 1 << " Variance: " << variance << "\n";

        // Save the path to a CSV file
        try {
            std::string filename = "data/results_path_" + std::to_string(i + 1) + ".csv";
            Utils::savePathToCSV(path, filename);
            std::cout << "Path " << i + 1 << " saved to '" << filename << "'.\n";
        } catch (const std::exception& e) {
            std::cerr << "Error saving path " << i + 1 << ": " << e.what() << "\n";
        }
    }

    return 0;
}
