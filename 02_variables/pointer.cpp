#include <iostream>

// int *ip1, *ip2; // both ip1 and ip2 are pointer to int
// double dp, *dp2; // dp2 is a pointer to double; dp is a double

// int ival = 42;
// int *p = &ival; // p holds the address of ival; p is a pointer to ival

// double dval;
// double *pd = &dval; // ok : initializer is the adress of a double
// double *pd2 = pd; // ok : initializer is a pointer to double
// int *pi = pd; // error : types of pi and pd differ
// pi = &dval; // error : assinging the address of a double to a pointer to int

int ival = 42;
int *p = &ival; // p holds the address of ival; p is a pointer to ival
std::cout << *p << std::endl; // * yields the object to which p points; prints 42

*p = 0; // * yields the object; we assign a new value to ival through p
std::cout << *p << std::endl; // prints 0