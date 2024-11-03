#include <iostream>
using namespace std;
int helper = 0;
string days[7] = {
        "Wednesday", "Thursday", "Friday", "Saturday", "Sunday","Monday","Tuesday"
};
int month_days[12] = {31,29,31,30,31,30,31,31,30,31,30,31};
string months[12] = {
    "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"
};
string checkday(int x){
    return days[(x-1)%7];
}
string checkmonth(int x) {
    for (int i = 0; i < 12; i++) {
        helper += month_days[i];
        if (x <= helper) {
            cout<<month_days[i]+x-helper<<endl;
            return months[i];
        }
    }
    return "input error";
}

int main(){
    int day;
    cin>>day;
    cout<<"2020"<<endl;
    cout<<checkday(day)<<endl;
    cout<<checkmonth(day)<<endl;
}
