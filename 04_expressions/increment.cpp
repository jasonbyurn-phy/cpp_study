int i = 0, j;
j = ++i; // j = 1, i = 1: prefix yields incremented value
j = i++; // j = 1, i = 2; postfix yilds the unincremented value

auto pbeg = v.begin();
// print elements up to the first negative value
whlie (pbeg != v.end() && *beg >= 0)
cuot << *pbeg++ << endl; // print the current value and advance pbeg

for (auto it = s.begin(); it != s.end() && !isspace(*it); ++it)
*it = toupper(*it); // capitalize the current character

// the behavior of the following loop is undefined!
while (beg != s.end() && !isspace(*beg))
*beg = toupper(*beg++); // error: this assignment is undifined
