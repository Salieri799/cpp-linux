#include<iostream>
using namespace std;
int main() {
    int arr[20]; // 存不重复的数
    int count = 0; // 已经存了几个数
    for (int i = 0; i < 20; i++) {
        int num;
        cin >> num;
        if (num >= 10 && num <= 100) { // 检查范围
            int found = 0; // 0表示没找到，1表示找到了
            for (int j = 0; j < count; j++) {
                if (arr[j] == num) { // 如果相同
                    found = 1; // 标记为1
                }
            }
            if (found == 0) { // 如果不是相同的
                arr[count] = num; // 存进数组
                count++; // 数量加1
                cout << num << " "; // 打印出来
            }
        }
    }
    return 0;
}