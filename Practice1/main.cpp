#include <iostream>
using namespace std;

// 修改 Multiply 函数返回 int 类型
int Multiply(int a, int b) {
    return a * b;  // 返回 a 和 b 的乘积
}
void MultiplyAndLog(int a , int b){
    int result = Multiply(a, b);
    cout<< result<<endl;
}
int main() {
    
    MultiplyAndLog(4, 5);
    return 0;
}
