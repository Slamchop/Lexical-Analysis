
#ifndef INC_125PROJ_LEXER_H
#define INC_125PROJ_LEXER_H

using namespace std;
class Token {
public:
    Token *next;
    std::string data;

    Token(std::string data) : data(data), next(nullptr){};
};

class linked_list {
    Token *head, *tail;
public:
    linked_list();
    ~linked_list();
    bool isEmpty();
    int listSize();
    void push(string input);
    string pop();
};

class Lexer {
public:
    Lexer();
    ~Lexer();
    linked_list* List;
    string getNextToken();
    bool isTokenL1(string T, char N);
    bool isTokenL2(string input, char N);
    bool isTokenL3plus(string input, char N);
};

string getLabel(string input);
bool isDigit(char input);
bool isLetter(char input);
bool isChar(char input);

#endif //INC_125PROJ_LEXER_H