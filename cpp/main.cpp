#include <iostream>

#include "utility.hpp"

int main() {
  std::vector<std::string> pathes = {
    "foo/bar.h",
    "hoge/foga.c"
  };
  for (const std::string& path: pathes) {
    std::cout << basename(path) << std::endl;
  }
}
