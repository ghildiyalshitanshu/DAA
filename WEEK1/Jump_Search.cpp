#include<iostream>
#include<math.h>

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
        i=0;
        if(a[i]==key){
            cout<<"Present "<<count;
            continue;
        }
        int m=sqrt(n);
        i=i+m;
        while(i<n&&a[i]<key){
            count++;
            i=i+m;
        }
        if(a[i]==key){
            count++;
            cout<<"PRESENT "<<count;
            continue;
        }
        int k = i<n-1?i:n-1;
        for(int j=i-m+1;j<k;j++){
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
