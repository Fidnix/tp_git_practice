#include <iostream>
#include <iomanip>
#include <fstream>

#include "../transpiler/transpiler.h"
using namespace std;

void main_menu_print(){
    archLectura logoFile("./src/main_display/logo.txt", ios::in);
    if(!logoFile.is_open()){
        escribir << "Error: El logo no se abrió" << endl;
        exit(1);
    }

    char line[180];
    while(1){
        logoFile.getline(line, 180);
        if(logoFile.eof()) break;

        escribir << line << finL;
    }
}