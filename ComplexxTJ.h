#include <cmath>

typedef double real;
typedef double imaginary;

class complex {
    public :
    real r;
    imaginary i;
    complex () : r (0), i (0) {}
    complex (real in_r, imaginary in_i) : r (in_r), i (in_i) {}
    real size () const;
};