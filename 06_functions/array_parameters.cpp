// despite appearances, these three declarations of print are equivalent
// each funcion has a single parameter of type const int*
void print(const int*);
void print(const int[]); // shows the intent that the function takes an array
void print(const int[10]); // dimension for documentation purposes(at best)

int i = 0, j[2] = {0, 1};
print(&i); // ok: &i is int*
print(j); // ok: j is converted to an int* that points to j[0]

void print(const char *cp)
{
    if (cp) // if cp is not a null pointer
    while(*cp) // so long as the character it points to is not a null character
    cout << *cp++; // print the character and advance the pointer
}

