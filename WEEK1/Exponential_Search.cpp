#include<iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int w=0;w<t;w++){
        int n,i,key,count=1,flag=0;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        cin>>key;
        if(a[0]==key){
            cout<<"Present "<<count;
            continue;
        }
        i=1;
        while(i<n&&a[i]<=key){
            count++;
            i=i*2;
        }
        int k = i<n-1?i:n-1;
        for(int j=i/2;j<=k;j++){
            count++;
            if(a[j]==key){
                cout<<"PRESENT "<<count;
                flag = 1;
                break;
            }
        }
        if(flag==0)
            cout<<"NOT PRESENT "<<count;
    }
    return 0;
}
