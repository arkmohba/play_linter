#pragma once

#include <vector>
#include <string>
#include <sstream>

std::vector<std::string> split(const std::string &s, char delim) {
    std::vector<std::string> elems;
    std::stringstream ss(s);
    std::string item;
    while (std::getline(ss, item, delim)) {
      if (!item.empty()) {
              elems.push_back(item);
          }
    }
    return elems;
}

std::string basename(const std::string& s) {
  return split(s, '/').back();
}
