#include <iostream>
using namespace std;
int main(){
    int lengths[10] = {0,0,0,0,0,0,0,0,0,0};
    cin>> lengths[0] >>lengths[1] >>lengths[2] >>lengths[3] >>lengths[4] >>lengths[5] >>lengths[6] >>lengths[7] >>lengths[8] >>lengths[9];
    int tallpass = 0, how_tall;
    cin>> how_tall;
    how_tall += 30;
    for (int i = 0; i<10; i++){
        if (how_tall >= lengths[i]){
            tallpass += 1;
        }
    }
    cout<<tallpass<<endl;
    
}
