#include <algorithm>
#include <deque>
#include <iostream>
#include <list>
#include <sstream>
#include <string>
#include <vector>

#include "easyfind.hpp"

int main() {
  std::vector<int> iVec;
  for (size_t i = 0; i < 5; i++) {
    iVec.push_back(i * 10);
  }
  std::deque<int> iDeq;
  for (size_t i = 0; i < 5; i++) {
    iDeq.push_back(i * 10);
  }
  std::list<int> iLst;
  for (size_t i = 0; i < 5; i++) {
    iLst.push_back(i * 10);
  }

  std::vector<int>::iterator iVecIter;
  std::deque<int>::iterator iDeqIter;
  std::list<int>::iterator iLstIter;

  try {
    iVecIter = easyfind(iVec, 0);
    iDeqIter = easyfind(iDeq, 10);
    iLstIter = easyfind(iLst, 20);
    std::cout << "iVec find " << *iVecIter << "!\n";
    std::cout << "iDeq find " << *iDeqIter << "!\n";
    std::cout << "iLst find " << *iLstIter << "!\n";
  } catch (std::invalid_argument& e1) {
    std::cerr << e1.what();
  } catch (std::exception& e2) {
    std::cerr << e2.what();
  }

  try {
    iVecIter = easyfind(iVec, 100);
    iDeqIter = easyfind(iDeq, 100);
    iLstIter = easyfind(iLst, 200);
    std::cout << "iVec find " << *iVecIter << "!\n";
    std::cout << "iDeq find " << *iDeqIter << "!\n";
    std::cout << "iLst find " << *iLstIter << "!\n";
  } catch (std::invalid_argument& e1) {
    std::cerr << e1.what();
  } catch (std::exception& e2) {
    std::cerr << e2.what();
  }

  std::vector<double> dVec;
  for (size_t i = 0; i < 5; i++) {
    dVec.push_back(i * 10);
  }
  std::vector<double>::iterator dVecIter;
  try {
    dVecIter = easyfind(dVec, 10);
    std::cout << "dVec find " << *dVecIter << "!\n";
  } catch (std::invalid_argument& e1) {
    std::cerr << e1.what();
  } catch (std::exception& e2) {
    std::cerr << e2.what();
  }

  // std::vector<std::string> sVec;
  // std::stringstream sBuf;
  // std::string tmp;
  // for (size_t i = 0; i < 5; i++) {
  //   sBuf << i * 10;
  //   sBuf >> tmp;
  //   sVec.push_back(tmp);
  // }
  // std::__1::vector<std::string>::iterator sVecIter;
  // try {
  //   sVecIter = easyfind(sVec, 10);
  //   std::cout << "sVec find " << *sVecIter << "!\n";
  // } catch (std::invalid_argument& e1) {
  //   std::cerr << e1.what();
  // } catch (std::exception& e2) {
  //   std::cerr << e2.what();
  // }
}