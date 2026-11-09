#include<iostream>
using namespace std;
int isPrime(int n){             
    if(n<=1)return 0; //0代表假
    for(int i=2;i*i<=n;i++){ //除到平方根即可
        if(n%i==0)return 0; //能除尽，返回0
    }
    return 1; //全都除不尽，返回1
}
int main(){
    int count=0;
    for(int i=2;i<=10000;i++){
        if(isPrime(i)==1){                   //判断是否为质数
            cout<<i<<" ";
            count++;
        }
    }
    cout<<"\nTotal count: "<<count<<endl;
    return 0;
}