#include <iostream>

int i, &ri = i;
i = 5; ri = 10;
std::cout << i << " " << ri << std::endl;
// int i; &ri = i;
// i = 5; ri = 10;
// std::cout << i << " " << ri << std::endl;
