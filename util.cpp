#pragma once

#include <algorithm>
#include <array>
#include <string>

using std::array;
using key = array<char, 10>;

template <typename T, std::size_t... sizes>
constexpr array<T, (sizes + ...)> concatenate(const array<T, sizes>&... arrays)
{
    array<T, (sizes + ...)> result = {};
    std::size_t index = 0;

    ((std::copy_n(arrays.begin(), sizes, result.begin() + index), index += sizes), ...);

    return result;
}


constexpr array<key, 26> produceLowerLetters()
{
  array<key, 26> result = {};
  for (char c = 'a'; c <= 'z'; c++) {
    result[c - 'a'][0] = c;
  }
  return result;
}

constexpr array<key, 26> produceUpperLetters()
{
  array<key, 26> result = {};
  for (char c = 'A'; c <= 'Z'; c++) {
    result[c - 'A'][0] = c;
  }
  return result;
}

constexpr array<key, 4> produceArrows()
{
  return array<key, 4>{"<LEFT>", "<UP>", "<RIGHT>", "<DOWN>"};
}
