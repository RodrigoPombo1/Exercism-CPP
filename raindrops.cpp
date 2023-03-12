#include "raindrops.h"
using namespace std;

namespace raindrops {
    string convert(int number) {
        string res = "";
        bool flag = false;
        if (number % 3 == 0) {
            res += "Pling";
            flag = true;
        }
        if (number % 5 == 0) {
            res += "Plang";
            flag = true;
        }
        if (number % 7 == 0) {
            res += "Plong";
            flag = true;
        }
        if (!flag) {
            res = to_string(number);
        }
        return res;
    }
}  // namespace raindrops
