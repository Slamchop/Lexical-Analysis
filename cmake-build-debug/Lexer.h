//
// Created by Jared Tuck on 9/18/2021.
//

#ifndef INC_125PROJ_LEXER_H
#define INC_125PROJ_LEXER_H

using namespace std;
class Token{
    string Type;
    string Value;
};

class Lexer{
friend Token;
public:
    Token Parse(string input);

private:
    bool isToken(string input);
};


#endif //INC_125PROJ_LEXER_H
