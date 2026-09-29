#include <iostream>
using namespace std;

class MyClass
{
public:
    void fun(int arr[], int len)
    {
        int minIndex = 0;
        //查找最小值下标
        for(int i = 1; i < len; i++)
        {
            if(arr[i] < arr[minIndex])
            {
                minIndex = i;
            }
        }
        //最小值和末尾元素交换
        int temp = arr[minIndex];
        arr[minIndex] = arr[len - 1];
        arr[len - 1] = temp;
    }
};

int main()
{
    int n;
    cout << "请输入数组长度：";
    cin >> n;
    int arr[100];
    cout << "请输入数组数据：";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "交换前数组：";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    MyClass obj;
    obj.fun(arr,n);

    cout << "交换后数组：";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}

