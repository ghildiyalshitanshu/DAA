#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    for(int q=0;q<t;q++){
        int n,i,shift,comp,flag=0;
        shift=comp=0;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        for(i=1;i<n;i++){
            int key=a[i];
            int j=i-1;
            while(j>=0&&key<a[j]){
                comp++;
                shift++;
                flag = 1;
                a[j+1]=a[j];
                j--;
            }
            if(j!=-1)
                comp++;
            a[j+1]=key;
            if(flag==1){
                shift++;
                flag = 0;
            }
        }
        for(i=0;i<n;i++)
            cout<<a[i]<<" ";
        cout<<"\nComparisons: "<<comp;
        cout<<"\nShift: "<<shift;
    }
    return 0;
}
