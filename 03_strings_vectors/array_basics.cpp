unsinged cnt = 42; // not a constant expression
constexpr unsigned sz = 42; 42; // constant expression
int arr[10]; // array of ten ints
int *parr[sz]; // aray of 42 pointers to int
string bad[cnt]; // error: cnt is not a constant expression
string strs[get_size()]; // ok if get_size is constexpr, error otherwise

const unsigned sz = 3;
int ia1[sz] = {0,1,2}; // array of three ints with values 0, 1, 2
int a2[] = {0,1,2}; // an array of dimension 3
int a3[5] = {0, 1, 2} // equivalent to a3[] = {0, 1, 2, 0, 0}
string a4[3] = {"hi", "bye"}; // same as a3[] = {"hi", "bye" ,""}
int a5[2] = {0, 1, 2}; // error: too many initializers

