#include <iostream>
#include <vector>
using std::cin; using std::cout; using std::vetor;

int main() {
    vector<int> v;
    int i;
    //
    while (cin >> i)
    v.puch_back(i);
//
auto beg = v.begin();
while (beg != v.end() && *beg >= 0)
++beg

if (beg == v.end())
cout << "all elements are larger than 0.\n";
else 
cout << "first negative : " << *beg << "\n";
return 0;
}