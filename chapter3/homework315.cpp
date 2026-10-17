#include<iostream>
using namespace std;
class Date {
    private:           //这是私有，只能用函数来操作
      int month;
      int day;
      int year;
    public:            //这是公共的，随便动用
      Date(int m,int d,int y){       //构造函数
        setMonth(m);
        day=d;
        year=y;
      }
      void setMonth(int m){         //这里是对月份进行错误修正，防止超出范围
        if(m>=1&&m<=12){           
            month=m;
        }
        else{
            month=1;
        }
    
      }
      void setDay(int d){          //这是正常修改天数
        day=d;
      }
      void setYear(int y){         //这是正常修改年份
        year=y;
      }
      int getMonth() const{        //这三个都是定义读取函数的
        return month;
      }
      int getDay() const{
        return day;
      }
      int getYear() const{
        return year;
      }
      void displayDate() const{           //这是定义打印函数
        cout<<month<<"/"<<day<<"/"<<year<<endl;
      }
};
int main(){                //主程序
    Date date1(10,11,2026);              //正常数据
    date1.displayDate();
    Date date2(33,11,2026);              //异常数据检验之前的修正措施成不成功
    date2.displayDate();
    Date date3(1,1,2026);                
    cout<<"first date is"<<date3.getMonth()<<"/"<<date3.getDay()<<"/"<<date3.getYear()<<endl;
    date3.setMonth(12);                  //这是在修改数据，看看能不能修改
    date3.setDay(12);   
    date3.setYear(2025);
    cout<<"date is";
    date3.displayDate();
}