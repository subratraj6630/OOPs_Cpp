#include<iostream>
using namespace std;
int linearsearch(int arr[], int n, int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key)
            return i;
    }
    return -1;
}

int main(){
    int key, arr[]={20,21,22,23,24,25};
    int n= sizeof(arr)/sizeof(arr[0]);
    cout<<"Enter element to search linearlly ";
    cin>>key;

    int index = linearsearch(arr,n,key);

    if(index!=-1){
        cout<<"Element found at index "<<index<<endl;
    }
    else{
        cout<<"Element not found"<<endl;
    }

}