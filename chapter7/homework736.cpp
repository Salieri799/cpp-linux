#include<iostream>
#include<string>
using namespace std;
void stringReverse(string str,int index){ 
    if(index==str.length())return; // 如果走到了字符串最后，就停下
    stringReverse(str,index+1); // 字符串往下一个走
    cout<<str[index]; // 回来再打印当前字符
}
int main(){
    string s;
    cout<<"Enter a string: ";
    cin>>s;
    stringReverse(s,0); // 从第0个字符开始走
    cout<<endl;
    return 0;
}