#include <string>
using std::string;
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

string s1; // default initialization; s1 is the empty string
string s2 = s1; // s2 is a copy of s1
string s3 = "hiya"; // s3 is a copy of the string literal
string s4(10, 'c'); // s4 is cccccccccc

string s5 = "hiya"; // copy initialization
string s6("hiya"); // directi initialization
string s7(10, 'c'); // directi initialization; s7 is cccccccccc
string s8 = string(10, 'c'); // copy initialization


int main()
{
    // string s; // empty string
    // cin >> s; // read a whitespace-separated string into s
    // cout << s << endl; // write s to the output
    // return 0;

    // string s1, s2;
    // cin >> s1 >> s2; // read first input into s1, second into s2
    // cout << s1 << s2 << endl; // write both strings
    // return 0;

    // string word;
    // while (cin >> word) // read until end-of-file
    // cout << word << endl; // write each word followd by a new line
    // return 0;

    string line;
    // read input a line at a time until end-of-file
    while (getline(cin, line))
    cout << line << endl;
return 0;
}