//Find the minimum and maximum element in an array.

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
    int maxi=INT_MIN;
    int mini=INT_MAX;
    for(i=0;i<n;i++)
    {
        if(maxi<arr[i])
        {
            maxi=arr[i];
        }
        if(mini>arr[i])
        {
            mini=arr[i];
        }
    }
    cout<<maxi<<" "<<mini<<" "<<endl;
    return 0;
}
