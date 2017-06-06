#include <iostream>
#include <iomanip>

#include "color/color.hpp"

int main( int argc, char *argv[] )
 {
  ::color::cmy< float > c; //!< Make an instance

  c = ::color::constant::orange_type{}; //!< Fill with some useful information

  std::cout<< "Orange in color::cmy<float> = { ";
  std::cout<< std::setw(12) << std::right << c[0] << ","
           << std::setw(12) << std::right << c[1] << ","
           << std::setw(12) << std::right << c[2];
  std::cout<< " };";
  std::cout<< std::endl;

 return EXIT_SUCCESS;
 }
