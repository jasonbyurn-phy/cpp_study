string finalgrade = (grade < 60) ? "fail" : "pass";
// condition ? exp1 : exp2

finalgrade = (grade > 90) ? "high pass"
: (grade < 60) ? "fail" : "pass";

cout << ((grade < 60) ? "fail" : "pass"); // prints pass or fail
cout << (grade < 60) ? "faile" : "pass"; // prints 1 or 0 !
cout << grade < 60 ? "fail" : "pass"; // error; compares cout to 60

cout << (grade < 60); // prints 1 or 0
cout ? "fail" : "pass"; // test cout and then yield one of the two literals
// depending on whether cout is true or false

cout << grade; // less-than has lower preceence than shift, so print grade first
cout < 60 ? "fail" : "pass"; // then compare cout to 60!


