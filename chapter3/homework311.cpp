#include<iostream>
#include<string>
using namespace std;
class GradeBook{
    public:
    GradeBook( string courseName,string instructorName){      //修改构造函数
        setCourseName(courseName);
        setInstructorName(instructorName);
    }
    void setCourseName(string name1){           
        courseName=name1;
    }
    string getCourseName() const{
        return courseName;
    }
    void setInstructorName(string name2){               //添加set和get的功能
        instructorName=name2;
    }
    string getInstructorName() const{
        return instructorName;
    }
    void displayMessage() const{                  //添加打印的语句
        cout<<"welcome to the gradebook for "<<getCourseName()<<endl;
        cout<<"the course is tought by "<<getInstructorName()<<endl;
    }
    private:
      string courseName;
      string instructorName;                //添加老师名字变量
};
int main(){
    GradeBook GradeBook1("Chinese","Li Hua");
    GradeBook1.displayMessage();
    cout<<"change name";                 //此处修改名字
    GradeBook1.setInstructorName("Wang Lun");
    cout <<"instructor is "<<GradeBook1.getInstructorName()<<endl;
}