#include "grains.h"
using namespace std;

namespace grains {
    unsigned long long square(int n_square) {
        unsigned long long res = pow(2, n_square - 1);
        return res;
    } 
    unsigned long long total() {
        unsigned long long res = 0LL;
        for (int i = 1; i <= 64; i++) {
            res += square(i);
        }
        return res;
    }
}  // namespace grains
