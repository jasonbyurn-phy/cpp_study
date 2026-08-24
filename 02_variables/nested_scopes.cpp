#include <iostream>
// Program for illustration purposes only : It is bad style for a function
// to use a global variable and also define a local variable with the same name
int reused = 42; // reused has block scope
int main ()
{
    int unique = 0; // unique has block scope
    // output #1 : uses global reused; prints 42 0
    std::cout << reused << " " << unique << std::endl;
    // output #2 : uses local reused; print 0 0
    int reused = 0; // new, local object named reused hides global reused
    std::cout << reused << " " << unique << std::endl;
    // output #3 : explicitly requests the global reused; prints 42 0
    std::cout << ::reused << " " << unique << std::endl;
    return 0;
}