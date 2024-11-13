
#include <iostream>
using namespace std;
int main(){
    int n, year;
    cin >> year>>n;
    n -= 1;
    int days_ord[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    if ((year%400 == 0) || (year%4 == 0 && year % 100 != 0)){
        days_ord[1] = 29;
    }
    cout<< days_ord[n]<<endl;
}
