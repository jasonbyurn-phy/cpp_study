#include <iostream>
using std::cout; using std::endl;


// factorial of val is val * (val -1) * ...
int fact(int val)
{
    int ret = 1; // local variable to hold the result as we calculate it
 while (val > 1)
 ret *= val--; // assign ret * val to ret and decrement val
 return ret; // return the result
}

int main()
{
    int j = fact(5); // j equals 120. i.e., the result of fact(5)
    cout << "5! is " << j << endl;
    return 0;
}

fact("hellow"); // error: wrong argument type
fact(); // error: too few arguments
fact(42, 10, 0); // error:too many arguments
fact(3.14); // ok:argument is converted to int

void f1() { /* ... */} // implicit void parameter list
void f2(void) { /* ... */} // explicit void parameter list
int f3(int v1, v2) { /* ... */} // error
int f4(int v1, int v2) { /* ... */} // ok

size_t count_calls()
{
    static size_t ctr = 0; // value will persist across calls
    return ++ctr;
}
int main() {
    for (size_t i = 0; i != 10; ++i)
    cout << count_calls() << endl;
    return 0;
}

