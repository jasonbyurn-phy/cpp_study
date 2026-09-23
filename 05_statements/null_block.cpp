ival + 5; // rather useless expression statement
cout << ival; // useful expression statement

; // null statement

// read until we hit end-of-file or find an input equal to sought
while (cin >> s && s != sought)
; // null statement

ival = v1 + v2;; // ok: second semicolon is a superfluous null statement

// disaster: extra semicolon: loop body is this null statement
while (iter != svec.end()) ; // the while body is the emty statement
++iter; // increment is not part of the loop

while (val <= 10) {
    sum += val; // assigns sum + val to sum
    ++val; // add 1 to val
}

while (cin >> s && s != sought)
{} // empty block

