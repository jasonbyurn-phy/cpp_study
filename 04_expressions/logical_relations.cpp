for (const auto &s : text) { // for each element in text
    cout << s; // print the current element
    // blank lines and those that end with a period get a newline
    if (s.empty() || s[s.size() - 1] == ".")
    cout << endl;
else
cout << " "; // otherwise just separate with a space
}

// print the first element in vec if there is one
if (!vec.empty())
cout << vec[0];

// opps! this condition compares k to the bool result of i < j
if (i < j < k) // true if k is greater than 1!

// ok: condition is true if i is smaller than j and j is smaller than k
if (i < j && j < k) { /*...*/}

if (val) { /*... */} // ture if val is any nonzero value
if (!val) { /*... */} // ture if val is zero
if (val == true) { /*... */} // true only if val is equal to 1!

