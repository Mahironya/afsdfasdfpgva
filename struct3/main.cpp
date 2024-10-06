// main.cpp
#include <iostream>  // 引入 iostream 用于输出（可选）
using namespace std;

// 声明 Log 函数，告诉编译器在其他地方定义了这个函数
void Log(const char* message);

int main() {
    // 使用 Log 函数
    Log("Hello World");
    return 0;
}
