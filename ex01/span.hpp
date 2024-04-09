#ifndef SPAN_HPP
#define SPAN_HPP

#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <limits>
#include <vector>

class Span {
 private:
  std::vector<int> storage;
  size_t capacity;
  Span();

 public:
  Span(const unsigned int N);
  ~Span();
  Span(const Span& origin);
  Span& operator=(const Span& origin);

  void addNumber(const int input);
  void fillRandomNumbers(void);
  int shortestSpan(void) const;
  int longestSpan(void) const;
  void print(void);
};

#endif