#include "RandomGenerator.hpp"
#include <random>

RandomGenerator::RandomGenerator() {}

double RandomGenerator::generateGaussian() {
    static std::random_device rd;
    static std::mt19937 generator(rd());
    static std::normal_distribution<double> dist(0.0, 1.0);
    return dist(generator);
}
