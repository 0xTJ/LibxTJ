#include "ComplexxTJ.h"

double complex::size () const {
    return std::sqrt (std::pow ((double) this->r, 2) + std::pow ((double) this->i, 2));
}

real::operator double () const {
    return this->v;
}

imaginary::operator double () const {
    return this->v;
}