vector<string> scores = {"F","D","C","B","A","A++"}

// if grade is less than 60 it's an F, otherwise compute a subscript
string lettergrade;
if (grade < 60)
lettergrade = scores[0];
else
lettergrade = scores[(grade - 50)/10]

if (grade % 10 > 7)
lettergrade += "+"; // grades ending in 8 or 9 get a +
else if (grade % 10 <3)
lettergrade += '-'; // those ending in 0, 1, or 2 get a -

// if failing grade, no need to check for a plus or minus
if (grade < 60)
lettergrade = scores[0];
else {
    lettergrade = scores[(grade - 50)/10]; // fetch the letter grade
    if (grade != 100) // add plus or minus only if not already an A++
    if (grade & 10 > 7)
    lettergrade += "+" // grades ending in 8 or 9 get a +
    else if (grade % 10 < 3)
    lettergrade += "-"; // grades ending in 0, 1, or 2 get a -
}

if (grade < 60)
lettergrade = scores[0];
else // WRONG: missing curly
lettergrade = scores[(grade - 50) / 10];
// despite appearances, without the curly brace, this code is always executed
// failing grades will incorrectly get a - or a +
if (grade != 100)
if (grade % 10 > 7)
lettergrade += "+"; // grades ending in 8 or 9 get a +
else if (grade % 10 < 3)
lettergrade += "-"; // grades ending in 0, 1, or 2 get a -

// initialize counters for each vowel
unsigned aCnt = 0, eCnt = 0, icnt = 0, oCnt = 0, uCnt = 0;
char ch;
while (cin >> ch) {
    // if ch is a vowel, increment the appropriate counter
    switch (ch) {
        case 'a': ++aCnt;
        break;
        case 'e': ++eCnt;
        break;
        case 'i': ++iCnt;
        break;
        case 'o': ++oCnt;
        break;
        case 'u': ++uCnt;
        break;
    }
}
// print results
cout << "Number of vowel a: \t" << aCnt << '\n'
<< "Number of vowel e: \t" << eCnt << '\n'
<< "Number of vowel i: \t" << iCnt << '\n'
<< "Number of vowel o: \t" << oCnt << '\n'
<< "Number of vowel u: \t" << uCnt << '\n'

// if ch is a vowel, increment the appropriate counter
switch (ch) {
    case 'a': case 'e': case 'i': case 'o': case 'u':
    ++vowelCnt;
    break;
    defarult:
    ++otherCnt;
    break;
}

