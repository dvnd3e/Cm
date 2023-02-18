//
// Created by Dundee Zhang on 2023-02-18.
//

#include "Token.h"

std::vector<std::string> Token::tokenizeString(std::string line) {
    std::stringstream ss(line); //convert line into string stream

    std::vector<std::string> tokens;
    std::string temp_str;

    while(getline(ss, temp_str, ' ')){ //use comma as delim for cutting string
        tokens.push_back(temp_str);
    }

    return tokens;
}

std::vector<char> Token::typeOfInput(std::vector<std::string> tokens) {
    std::vector<char> types {};
    for(auto x: tokens) {
        try {
            double doubleToken = std::stod(x);
            types.push_back('n');
        } catch(std::string token) {
            if(x == "+") {
                types.push_back('+');
            } else if(x == "-") {
                types.push_back('-');
            } else if(x == "/") {
                types.push_back('/');
            } else if(x == "*") {
                types.push_back('*');
            } else if(x == "%") {
                types.push_back('%');
            } else {
                types.push_back('s');
            }
        }
    }
    return types;
}
