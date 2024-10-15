/*
 description: 输入一个年份，判断这一年是否是闰年，if yes, output 1, or 0.
 */

#include <iostream>
using namespace std;

int main(){
    int year = 0;
    cin>>year;
    cout<<((year%400 == 0)?"1":(year%4 == 0 && year % 100 != 0)? "1":"0")<<endl;
    
    
    
}
