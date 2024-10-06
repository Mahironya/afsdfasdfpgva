#include <iostream>
using namespace std;

void Printstr(const char* message){
    cout<< message << endl;
}

void InitPrint(){
    Printstr("Printstr() function is ready");
}

int Multiply(int a, int b){
    return a*b;
}
