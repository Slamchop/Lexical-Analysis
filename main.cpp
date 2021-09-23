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
                    char N;//Character of Next space following potential Token
                    for (int j = i; j < length; j++) {
                        if(j< length-1){N=input[j+1];}else{N=32;}
                        T = T + input[j];
                        if (T.length() == 1) {
                            if (isTokenL1(T,N)) {cout<<getLabel(T)<<" "<<T<<endl;}
                        }
                        if (T.length() == 2) {
                            if (isTokenL2(T,N)) {cout<<getLabel(T)<<" "<<T<<endl;}
                        }
                        if(T.length()>2){
                            if(isTokenL3plus(T,N)){cout<<getLabel(T)<<" "<<T<<endl;}
                        }
                        i = j;
                    }
                }
            }
        }
    }
    myFile.close();
    return 0;
}
