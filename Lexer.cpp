#include <iostream>
#include "Lexer.h"

using namespace std;

string getLabel(string input){
    string C[] = {"(",")","*","+","-","/",";","{","}","<","=",">"};
    string E[][2] = {{"&&","AND"},{"==","EQ"},{">=","GE"},{"<=","LE"},{"!=","NE"},{"||","OR"},
            {"if","IF"},{"do","DO"},{"for","FOR"},{"true","TRUE"},{"else","ELSE"},{"false","FALSE"},
            {"while","WHILE"},{"break","BREAK"}, {"int","BASE_TYPE"}, {"float","BASE_TYPE"}
            ,{"bool"},{"BASE_TYPE"}};
    for(int i=0;i<12;i++) { if (input == C[i]) { return C[i]; }}

    for (int i = 0; i < 14; i++) { if(input == E[i][0]){ return E[i][1]; } }

    if (isLetter(input[0])) { return "ID"; }

    if(isDigit(input[0]||input[0]==46)){
        for(int i=0; i<input.length();i++)
        { if(input[i]==46){return"REAL";}}
        return"NUM";
    }
    if(isLetter(input[0])){return "ID";}
    return "ERROR";
}
bool isDigit(char input) {
    if(input>47 && input <58){return true;}
    return false;
}

bool isLetter(char input){
    if(input>64 && input<91){return true;}
    if(input>97 && input<123){return true;}
    return false;
};

bool isTokenL1(string T, string N) {
if(T[0]>39 && T[0]<44){return true;}
if(T[0]==45||T[0]==47||T[0]==59||T[0]==123||T[0]==125)
{return true;}
return false;
}

bool isTokenL2(string input) {
//Needs to account for any single letter followed by a white space or character. Is ID.
//Needs to account for checking if "=" or "!=, >=,<=" by checking both pos.
if(input=="!="||input=="<="||input==">="||input=="&&"||input=="||"){return true;}
if(input[1]==61){return true;}
return false;
}

bool isTokenL3plus(string input) {
    return false;
}