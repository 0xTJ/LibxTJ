#include "ComplexxTJ.h"

real complex::size () const {
    return (real) std::sqrt (std::pow (this->r, 2) + std::pow (this->r, 2));
}