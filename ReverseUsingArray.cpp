#include <iostream>
using namespace std;
int main()
{
    int n;
    
    cout<<"Enter no. of element :"<<endl;
    cin>>n;

    int arr[n];
    int revarr[n];
    
    for(int i=0;i<n;i++){
        cout<<"enter "<<i+1<<" Element :"<<endl;
        cin>>arr[i];
    }

    int point = n;
    for(int i=0;i<n;i++){
        revarr[i] = arr[point-1];
        point--;
    }
    
    for(int i=0;i<n;i++){
        cout<<revarr[i]<<" ";
    }

    return 0;

}