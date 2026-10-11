#include<iostream>
using namespace std;
class Date {
    private:
      int month;
      int day;
      int year;
    public:
      Date(int m,int d,int y){
        setMonth(m);
        day=d;
        year=y;
      }
      void setMonth(int m){
        if(m>=1&&m<=12){
            month=m;
        }
        else{
            month=1;
        }
    
      }
      void setDay(int d){
        day=d;
      }
      void setYear(int y){
        year=y;
      }
      int getMonth() const{
        return month;
      }
      int getDay() const{
        return day;
      }
      int getYear() const{
        return year;
      }
      void displayDate() const{
        cout<<month<<"/"<<day<<"/"<<year<<endl;
      }
};
int main(){
    Date date1(10,11,2026);
    date1.displayDate();
    Date date2(33,11,2026);
    date2.displayDate();
    Date date3(1,1,2026);
    cout<<"first date is"<<date3.getMonth()<<"/"<<date3.getDay()<<"/"<<date3.getYear()<<endl;
    date3.setMonth(12);
    date3.setDay(12);
    date3.setYear(2025);
    cout<<"date is";
    date3.displayDate();
}