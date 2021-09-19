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
                if(T.length()==1){
                    if(isTokenL1){Token temp(T,T); return temp;}
                }
                if(T.length()==2){
                    if(isTokenL2(T)){Token temp(T,T); return temp;}
                }

            }
        }
        i=j;
    }


}

bool isTokenL1(string input){
    if(T>39 && T<44){return true;}
    if(T==45||T==47||T==59||T==123||T==125)
    {return true;}
    return false;
}
bool isTokenL2(string input){
//Needs to account for any single letter followed by a white space or character. Is ID.
//Needs to account for checking if "=" or "!=, >=,<=" by checking both pos.

}
bool isTokenL3plus(string input){
}