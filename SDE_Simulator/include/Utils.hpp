#ifndef UTILS_HPP
#define UTILS_HPP

#include <vector>
#include <string>

class Utils {
public:
    static void savePathToCSV(const std::vector<double>& path, const std::string& filename);
};

#endif
