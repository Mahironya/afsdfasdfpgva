/*
 一些整数可能拥有以下的性质：

 性质 1：是偶数；
 性质 2：大于4 且不大于12
 小 A 喜欢这两个性质同时成立的整数；Uim 喜欢这至少符合其中一种性质的整数；小 B 喜欢刚好有符合其中一个性质的整数；正妹喜欢不符合这两个性质的整数。现在给出一个整数
 x
 x，请问他们是否喜欢这个整数？

 */

#include <iostream>
using namespace std;

int main(){
    int x = 0;
    cin >>x;
    bool a,b;
    a = (x%2 == 0)? true:false;
    b = (x>4 && x<= 12)? true:false;
    int m,n,p,q;
    m = (a == true && b == true)? 1:0;
    n = (a == true || b == true)? 1:0;
    p = (a == true ^ b == true)? 1:0;
    q = (a == false && b == false)? 1:0;
    cout<<m<<" "<<n<<" "<<p<<" "<<q<<endl;
    
}







