#include <boost/multiprecision/cpp_int.hpp>
#include <iostream>

int main()
{
   using namespace boost::multiprecision;

   int256_t v = 1;

   // Do some fixed precision arithmetic:
   for(unsigned i = 1; i <= 20; ++i)
      v *= i;

   std::cout << v << std::endl; // prints 20!

   // Repeat at arbitrary precision:
   cpp_int u = 1;
   for(unsigned i = 1; i <= 10000; ++i)
      u *= i;

   std::cout << u << std::endl; // prints 100!

   return 0;
}