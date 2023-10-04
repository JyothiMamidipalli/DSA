//Peak Element

#include<bits/stdc++.h>
using namespace std;
int main (){
    //jyo_code();
    int n,i;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=1;i<n-1;i++)
    {
        if(arr[i]>arr[i-1] and arr[i]>arr[i+1])
        {
            cout<<arr[i]<<" ";
        }
    }
        
    return 0;
}
