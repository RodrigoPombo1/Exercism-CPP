#if !defined(TRIANGLE_H)
#define TRIANGLE_H
#include <stdexcept>

namespace triangle {
    enum flavor { isosceles, equilateral, scalene };
    flavor kind(double a, double b, double c);
}  // namespace triangle

#endif // TRIANGLE_H