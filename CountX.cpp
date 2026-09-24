#include <iostream>
using namespace std;
int main()
{
    int n;
    int key;
    int count=0;
    
    cout<<"Enter no. of element :"<<endl;
    cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++){
        cout<<"enter "<<i+1<<" Element :"<<endl;
        cin>>arr[i];
    }
    cout<<"Enter no. to find How many times it appears : "<<endl;
    cin>>key;
    
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            count++;
        }
    }
    cout<<key<<" Appear "<<count<<" times";
    
    return 0;
}