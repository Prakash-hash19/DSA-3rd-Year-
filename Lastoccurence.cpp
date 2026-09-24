#include <iostream>
using namespace std;
int main()
{
    int n;
    int key;
    int pos;
    
    cout<<"Enter no. of element :"<<endl;
    cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++){
        cout<<"enter "<<i+1<<" Element :"<<endl;
        cin>>arr[i];
    }
    cout<<"Enter no. to find its Last Occurence : "<<endl;
    cin>>key;
    
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            pos = i;
        }
    }
    cout<<"Last occurence at "<<pos<<" index";
    
    return 0;
}