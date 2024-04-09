#include <iostream>

#include "span.hpp"

int main() {
  try {
    Span sp1(10000);

    sp1.print();

    sp1.addNumber(42);
    sp1.addNumber(4242);
    sp1.addNumber(-42);
    sp1.addNumber(-4242);
    sp1.print();

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
    Span sp2(2);

    sp2.fillRandomNumbers();
    sp2.print();
    std::cout << "longestSpan : " << sp2.longestSpan()
              << "\nshortestSpan : " << sp2.shortestSpan() << '\n';
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
    Span sp3(1);

    sp3.fillRandomNumbers();
    sp3.print();
    std::cout << "longestSpan : " << sp3.longestSpan()
              << "\nshortestSpan : " << sp3.shortestSpan() << '\n';
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
    Span sp4(0);

    sp4.fillRandomNumbers();
    sp4.print();
    std::cout << "longestSpan : " << sp4.longestSpan()
              << "\nshortestSpan : " << sp4.shortestSpan() << '\n';
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