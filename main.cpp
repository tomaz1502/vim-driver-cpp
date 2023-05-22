extern "C" {
  #include "libvim.h"
}
#include "util.cpp"
#include <iostream>
#include <string>

class Config
{
  std::string input_file;
  std::string output_file;
  unsigned start_col;
  unsigned start_row;
  
  Config( const std::string& _input_file
        , const std::string& _output_file
        , const unsigned _start_col
        , const unsigned _start_row ) :
      input_file(_input_file)
    , output_file(_output_file)
    , start_col(_start_col)
    , start_row(_start_row) {}
};


int main(int argc, char* argv[])
{
  constexpr auto lowerLetters = produceLowerLetters();
  constexpr auto upperLetters = produceUpperLetters();
  constexpr auto arrows = produceArrows();
  constexpr auto allKeys = concatenate(lowerLetters, upperLetters, arrows);
  for (const auto& k: allKeys) {
    std::string s = std::string(k.begin(), k.end());
    std::cout << s << "\n";
  }
  /* char vim[] = "vim"; */
  /* char* vim_pt = &vim[0]; */
  /* char** vim_argv = &vim_pt; */
  /* const int vim_argc = 1; */
  /* vimInit(vim_argc, vim_argv); */
  return 0;
}
