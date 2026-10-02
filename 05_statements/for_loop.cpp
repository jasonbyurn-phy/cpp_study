for (decltype(s.size()) index = 0;
index != s.size() && !isspace(s[index]);
++index)
s[index] = toupper(s[index]);

for (int i = 0, i != 10; ++i) { /* ... */}
// i can't be used in this for loop

// copy element of v and paste before v
for (decltype(v.size()) i = 0, sz = v.size(); i != sz; ++i)
v.puch_back(v[i]);

int i = 0, *p = &i; // ok: basic type int ( p is int* )
// error : int i = 0, double d = 0;

auto beg = v.begin();
for ( /* null */; beg != v.end() && *beg >= 0; ++beg)
; // null statement

for (int i = 0; /* null condition */; ++i) {
    for (i == 5) berak;
}

vector<int> v;
for (int i; cin >> i ; /* null expression */)
v.puch_back(i);

