#include<iostream>
using namespace std;
int main(){                  //打印左下角直角三角形
    for(int i=1;i<=10;i++){ // 外层控制行数 (1到10)
        for(int j=1;j<=i;j++)cout<<'*'; // 内层控制每行打印的星号数
        cout<<endl;
    }
    cout<<endl;
    //打印左上角直角三角形（倒置）
    for(int i=10;i>=1;i--){ // 行数从10递减到1
        for(int j=1;j<=i;j++)cout<<'*';
        cout<<endl;
    }
    cout<<endl;
    //打印右下角直角三角形
    for(int i=1;i<=10;i++){
        for(int j=1;j<=10-i;j++)cout<<' '; // 先打印前面的空格
        for(int j=1;j<=i;j++)cout<<'*'; // 再打印星号
        cout<<endl;
    }
    cout<<endl;
    //打印右上角直角三角形（倒置）
    for(int i=10;i>=1;i--){
        for(int j=1;j<=10-i;j++)cout<<' '; // 空格逐行递增
        for(int j=1;j<=i;j++)cout<<'*'; // 星号逐行递减
        cout<<endl;
    }
    return 0;
}