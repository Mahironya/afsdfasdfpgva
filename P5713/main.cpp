#include <iostream>
using namespace std;
// 5x 3x+11
int pc(int x){
    return 5*x;
}
int luogu(int x){
    return 3*x +11;
}
int main(){
    int quantity = 0;
    cin>> quantity;
    cout<<((pc(quantity)>luogu(quantity))?"Luogu":"Local")<<endl;
    return 0;
}
