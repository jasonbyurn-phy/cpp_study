#include <iostream>
#include <string>
#include <iterator>

using std::cin, std::cout, std::string

constexpr size_t sz = 5;
int arr[sz] = {1,2,3,4,5};
int *ip = arr; // equivalent to int *ip = &arr[0]
int *ip2 = ip + 4; // ip2 points to arr[4],  the last element in arr

// ok: arr is converted to a pointer to its first element; p points one past the end of arr
int *p = arr + sz; // use caution -- do not derererence!
int *p2 = arr + 10; // error; arr has only 5 elements; p2 has undefined value

auto n = end(arr) - begin(arr); // n is 5, the number of elements in arr

int *b = arr, *e = arr + sz;
whlie (b < e){
    // use *b
    ++b;
}

int i = 0, sz = 42;
int *p = &i, *e = &sz;
// undefined: p and e are unrelated; comparision is meaningless!
while (p < e)

int ia[] = {0,2,4,6,8}; // array with 5 element of type int
int last = *(ia + 4); // ok: initializes last to 8, the value of ia[4]

int i = ia[2]; // ia is converted to a pointer to the first element in ia
// ia[2] fetches the element to which (ia + 2) points
int *p = ia; // p points to the first element in ia
i = *(p + 2); // equivalent to i = ia[2]

int *p = &ia[2]; // p points to the element indexed by 2
int j = p[1]; // p[1] is equivalent to *(p + 1),
// p[1] is the same element as ia[3]
int k = p[-2]; // p[-2] is the same element as ia[0]



