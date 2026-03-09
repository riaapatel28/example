#include<iostream>
using namespace std;

int recursivsum(int arr[],int n)
{
    if(n==0)
        return 0;
    return arr[n-1]+recursivsum(arr,n-1);
}
int iterativesum(int arr[],int n)
{
    int sum = 0;
    for(int i=0;i<n;i++)
    {
        sum =sum + arr[i];
    }
    return sum;
}
int main()
{
    int n;

    cout<<"enter size of array: ";
    cin>>n;

    int arr[n];

    cout<<"enter array elements:\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int rsum = recursivsum(arr,n);
    int isum = iterativesum(arr,n);

    cout<<"sum using recursion = "<<rsum<<endl;
    cout<<"sum using iteration = "<<isum<<endl;

    return 0;
}
