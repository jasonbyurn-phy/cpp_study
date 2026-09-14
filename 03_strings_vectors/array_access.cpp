// count the number of grades by clusters of ten
unsigned scores[11] = {}; // 11 buckets, all value initialized to 0
unsigned grade;
while (cin >> grade) {
    if (grade <= 100)
    ++scores[grade/10]; // increment the counter for the current cluster
}

for (auto i : scores) // for each counter in scores
cout << i << " "; // print the value of that counter
cout << endl;

