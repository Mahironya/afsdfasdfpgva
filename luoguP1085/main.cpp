/*
 
 # [NOIP2004 普及组] 不高兴的津津

 ## 题目描述

 津津上初中了。妈妈认为津津应该更加用功学习，所以津津除了上学之外，还要参加妈妈为她报名的各科复习班。另外每周妈妈还会送她去学习朗诵、舞蹈和钢琴。但是津津如果一天上课超过八个小时就会不高兴，而且上得越久就会越不高兴。假设津津不会因为其它事不高兴，并且她的不高兴不会持续到第二天。请你帮忙检查一下津津下周的日程安排，看看下周她会不会不高兴；如果会的话，哪天最不高兴。

 ## 输入格式

 输入包括 $7$ 行数据，分别表示周一到周日的日程安排。每行包括两个小于 $10$ 的非负整数，用空格隔开，分别表示津津在学校上课的时间和妈妈安排她上课的时间。

 ## 输出格式

 一个数字。如果不会不高兴则输出 $0$，如果会则输出最不高兴的是周几（用 $1, 2, 3, 4, 5, 6, 7$ 分别表示周一，周二，周三，周四，周五，周六，周日）。如果有两天或两天以上不高兴的程度相当，则输出时间最靠前的一天。

 ## 样例 #1

 ### 样例输入 #1

 ```
 5 3
 6 2
 7 2
 5 3
 5 4
 0 4
 0 6
 ```

 ### 样例输出 #1

 ```
 3
 ```

 ## 提示

 NOIP2004 普及组第 1 题

 - 2021-10-27：增加一组 hack 数据
 - 2022-06-05：又增加一组 hack 数据
 
 */

#include <iostream>
using namespace std;

int main() {
    int day_unhappy = 0; // 用来记录最不高兴的那天
    int max_unhappy_hours = 0; // 用来记录最不高兴的程度（即超出8小时的时间）
    
    // 遍历每一天的日程
    for (int i = 1; i <= 7; i++) {
        int school_hours, extra_hours;
        cin >> school_hours >> extra_hours;
        
        int total_hours = school_hours + extra_hours; // 每天总课程时间
        
        if (total_hours > 8) {
            int unhappy_hours = total_hours - 8; // 计算超出的时间
            
            // 如果当前这天更不高兴，更新记录
            if (unhappy_hours > max_unhappy_hours) {
                max_unhappy_hours = unhappy_hours;
                day_unhappy = i;
            }
        }
    }
    
    // 如果max_unhappy_hours还是0，说明津津整周都很高兴，输出0
    cout << day_unhappy << endl;
    
    return 0;
}
