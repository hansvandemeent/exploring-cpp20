/** @file list4404.cpp */
/** Listing 44-4. A Program for Generating Successive Integers */
#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>

int main()
{
  std::vector<int> vec(10);
  int state;
  std::ranges::generate(vec, [&state]() { return ++state; });
  // Print the resulting integers, one per line.
  std::ranges::copy(vec, std::ostream_iterator<int>(std::cout, "\n"));
}
