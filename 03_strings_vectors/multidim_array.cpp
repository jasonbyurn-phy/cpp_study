#include <iostream>
#include <vector>
#include <string>

int ia[3][4]; // array of size 3; each element is an array of ints of size 4
// array of size 10; ezch element is a 20-element array whose elements are arrays of 30 ints
int arr [10][20][30] = {0}; // initialize all elements to 0

int ia[3][4] = { // three elements; each element is an array of size 4
{0, 1, 2, 3}, // initializers for the row indexed by 0
{4, 5, 6, 7}, // initializers for the row indexed by 1
{8, 9, 10, 11} // initializers for the row indexed by 2
};
// equivalent initialization whithout the optional nested braces for each row
int ia[3][4] = {0,1,2,3,4,5,6,7,8,9,10,11};
int ia[3][4] = {{ 0 }, { 4 }, { 8 }};
//explicitly initialize row 0; the remaining elements are value initialized
int ix[3][4] = {0, 3, 6, 9};

// assigns the first element of arr to the last element in the last row of ia
ia[2][3] = arr[0][0][0];
int (&row)[4] = ia[1]; // binds row to the second four-element array in ia

constexpr size_t rowCnt = 3, colCnt = 4;
int ia[rowCnt][colCnt]; // 12 uninitialized elements
// for each row
for (size_t i = 0; i != rowCnt; ++i) {
// for each column within the row
for (size_t j = 0; j != colCnt; ++j) {
    // assign the element's positional index as its value
    ia[i][j] = i * colCnt + j;
}
}

size_t cnt = 0;
for (auto &row : ia) // for every element in the outer array
for (auto &col : row) { // for every element in the inner array
col = cnt ; // give this element the next value
++cnt; // increment cnt
}


