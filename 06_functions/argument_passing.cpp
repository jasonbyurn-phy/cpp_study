#include <string>


int n = 0, i = 42;
int *p = &n, *q = *i; // p points to n; q points to i
*p = 42; // value in n is changed; p is unchanged
p = q; // p now points to i; values in i and n are unchanged

// function that takes a pointer and sets the pointed-to valued to zero
void reset(int *ip)
{
    *ip = 0; // changes the value of the obfect to which ip points
    ip = 0; // changes only the local copy of ip; the argement is unchanged
}

int n = 0, i = 42;
int &r = n; // r is bound to n (i.e. r is another name for n)
r = 42; // n is now 42
r = i; // n now has the same values as i
i = r; // i has the same values as n

// function that takes a reference to an int and sets the given object to zero
void reset(int &i)  // i is just another name for the object passed to reset
{
    i = 0; // changes the value of the object to which i refers
}

int j = 42;
reset(j); // j is passed by reference; the value in j is changed
cout << "j  = " << j << endl; // prints j = 0

// compare the length of two strings
bool isShoter(const string &s1, const string &s2)
{
    return s1.size() < s2.size()
}

// returns the index of the first occurrence of c in s
// the reference parameter occurs counts how often c occurs
string::size_type find_char(const string &s, char c, string::size_type &occurs)
{
    auto ret = s.size(); // position of the first occurrence, if any
    occurs = 0; // set the occurrence count parameter
    for (decltype(ret) i = 0; i != s.size(); ++i){
        if (s[i] == c) {
            if (ret == s.size())
            ret = i; // remember the first occurence of c
            ++occurs; // increment the occurrence count
        }
    }
    return ret; // count is returned implicitly in occurs
}

const int ci = 42; // we cannot change ci; const is top-level
int i = ci; // ok: when we copy ci, its top-level const is ignored
int * const p = &i; // const is top-level: we can't assign to p
*p = 0; // ok: changes through p are allowed: i is now 0

int i = 42;
const int *cp = &i; // ok: but cp can't change i
const int &r = i; // ok: but r cant't change i
const int &r2 = 42; // ok:
int *p = cp; // error: types of p and cp don't match
int &r3 = r; // error: types of r3 and r don't match
int &r4 = 42; // error: can't initialize a plain reference from a literal

int i = 0;
const int ci = i;
string::size_type ctr = 0;
reset(&i); // calls the version of reset that has an int* parameter
reset(&ci); // error: can't initialize an int* from a pointer to a const int object
reset(i); // calls the version of reset that has an int& parameter
reset(ci); // error: can't bind a planin reference to the const object ci
reset(42); // error: can't bind a plain reference to a literal
reset(ctr); // error:types don't match; ctr has an unsigned type
// ok: find_char's first parameter is a reference to const
find_char("Hellow World!", 'o', ctr);

