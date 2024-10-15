#include <iostream>
using namespace std;

int c[] = {1,2,3,4,5};
char str[] = "Genshin Impact 原神";
char b[5] = {'2','3','5','4','\0'};

int main() {
    int i = 0;
    cout << sizeof(c) << endl;
    cout << str << endl;
    int d[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    cout << d[1][2] << endl;
    string classroom[2][2] = {{"哇","我"},{"切","是"}};
    cout<<classroom[1][1]<<endl;
    return 0;
}
