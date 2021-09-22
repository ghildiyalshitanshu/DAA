#include<iostream>

using namespace std;

int main()
{
    int t;
    cout<<"Enter the test cases: ";
    cin>>t;
    for(int x=0;x<t;x++){
        int n,key,i;
        cout<<"Enter n: ";
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        cout<<"Enter key: ";
        cin>>key;
        for(i=0;i<n;i++){
            if(a[i]==key){
                cout<<"\n\nKey Found";
                cout<<"\nTotal Number Of Comparisions: "<<i+1;
                break;
            }
        }
        if(i==n){
            cout<<"\nKey Not Found";
        }
    }
    return 0;
}
