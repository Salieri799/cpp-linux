#include<iostream>
using namespace std;
int main(){
    int arr[10];
    cout<<"Enter 10 numbers:"<<endl;
    for(int i=0;i<10;i++)cin>>arr[i];
    
    for(int i=0;i<9;i++){ // 最多比9次
        int swapped=0; // 记录本趟有没有发生过交换,0代表没换过
        for(int j=0;j<9-i;j++){ // a：每趟比较次数递减
            if(arr[j]>arr[j+1]){
                int temp=arr[j];arr[j]=arr[j+1];arr[j+1]=temp;
                swapped=1; // 只要换了位置，开关就打开
            }
        }
        if(swapped==0)break; // b：如果这一趟一次都没换过，说明已经排好了，直接提前结束
    }
    
    cout<<"Sorted:"<<endl;
    for(int i=0;i<10;i++)cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}