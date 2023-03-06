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

#include <iostream>
using namespace std;

int main() {
    cout << ("nemaR" == reverse_string::reverse_string("Ramen")) << '\n';
    cout << ("tobor" == reverse_string::reverse_string("robot")) << '\n';
    cout << ("!yrgnuh m'I" == reverse_string::reverse_string("I'm hungry!")) << '\n';
    cout << ("racecar" == reverse_string::reverse_string("racecar")) << '\n';
    cout << ("" == reverse_string::reverse_string("")) << '\n';
    cout << ("\n" == reverse_string::reverse_string("\n")) << '\n';
    cout << ("\t" == reverse_string::reverse_string("\t")) << '\n';
    return 0;
}