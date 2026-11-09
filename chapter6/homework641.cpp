#include<iostream>
using namespace std;
long long gcd(long long x,long long y){
    if(y==0)return x; //余数为0时，x即为最大公约数
    return gcd(y,x%y);
}
int main(){
    long long x,y;
    cout<<"Enter two numbers (x > y): ";cin>>x>>y;
    if(x<y){long long temp=x;x=y;y=temp;} //保证x>y
    cout<<"GCD is: "<<gcd(x,y)<<endl;
    return 0;
}