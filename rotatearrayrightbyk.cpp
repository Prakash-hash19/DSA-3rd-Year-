#include <iostream>
using namespace std;
int main()
{
    int n;
    
    cout<<"Enter no. of element :"<<endl;
    cin>>n;

    int arr[n];
    int k;
    
    for(int i=0;i<n;i++){
        cout<<"enter "<<i+1<<" Element :"<<endl;
        cin>>arr[i];
    }
    cout<<"Enter K position to rotate array :";
    cin>>k;

    int temp;
    int count=k;
    do
    {
        for(int i=n-1;i>0;i--){
        temp = arr[i];
        arr[i] = arr[i-1];
        arr[i-1] = temp;
    }
    count--;
    } while (count>0);
    
    
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;

}