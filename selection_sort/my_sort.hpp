// Change me instead
// All occurences of XXX need to be replaced with
// something more meaningful
#include <iterator>
template <typename iterator,typename LessThan>
void selection_Sort(iterator begin, iterator end, LessThan lessT)
{
  for (iterator current = begin; current != end; ++current)
  {
    auto minimum = current;
    auto compare = current;
    ++compare;
    while (compare != end)
    {
      if (lessT(*compare, *minimum))
        minimum = compare;
      ++compare;
    }
    if (current != minimum)
      std::iter_swap(current, minimum);
  }
}

template <typename iterator>
void my_selection_sort(iterator begin, iterator end)
{
  selection_Sort(begin, end, std::less<typename std::iterator_traits<iterator>::value_type>());
}

