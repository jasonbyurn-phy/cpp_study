void swap(int &v1, int &v2)
{
    // if the values are already the same, no need to swap, just return
    if(v1 == v2)
    return;
    // if we're here, there's work to do
    int tmp = v2;
    v2 = v1;
    v1 = tmp;
    // no explicit retrn necessary
}


// incorrect return values, this code will not compile
bool str_subrange(const string &str1, const string &str2)
{
    // same sizes: return normal equality test
    if (str1.size() == str2.size())
    return str1 == str2; // ok: == returns bool
    // find the size of the smaller string; conditional operator
    auto size = (str1.size() < str2.size())
    ? str1.size() : str2.size();
    // look at each element up to the size of the smaller string
    for (decltype(size) i = 0; i != size; ++i) {
        if (str1[i] != str2[i])
        return; // error #1 no return value;
    }
    //error #2: control might flow off the end of the function without a return
    // the compiler might not detect this error
}

// return the plural version of word if ctr is greater than 1
string make_plural(size_t str, const string &word, const string &ending)
{
    return (str > 1) ? word + ending : word;
}

// calculate val!, which is 1*2*3*...*val
int factorial(int val)
{
    if (val > 1)
    return factorial(val-1) * val;
    return 1;
}