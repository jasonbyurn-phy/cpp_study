#include <string>
#include <iostream>

using std::string
using std::cout
using std::cin

int main()
{
// string str("some string");
// //print the characters in str one character to a line
// for (auto c : str) // for every char in str
// std::cout << c << std::endl; // print the current character followed by a newline

string s("Hello World!!!!");
decltype(s.size()) punct_cnt = 0; // count the number of punctuation characters in s
for (auto c : s) // for every char in s
if (ispunct(c)) // if the charater is punctuation
++punct_cnt;
cout << punct_cnt << " punctuation characters in " << s << endl;

return 0;
}