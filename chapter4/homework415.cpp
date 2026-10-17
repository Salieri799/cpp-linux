#include<iostream>
using namespace std;
int main(){
    double sales;
    double Salary;
    cout<<"Enter sales in dollers (-1 to end): ";
    cin>>sales;
    while(sales!=-1){             //while循环该过程
        Salary=200+sales*0.09;          //计算工资
        cout<<"Salary is: $"<<Salary<<endl;
        cout<<"Enter sales in dollers (-1 to end): ";          //再次重复
        cin>>sales;
    }
    return 0;
}