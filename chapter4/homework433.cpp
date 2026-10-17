#include<iostream>
using namespace std;
int main(){
    int a=0;
    int b=0;
    int c=0;
    cout<<"enter the three number:";
    cin >>a>>b>>c;
    if(a<=0||b<=0||c<=0){
        cout<<"you can't enter number less than 0"<<endl;
    }
    else if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a){
        cout<<"yes,they can be the three sides of a right triangle"<<endl;
    }
    else{
        cout<<"no,they can't be the three sides of a right triangle"<<endl;
    }
return 0;
}
