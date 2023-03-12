#include "pangram.h"
using namespace std;

namespace pangram {
    bool is_pangram(string str) {
        int alphabet[26] = {0};
        for (int i = 0; i < (int) str.length(); i++) {
            char current_chr = str[i]; 
            if (isalpha(current_chr)) {
                current_chr = tolower(str[i]);
                str[i] = current_chr;
                alphabet[current_chr - 'a'] = 1;
            }
        }
        int check[26] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 };
        for (int i = 0; i < 26; i++) {
            if (alphabet[i] != check[i]) {
                return false;
            }
        }
        return true;
    }
}  // namespace pangram
