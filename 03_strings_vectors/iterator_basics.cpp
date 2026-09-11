#include <vector>
#include <iotream>
#include <string>
using std::vector
using std::string
using std::cin
using std::cout

// the compiler determines the type of b and e;
// b denotes the first element and e denotes one past the last element in v
auto b = v.begin(), e = v.end(); // b and e have the same type

string s("some string");
if (s.begin() != s.end()) { // make sure s is not empty
    auto it = s.begin(); // it denotes the first character in s
    *it = toupper(*it); // make that character uppercase
}

// process characters in s until we run out of characters or we hit a whitespace
for (auto it = s.begin(); it != s.end() && !isspace(*it); ++it)
*it = toupper(*it); // capitalize the current character

vector<int>::iterator it; // it can read and write vector<int> elements
string::iterator it2; // it2 can read and write characters in a string
vector<int>;;const_iterator it3; // it3 can read but not write elements
string::const_iterator it4; // it4 can read but not write characters

vector<int> v;
const vector<int> cv;
auto it1 = v.begin(); // it1 has type vector<int>::iterator
auto it2 = cv.begin(); // it2 has type vector<int>::const_iterator

auto it3 = v.cbegin(); // it3 has type vector<int>::const_iterator

(*it).empty() // dereferences it and calls the member impty on the resulting object
*it.empty() // error : attempts to fetch the member named empty from it
// but it is an iterator and has no member named empty

// print each line in text up to the first blank line
for (auto it = text.cbegin();
it != text.cend() && !it->empty(); ++it)
cout << *it << endl;

