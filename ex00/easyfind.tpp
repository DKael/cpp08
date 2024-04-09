
template <typename T>
typename T::iterator easyfind(T& container, const int toFind) {
  typename T::iterator pos;

  pos = std::find(container.begin(), container.end(), toFind);
  if (pos == container.end()) {
    throw std::invalid_argument("Argument not founded!\n");
  }
  return pos;
}
