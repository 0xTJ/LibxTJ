#include <cmath>
#include <iostream>

struct real {
    explicit real (double _v) : v (_v) {}
    explicit operator double () const;
private:
    double v;
};

struct imaginary {
    explicit imaginary (double _v) : v (_v) {}
    explicit operator double () const;
private:
    double v;
};

struct complex {
    real r;
    imaginary i;
    complex () : r (0), i (0) {}
    complex (double _r, double _i) : r (_r), i (_i) {}
    double size () const;
};