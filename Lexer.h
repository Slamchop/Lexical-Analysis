//
// Created by Jared Tuck on 9/18/2021.
//

#ifndef INC_125PROJ_LEXER_H
#define INC_125PROJ_LEXER_H

using namespace std;

class Token {
public:
    Token(string V1, string V2) {
        Type = V1;
        Value = V2;
    }

    string Type;
    string Value;
};
    string getLabel(string input);

    bool isTokenL1(string T, char N);

    bool isTokenL2(string input, char N);

    bool isToken3plus(string input, char N);

    bool isDigit(char input);

    bool isLetter(char input);



#endif //INC_125PROJ_LEXER_H