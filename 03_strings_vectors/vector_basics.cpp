#include <vector>
#include <string>
using std::vector;
using std::string;
// vector<int> ivec; // ivec holds objects of type int
// vector<Sales_item> Sales_vec; // holds Sales_items
// vector<vector<string>> file; // vector whoses elements are vectors

vector<string> svec; // default initialization; svec has no elements

vector<int> ivec; // initially empty
// give ivec some values
vector<int> ivec2(ivec); // copy elements of ivec into ivec2
vector<int> ivec3 = ivec; // copy elements of ivec into ivec3
vector<string> svec(ivec2); // error; svec holds strings, not ints

vector<string> articles = {"a", "an", "the"};

vector<string> v2("a", "an", "the"); // error

vector<int> ivec(10, -1); // ten int elements, each initialized to -1
vector<string> svec(10, "hi"); // ten strings, each elements is "hi"

