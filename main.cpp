#include <iostream>
#include <fstream>
#include "Lexer.h"
using namespace std;
int main() {
    string fileName, input;
    cout<<"Please enter the .txt file you'd like to parse"<<endl;
    cin>>fileName;
    ifstream myFile;
    myFile.open(fileName);
    if(myFile.is_open()) {
        while (getline(myFile, input)) {

            int length = input.length();
            for (int i = 0; i < length; i++) {
                if (input[i] != 32) {
                    string T = "";
                    char N;
                    for (int j = i; j < length; j++) {
                        if(i< length-1){N=input[j+1];}else{N=32;}
                        T = T + input[j];
                        if (T.length() == 1) {
                            if (isTokenL1(T,N)) {

                            }
                        }
                        if (T.length() == 2) {
                            if (isTokenL2(T,N)) {

                            }
                        }
                        i = j;
                    }
                }
            }
        }
    }
    myFile.close();
    /*       Lexer mylexer = new Lexer();
           while(true) {
               Token tok = mylexer.getNextToken();
               if(tok == null) { // print error message break;   }
                   // else if (tok.tag == EOF) { break;   }
                   // else { // print token name and value
                   // (if your token doesn’t have a name, add logic to print value twice)
                    }
                }*/
    return 0;
}
