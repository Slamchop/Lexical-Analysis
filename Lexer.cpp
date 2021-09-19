#include <iostream>
#include "Lexer.h"
using namespace std;

Token Lexer::Parse(string input){
    int length  = input.length();
    for(int i=0;i<length;i++){
        if(input[i]!= 32){
            string T = "";
            for(int j=i;j<length;j++){
                T = T+input[j];
                if(T.length()==1){}
                if(T.length()==2){}

            }
        }
    }


}
bool isToken(string input){}
