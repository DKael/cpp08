#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>

template <typename T>
class MutantStack : public std::stack<T> {
 public:
  MutantStack();
  ~MutantStack();
  MutantStack(const MutantStack& origin);
  MutantStack& operator=(const MutantStack& origin);
  typedef typename MutantStack<T>::stack::container_type container_type;
  typedef typename container_type::const_iterator const_iterator;
  typedef
      typename container_type::const_reverse_iterator const_reverse_iterator;
  typedef typename container_type::iterator iterator;
  typedef typename container_type::reverse_iterator reverse_iterator;

  iterator begin(void);
  iterator end(void);
  const_iterator begin() const;
  const_iterator end() const;
  reverse_iterator rbegin(void);
  reverse_iterator rend(void);
  const_reverse_iterator rbegin() const;
  const_reverse_iterator rend() const;
};

#include "MutantStack.tpp"

#endif
