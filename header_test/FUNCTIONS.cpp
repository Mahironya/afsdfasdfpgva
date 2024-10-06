#include <iostream>
#include "Log.hpp"
using namespace std;
int Multiply(int a, int b){
    return a*b;
}

void Printstr(const char* message){
    cout<< message << endl;
}

void InitPrint(){
    Printstr("Printstr() function is ready");
}

