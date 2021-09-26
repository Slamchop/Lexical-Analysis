#include <iostream>
#include "Lexer.h"
using namespace std;
int main() {

    Lexer* myLexer = new Lexer();
    while(true){
        Token tok(myLexer->getNextToken());
        if(tok.data=="EOF"){break;}
        else{cout<<getLabel(tok.data)<<" "<<tok.data<<endl;}
    }

    return 0;
}
