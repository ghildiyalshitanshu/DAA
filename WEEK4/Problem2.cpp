#include<iostream>

using namespace std;

int Swap,comp;

int partition(int *a,int l,int r){
    int p = a[r];
    int i = l-1;
    for(int j=l;j<r;j++){
        if(++comp&&a[j]<p){
            i++;
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            Swap++;
        }
    }
    a[r] =a[i+1];
    a[i+1] = p;
    Swap++;
    return (i+1);
}

void quick_sort(int *a,int l,int r){
    if(l<r){
        int p = partition(a,l,r);
        quick_sort(a,l,p-1);
        quick_sort(a,p+1,r);
    }
}
int main()
{
    int t;
    cin>>t;
    for(int q=0;q<t;q++){
        comp=0,Swap=0;
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        quick_sort(a,0,n-1);
        for(int i=0;i<n;i++)
            cout<<a[i]<<" ";
        cout<<"\nComparison: "<<comp;
        cout<<"\nSwaps: "<<Swap;
    }
    return 0;
}
