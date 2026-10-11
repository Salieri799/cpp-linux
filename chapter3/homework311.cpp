#include<iostream>
#include<string>
using namespace std;
class GradeBook{
    public:
    GradeBook( string courseName,string instructorName){
        setCourseName(courseName);
        setInstructorName(instructorName);
    }
    void setCourseName(string name1){
        courseName=name1;
    }
    string getCourseName() const{
        return courseName;
    }
    void setInstructorName(string name2){
        instructorName=name2;
    }
    string getInstructorName() const{
        return instructorName;
    }
    void displayMessage() const{
        cout<<"welcome to the gradebook for "<<getCourseName()<<endl;
        cout<<"the course is tought by "<<getInstructorName()<<endl;
    }
    private:
      string courseName;
      string instructorName;
};
int main(){
    GradeBook GradeBook1("Chinese","Li Hua");
    GradeBook1.displayMessage();
    cout<<"change name";
    GradeBook1.setInstructorName("Wang Lun");
    cout <<"instructor is "<<GradeBook1.getInstructorName()<<endl;
}