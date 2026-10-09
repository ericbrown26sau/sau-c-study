#include <iostream>
using namespace std;
class myclass
{public:
void minimum(int arr[],int n)
{int min=0;
for(int i=1;i<n;i++)
{if(arr[i]<arr[min])
{min=i;}}
int b;
b=arr[n-1];
arr[n-1]=arr[min];
arr[min]=b;}};
int main()
{int c;
cout<<"输入数组长度"<<endl;
cin>>c;
int *arr=new int[c];
cout<<"依次输入"<<c<<"个整数:"<<endl;
for(int d=0;d<c;d++)
{cin>>arr[d];}
cout<<"交换前的数组"<<endl;
{for(int e=0;e<c;e++)
cout<<arr[e]<<" ";
cout<<endl;}
myclass ex;
{ex.minimum(arr,c);
cout<<"交换后的数组"<<endl;
for(int f=0;f<c;f++)
{cout<<arr[f]<<" ";}
cout<<endl;
delete[] arr;}
return 0;}











