//
// Created by Dundee Zhang on 2023-02-18.
//

#ifndef CM_TOKEN_H
#define CM_TOKEN_H
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <typeinfo>


class Token {
public:
    std::vector<std::string> tokenizeString(std::string line);
    std::vector<char> typeOfInput(std::vector<std::string> tokens);
};


#endif //CM_TOKEN_H
