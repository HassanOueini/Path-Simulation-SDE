#include "Utils.hpp"
#include <fstream>
#include <stdexcept>

void Utils::savePathToCSV(const std::vector<double>& path, const std::string& filename) {
    std::ofstream file(filename);
    if (!file.is_open()) {
        throw std::runtime_error("Unable to open file: " + filename);
    }
    for (const double& value : path) {
        file << value << "\n";
    }
    file.close();
}
