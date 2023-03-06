#include "reverse_string.h"

namespace reverse_string {
    string reverse_string(string str) {
        for (long unsigned i = 0; i < str.length() / 2; i++) {
            char aux = str[i];
            str[i] = str[str.length() - i - 1];
            str[str.length() - i - 1] = aux;
        }
        return str;
    }
}  // namespace reverse_string