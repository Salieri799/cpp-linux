#include<iostream>
#include<string>
using namespace std;

class GradeBook
{
public:
    GradeBook(string);
    void setCourseName(string);
    string getCourseName();
    void displayMessage();
    void inputGrades();
    void displayGradeReport();
private:
    string courseName;
    int aCount,bCount,cCount,dCount,fCount;
    
    int totalPoints; //用于累加所有人的总分数
};


GradeBook::GradeBook(string name)
{
    setCourseName(name);
    aCount=0;bCount=0;cCount=0;dCount=0;fCount=0;
    
    totalPoints=0; //构造函数中初始化总分为0
}

void GradeBook::setCourseName(string name)
{
    if(name.length()<=25) courseName=name;
    else{
        courseName=name.substr(0,25);
        cout<<"Name \""<<name<<"\" exceeds maximum length (25).\n"
            <<"Limiting courseName to first 25 characters.\n"<<endl;
    }
}

string GradeBook::getCourseName(){ return courseName; }

void GradeBook::displayMessage()
{
    cout<<"Welcome to the grade book for\n"<<getCourseName()<<"!\n"<<endl;
}

void GradeBook::inputGrades()
{
    int grade;
    cout<<"Enter the letter grades."<<endl
        <<"Enter the EOF character to end input."<<endl;
    
    while((grade=cin.get())!=EOF)
    {
        switch(grade)
        {
        case'A': case'a': 
            ++aCount; 
            totalPoints+=4; 
            break;
        case'B': case'b': 
            ++bCount; 
            totalPoints+=3; 
            break;
        case'C': case'c': 
            ++cCount; 
            totalPoints+=2;
            break;
        case'D': case'd': 
            ++dCount; 
            totalPoints+=1;
            break;
        case'F': case'f': 
            ++fCount; 
            totalPoints+=0; 
            break;
        case'\n': case'\t': case' ': 
            break;
        default: 
            cout<<"Incorrect letter grade entered. Enter a new grade."<<endl;
            break;
        }
    }
}

void GradeBook::displayGradeReport()
{
    cout<<"\n\nNumber of students who received each letter grade:"
        <<"\nA: "<<aCount<<"\nB: "<<bCount<<"\nC: "<<cCount
        <<"\nD: "<<dCount<<"\nF: "<<fCount<<endl;
    
    int totalStudents=aCount+bCount+cCount+dCount+fCount;               //计算总人数
    
    if(totalStudents>0){                                                         //防止除0错误
        cout<<"Grade-point average: "<<static_cast<double>(totalPoints)/totalStudents<<endl;             //计算并输出GPA
    }
}


int main()
{
    GradeBook myGradeBook("CS101 C++ Programming");
    
    myGradeBook.displayMessage();
    myGradeBook.inputGrades();
    myGradeBook.displayGradeReport();
    
    return 0;
}