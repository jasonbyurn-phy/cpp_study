#include <vector>
#include <string>
using std::vector
using std::string

vector<int> v2; // empty vector
for (int i = 0, i != 100, ++i)
v2.push_back(i); // append sequential integers to v2
// at end of loop v2 has 100 elements, valuds 0 ... 99

// read words form the standard input and store them as elements in a vector
string word;
vector<string> text; // empty vector
while (std::cin >> word) {
    text.puch_back(word); // append word to text
}

