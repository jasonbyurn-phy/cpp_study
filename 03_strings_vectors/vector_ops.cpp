#include <vector>
#include <iotream>
#include <string>
using std::vector
using std::string

vector<int> v{1,2,3,4,5,6,7,8,9};
for (auto &i : v) // for each element in v(note : i is a reference)
i *= i ; // square the element value
for (auto i : v) // for each element in v
std::cout << i << " ";//print the element
std::cout << endl;

// count the number of grades by clusters of ten : 0--9, 10--19,... 90--99,100
vector<unsigned> scores(11,0); // 11 buckets, all initially 0
unsigned grade;
while (cin > grade) { // read the grades
    if (grade <= 100) // handle only valid grades
++scores[grade/10]; // increment the counter for the current cluster
}

