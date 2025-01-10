#include "SDE.hpp"
#include "RandomGenerator.hpp"
#include <cmath>

SDE::SDE(double mu, double sigma, double S0, double dt, int steps, int numPaths)
    : mu(mu), sigma(sigma), S0(S0), dt(dt), steps(steps), numPaths(numPaths) {}

std::vector<double> SDE::simulatePath() {
    std::vector<double> path(steps + 1, S0);
    RandomGenerator rng;

    for (int i = 1; i <= steps; ++i) {
        double dW = rng.generateGaussian() * sqrt(dt);
        path[i] = path[i - 1] * exp((mu - 0.5 * sigma * sigma) * dt + sigma * dW);
    }
    return path;
}

// New function to simulate multiple paths
std::vector<std::vector<double>> SDE::simulatePaths() {
    std::vector<std::vector<double>> allPaths;
    for (int i = 0; i < numPaths; ++i) {
        allPaths.push_back(simulatePath());  // Generate a path and add it to the collection
    }
    return allPaths;
}
