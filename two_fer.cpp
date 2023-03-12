#include "two_fer.h"
using namespace std;

namespace two_fer
{
    string two_fer(string str) {
        if (str.empty()) {
            return "One for you, one for me.";
        }
        return "One for " + str + ", one for me.";
    }
} // namespace two_fer
