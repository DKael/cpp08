#include "span.hpp"

// can throw bad_alloc exception at reserve()
Span::Span(const unsigned int N) {
  if (N > storage.max_size()) {
    throw(std::length_error("Input N exceed vector's max size!"));
  }
  capacity = N;
  storage.reserve(capacity);
}

Span::~Span() {}

Span::Span(const Span& origin) {
  capacity = origin.capacity;
  storage = origin.storage;
}

Span& Span::operator=(const Span& origin) {
  if (&origin != this) {
    capacity = origin.capacity;
    storage = origin.storage;
  }
  return *this;
}

void Span::addNumber(const int input) {
  if (storage.size() == capacity) {
    throw std::range_error("Span full!\n");
  }
  storage.push_back(input);
}

void Span::fillRandomNumbers(void) {
  std::vector<int>::iterator begin = storage.begin();
  std::vector<int>::iterator end = storage.begin() + capacity;

  srand(static_cast<unsigned int>(time(NULL)));
  for (; begin != end; ++begin) {
    storage.push_back((rand() % (capacity * 10)) - capacity * 5);
  }
}

int Span::shortestSpan(void) const {
  if (storage.size() < 2) {
    throw std::range_error("Span is too short to perform longestSpan!\n");
  }
  std::vector<int> storageReplica = storage;
  std::vector<int>::iterator begin = storageReplica.begin();
  std::vector<int>::iterator end = storageReplica.end();
  int ret = std::numeric_limits<int>::max();
  int iTmp = 0;

  std::sort(begin, end);
  for (; begin != (end - 1); begin++) {
    iTmp = std::abs(*begin - *(begin + 1));
    if (iTmp < ret) {
      ret = iTmp;
    }
  }
  return ret;
}

int Span::longestSpan(void) const {
  if (storage.size() < 2) {
    throw std::range_error("Span is too short to perform longestSpan!\n");
  }
  int biggset = *(std::max_element(storage.begin(), storage.end()));
  int smallest = *(std::min_element(storage.begin(), storage.end()));

  return (biggset - smallest);
}

std::vector<int>::iterator Span::begin(void) { return storage.begin(); }

std::vector<int>::iterator Span::end(void) { return storage.end(); }

void Span::print(void) {
  std::vector<int>::iterator begin = storage.begin();
  std::vector<int>::iterator end = storage.end();
  for (; begin != (end - 1); begin++) {
    std::cout << *begin << " ";
  }
  std::cout << *begin << '\n';
}
