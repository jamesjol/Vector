#include "pch.h"
#include <iostream>
#include "Vec.h"
int main(int num_args, char** args) {
    double3 a{ 0,1,2 };
    double3 b{ 0,0,1 };
    /**
    * Solves c = a - b
    * @param a vector
    * @param b vector to be subtracted
    \f[
      \vec{a} - \vec{b} = \vec{c}
      \f]*/
    std::cout << a - b << std::endl;
    /**
    * Takes the dot product of two vectors
    * @param a vector
    * @param b vector
    * @param c vector
     \f[
      \vec{a} \cdot \vec{b} = \vec{c}
      \f]*/
    std::cout << dot(a, b) << std::endl;
    return 0;
}