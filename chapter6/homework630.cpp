#include<iostream>
using namespace std;
int main(){
    long long n,reversed=0;
    cout<<"Enter a number: ";cin>>n;
    while(n!=0){
        reversed=reversed*10+n%10; //取出最后一位拼接到反转数
        n=n/10; //砍掉最后一位
    }
    cout<<"Reversed: "<<reversed<<endl;
    return 0;
}