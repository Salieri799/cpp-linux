#include<iostream>
using namespace std;
int main(){
    int n,num,sum=0; // n为数字个数，num为临时输入的数，sum为总和
    cin>>n; // 读取要输入的数字个数
    for(int i=0;i<n;i++){
        cin>>num; // 读取每个数字
        sum+=num; // 累加到总和
    }
    cout<<sum<<endl; // 输出最终结果
    return 0;
}