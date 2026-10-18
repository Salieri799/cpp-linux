#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"enter a binary integer :";
    cin>>number;
    int a=number%10;               //先看个位
    int c=1;
    int b=a*c;
    while(number>0){
        number=number/10;               //继续往前排数字
        c=c*2;                    //二进制要不断乘2
        a=number%10;             //继续看当前位的数字
        b=b+a*c;                    //转化为10进制
    }
    cout<<"The decimal equivalent is :"<<b<<endl;
    return 0;
}