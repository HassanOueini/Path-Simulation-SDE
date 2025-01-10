#ifndef SDE_HPP
#define SDE_HPP

#include <vector>

class SDE {
public:
    SDE(double mu, double sigma, double S0, double dt, int steps, int numPaths);
    std::vector<double> simulatePath();
    std::vector<std::vector<double>> simulatePaths();

private:
    double mu;    // Drift
    double sigma; // Volatility
    double S0;    // Initial value
    double dt;    // Time step
    int steps;    // Number of steps
    int numPaths; // Number of paths to simulate
};

#endif
