#include<iostream>
using namespace std;
int main(){
    int n,s=0,p;
    cout<<"Enter no of subjects:";
    cin>>n;
    int a[n];
    for(int i = 0;i<=n-1;i++){
        cout<<"Enter marks:";
        cin>>a[i];
    }
    for(int i = 0;i<=n-1;i++){
        s=s+a[i];
    }
    p=s/n;
    cout<<"Percentage = "<<p;
}