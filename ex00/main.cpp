#include <algorithm>
#include <array>
#include <iostream>
#include <string>
#include <vector>

int main() {
  std::vector<int> iVec(5);
  for (int i = 0; i < iVec.size(); i++) {
    iVec.push_back(i * 10);
  }

  std::vector<int>::iterator iIter = iVec.begin();
}