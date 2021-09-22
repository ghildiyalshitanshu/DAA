#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    for(int q=0;q<t;q++){
        int n,i,j,shift=0,comp=0;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        for(i=0;i<n-1;i++){
            int pos=i;
            for(j=i+1;j<n;j++){
                comp++;
                if(a[j]<a[pos]){
                    pos=j;
                }
            }
            shift++;
            int temp = a[i];
            a[i] = a[pos];
            a[pos] = temp;
        }
        for(i=0;i<n;i++)
            cout<<a[i]<<" ";
            cout<<a[i]<<" ";
        cout<<"\nComparisons: "<<comp;
        cout<<"\nShift: "<<shift;
    }
    return 0;
}
