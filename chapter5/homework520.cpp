#include<iostream>
using namespace std;
int main(){                           //枚举三条边，控制范围并避免重复输出
    for(int s1=1;s1<=500;s1++){
        for(int s2=s1;s2<=500;s2++){ // s2从s1开始，避免重复 (3,4,5) 和 (4,3,5)
            for(int h=s2;h<=500;h++){ // 斜边h大于直角边
                if(s1*s1+s2*s2==h*h){ // 勾股定理判断
                    cout<<s1<<" "<<s2<<" "<<h<<endl;
                }
            }
        }
    }
    return 0;
}