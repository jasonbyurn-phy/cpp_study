while (int i = get_num()) // i is created and initialized on each iteration
cout << i << endl;
i = 0; // error: i is not accessible outside the loop

// find the first negative element
auto beg = v.begin();
while (beg != v.end() && *beg >= 0)
++beg;
if (beg == v.end())
// we know that all elements in v are greater than or equal to zero

