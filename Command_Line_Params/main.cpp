#include <iostream>
#include <fstream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main(int argc, char* argv[]){
    char* filename;
    for(int i = 0; i < argc; i++){
        if(strcmp(argv[i],"--help") == 0){
            cout << "Usage: test    [options] file..." << endl;
            cout << "Options:"  << endl;
            cout << "-f <file>    Provide filename for writing." << endl;
            return 0;
        }

        if(strcmp(argv[i],"-f") == 0){
            if(i + 1 < argc){
                filename = argv[i + 1];
            } else {
                cout << "No filename provided!" << endl;
                return 0;
            }
        }
    }

    ofstream outFile;
    outFile.open(filename);

    outFile << "Goodbye World!" << endl;
    outFile << "It's been real." << endl;
    outFile << "I wish I could have been tenured." << endl;

    outFile.close();

    return 0;
}