#include <iostream>
// using declaration; when we use the name cin, we get the one from the namespace std
using std::cin;
// int main()
// {
//     int i;
//     cin >> i; // ok : cin is a synonym for std::cin
//     cout << i; // error : no using declaration; we must use the full name
//     std::cout << i; // ok : explicitly use cout from namespace std
//     return 0;
// }
using std::cout; using std::endl;
int main()
{
    cout << "Enter two numbers: " << endl;
    int v1, v2;
    cin >> v1 >> v2;
    cout << "The sum of " << v1 << " and " << v2
    << " is " << v1 + v2 << endl;
    return 0;
}