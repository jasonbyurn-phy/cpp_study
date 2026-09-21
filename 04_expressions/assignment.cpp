int i = 0, j = 0, k = 0; // initializations, not assignment
const int ci = i; // initialization, not assignment

1024 = k; // error: literals are rvalues
i + j = k; // error: arithmetic expressiosn are rvalues
ci = k; // error: ci is a const (nonmdifiable) lvalue

k = 0; // result: type int, value 0
k = 3.14159; // result: type int, value 3

k = {3.14}; // error: narrowing conversion
vector<int> vi; // initially empty
vi = {0,1,2,3,4,5,6,7,8,9}; // vi now has ten elements, values 0 through 9

int ival, jval;
ival = jval = 0; // ok: each assigned 0

int ival, *pval; // ival is an int; pval is a pointer to int
ival = pval = 0; // error: cannot assign the value of a pointer to an int
string s1, s2;
s1 = s2 = "OK"; // string literal "OK" converted to string

// a verbose and therefore more error-prone way to write this loop
int i = get_value(); // get the first value
while (i != 42) {
    // do something...
    i = get_value(); // get remaining values
}

int i;
// a better way to write our loop--what the condition does is now clearer
while ((i = get_value()) != 42){

}

int sum = 0;
// sum values from 1 through 10 inclusive
for (int val = 1; val <= 10; ++val)
sum += val; // equivalent to sum = sum + val
