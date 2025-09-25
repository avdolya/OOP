#include <iostream>
#include "closest_pair_tonum.h"  

int main()
{
   int upper_limit;
   std::cin >> upper_limit;
   std::pair<int, int> result = closest_pair_tonum(upper_limit);
   std::cout << "(" << result.first << ", " << result.second << ")" << std::endl;
}