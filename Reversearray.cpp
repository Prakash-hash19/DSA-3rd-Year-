#include <iostream>
using namespace std;
int main()
{
    int n;
    
    cout<<"Enter no. of element :"<<endl;
    cin>>n;

    int arr[n];
    
    for(int i=0;i<n;i++){
        cout<<"enter "<<i+1<<" Element :"<<endl;
        cin>>arr[i];
    }

    int temp;
    int pointer = n;
    for(int i=0;i<n/2;i++){
        temp = arr[i];
        arr[i] = arr[pointer-1];
        arr[pointer-1] = temp;
        pointer--;
    }
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;

}