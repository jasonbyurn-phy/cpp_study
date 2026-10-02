vector<int> v = {0,1,2,3,4};

for (auto x : v) // x is copy of element
x *= 2; // v isn't change

for (auto &r : v) // r is reference binding to element
r *= 2; // v is actually twice

for (const auto &s : vec_of_strings) // save copy cost and block edit
cout << s << '\n'

for (auto &r : v)
r *= 2
// equivalent with upper code
for (auto beg = v.begin(), end = v.end(); beg != end; ++beg) {
    auto &r = *beg;
    r *= 2
}

