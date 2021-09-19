//
// Created by Jared Tuck on 9/18/2021.
//

#ifndef INC_125PROJ_LEXER_H
#define INC_125PROJ_LEXER_H

using namespace std;
class Token{
    Token(string V1, string V2){Type = V1; Value = V2;}
    string Type;
    string Value;
};

class Lexer{
    friend Token;
public:
    Token Parse(string input);
    bool isTokenL1(string input);
    bool isTokenL2(string input);
};


#endif //INC_125PROJ_LEXER_H