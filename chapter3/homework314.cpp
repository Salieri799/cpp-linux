#include <iostream>
#include <string>
using namespace std;
class Employee {
public:
    Employee(string first, string last, int salary){        //构造这三个函数
        setFirstName(first);
        setLastName(last);
        setMonthlySalary(salary);
    }
    void setFirstName(string first){             //修改数据设置
        firstName=first;
    }
    void setLastName(string last){
        lastName=last;
    }
    void setMonthlySalary(int salary){              //设置薪水是负数直接为0的机制
        if (salary>0){
            monthlySalary = salary;
        } 
        else {
            monthlySalary = 0;
        }
    }
    string getFirstName() const{             //读取数据设置
        return firstName;
    }
    string getLastName() const{
        return lastName;
    }
    int getMonthlySalary() const{
        return monthlySalary;
    }
private:
    string firstName;                //设置变量
    string lastName;
    int monthlySalary;
};
int main() {
    Employee emp1("Hua", "Li", 5000);
    Employee emp2("Lun", "Wang", -5000);           //设置异常薪水数据进行检验
    cout <<emp1.getFirstName()<<" "<<emp1.getLastName() 
         <<" yearly salary: $"<<emp1.getMonthlySalary()*12<<endl;
    cout <<emp2.getFirstName() << " " << emp2.getLastName()
         <<" yearly salary: $"<<emp2.getMonthlySalary()*12<<endl;
    emp1.setMonthlySalary(emp1.getMonthlySalary()*1.1);              //进行涨薪10%的计算
    emp2.setMonthlySalary(emp2.getMonthlySalary()*1.1);
    cout <<"after 10% raise"<< endl;
    cout <<emp1.getFirstName()<<" "<<emp1.getLastName()                //输出最终年薪
         <<" yearly salary: $"<<emp1.getMonthlySalary()*12<<endl;
    cout <<emp2.getFirstName()<<" "<<emp2.getLastName() 
         <<" yearly salary: $"<<emp2.getMonthlySalary()*12<<endl;
    return 0;
}