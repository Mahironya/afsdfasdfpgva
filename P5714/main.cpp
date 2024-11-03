#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int mass;
    float height,bmi;
    cin>> mass>> height;
    bmi = mass/pow(height, 2);
    if (bmi < 18.5) {
        cout << "Underweight" << endl;
    } else if (bmi >= 18.5 && bmi < 24) {
        cout << "Normal" << endl;
    } else {
        cout << bmi << endl;  // 默认精度
        cout << "Overweight" << endl;
    }
}
