#include<iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int q=0;q<t;q++){
        int n;
        cin>>n;
        int a[n],i,count=0;
        for(i=0;i<n;i++)
            cin>>a[i];
        int key;
        cin>>key;
        int low=0,high=n-1,mid;
        while(low<=high){
            mid=(low+high)/2;
            if(a[mid]==key){
                i=mid;
                while(a[i++]==key)
                    count++;
                i=mid-1;
                while(a[i--]==key)
                    count++;

                cout<<key<<"-"<<count;
                break;
            }
            else if(key<a[mid])
                high = mid-1;
            else
                low = mid+1;
        }
        if(count==0)
            cout<<"Key not present\n";
    }
    return 0;
}
