
#ifndef INC_125PROJ_LEXER_H
#define INC_125PROJ_LEXER_H

using namespace std;

string getLabel(string input);

bool isTokenL1(string T, char N);

bool isTokenL2(string input, char N);

bool isTokenL3plus(string input, char N);

bool isDigit(char input);

bool isLetter(char input);

bool isChar(char input);

#endif //INC_125PROJ_LEXER_H