#include <iostream>
#include "tokenizer/Token.h"

int main() {
    std::istream::sync_with_stdio(false);
    std::cin.tie(0);

    bool run = true;
    std::string line;
    Token input;
    std::vector<std::string> tokens;
    while (run) {
        std::getline(std::cin, line);
        if (line == "quit()") {
            run = false;
        } else {
            tokens = input.tokenizeString(line);

        }
    }

    return 0;
}
