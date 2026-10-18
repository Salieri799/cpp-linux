#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"enter a five-digit integer:";
    cin>> number;
    int a=(number/10000)%10;                  //提取这五个数字
    int b=(number/1000)%10;
    int c=(number/100)%10;
    int d=(number/10)%10;
    int e=number%10;
    if(number<=9999||number>=99999){          //检验是否为五位数
        cout<<"this isn't a five-digit integer"<<endl;
    }
    else if(a==e&&b==d){                     //判断是否为palindrome
        cout<<"this is a palindrome"<<endl;
    }
    else{
        cout<<"this isn't a palindrome"<<endl;
    }
    return 0;
}