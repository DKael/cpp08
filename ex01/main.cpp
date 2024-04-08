#include <iostream>

#include "span.hpp"

int main() {
  try {
    Span sp1(10000);

    sp1.fillRandomNumbers();
    sp1.print();
    std::cout << "longestSpan : " << sp1.longestSpan()
              << "\nshortestSpan : " << sp1.shortestSpan() << '\n';
    sp1.addNumber(42);
  } catch (std::length_error& e) {
    std::cerr << "length_error : " << e.what();
  } catch (std::range_error& e) {
    std::cerr << "range_error : " << e.what();
  } catch (std::bad_alloc& e) {
    std::cerr << "bad_alloc : " << e.what();
  } catch (std::exception& e) {
    std::cerr << "exception : " << e.what();
  } catch (...) {
    std::cerr << "Unknown exception\n";
  }
  std::cout << "---------------------------------------------------------------"
               "---------------------------\n";
  try {
    Span sp1(1);

    sp1.fillRandomNumbers();
    sp1.print();
    std::cout << "longestSpan : " << sp1.longestSpan()
              << "\nshortestSpan : " << sp1.shortestSpan() << '\n';
  } catch (std::length_error& e) {
    std::cerr << "length_error : " << e.what();
  } catch (std::range_error& e) {
    std::cerr << "range_error : " << e.what();
  } catch (std::bad_alloc& e) {
    std::cerr << "bad_alloc : " << e.what();
  } catch (std::exception& e) {
    std::cerr << "exception : " << e.what();
  } catch (...) {
    std::cerr << "Unknown exception\n";
  }
  // system("leaks span");
}