#include <iostream>
using namespace std;
int main()
{
    int n;
    int ind=3;
    
    cout<<"Enter no. of element :"<<endl;
    cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++){
        cout<<"enter "<<i+1<<" Element :"<<endl;
        cin>>arr[i];
    }

    for(int i=ind;i<n;i++){
        arr[i] = arr[i+1];
    }
    n--;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;

}
