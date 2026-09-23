int i, j;
double slope = i/j;
// cast used to force floating-point division
double slopt = static_cast<double>(j) / i;
void* p = &d; // ok:address of any nonconsnt object can be stored in a void*
// ok: converts void* back to the original poitner type
double *dp = static_cast<double*>(p);

const char *pc;
char *p = const_cast<char*>(pc); // ok: but writing throughh p is undifined
const char *cp;
// error: static_cast can'T cast away const
char *q = static_cast<char*>(cp);
static_cast<string>(cp); // ok: converts string literal to string
const_cast<string>(cp); // error: const_cast only changes constness

int *ip;
char *pc = reinterpret_cast<char*>(ip);

string str(pc);

char *pc = (char*) ip; // ip is a pointer to int

