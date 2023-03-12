#include "triangle.h"

namespace triangle {
    flavor kind(double a, double b, double c) {
        if (a <= 0 || b <= 0 || c <= 0 || a > b + c || b > a + c || c > b + a) {
            throw std::domain_error("");
        }
        if (a == b && b == c) {
            return flavor::equilateral;
        }
        if (a == b || a == c || b == c) {
            return flavor::isosceles;
        }
        return flavor::scalene;
    }
}  // namespace triangle
