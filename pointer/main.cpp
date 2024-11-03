#include <iostream>
using namespace std;
#define LOG(x) cout<<x<<endl
int main(){
    int var = 8;
    void* ptr = &var;
    cout<<ptr<<endl;
    LOG("asdfasdf");
    return 0;
}
