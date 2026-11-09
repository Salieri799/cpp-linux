#include<iostream>
using namespace std;
int fib_int(int n){           // int版本
    if(n==0)return 0;            // 第0项
    if(n==1)return 1;           // 第1项
    int a=0,b=1,c=0;
    for(int i=2;i<=n;i++){c=a+b;a=b;b=c;}            // 前两项相加并往后挪
    return c;
}
double fib_double(int n){              // double版本
    if(n==0)return 0.0;              // 第0项
    if(n==1)return 1.0;           // 第1项
    double a=0.0,b=1.0,c=0.0;
    for(int i=2;i<=n;i++){c=a+b;a=b;b=c;}     // 逻辑一样，换成了浮点数
    return c;
}
int main(){
    cout<<"   Int Test   "<<endl;
    for(int i=45;i<=50;i++){
        int res=fib_int(i);               // 调用int版本
        cout<<"F("<<i<<") = "<<res<<endl;
        if(res<0){                          // 变成负数说明数据溢出了
            cout<<"--> Int overflow at n="<<i<<endl; break;
        }
    }
    cout<<endl<<"   Double Test   "<<endl;
    for(int i=75;i<=80;i++){
        cout<<"F("<<i<<") = "<<fib_double(i)<<endl;   // 超过78项后，末尾会丢失精度变成0
    }
    return 0;
}