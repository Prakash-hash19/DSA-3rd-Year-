#include <iostream>
using namespace std;
int main()
{
    int n;
    int key;
    
    cout<<"Enter no. of element :"<<endl;
    cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++){
        cout<<"enter "<<i+1<<" Element :"<<endl;
        cin>>arr[i];
    }

    cout<<"Enter Element to delete :"<<endl;
    cin>>key;

    for(int i=0;i<n;i++){
        if(arr[i]==key){
            for(int j=i;j<n;j++){
                arr[j]=arr[j+1];
            }
            break;
        }
    }
    n--;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;

}