
template <typename T>
typename T::iterator easyfind(T& container, const int toFind) {
  typename T::iterator find;

  find = std::find(container.begin(), container.end(), toFind);
  if (find == container.end()) {
    throw std::invalid_argument("Argument not founded!\n");
  }
  return find;
}
