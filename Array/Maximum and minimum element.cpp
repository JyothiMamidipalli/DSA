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
    int maxi=*max_element(arr,arr+n);
    int mini=*min_element(arr,arr+n);
    cout<<maxi<<" "<<mini<<" "<<endl;
    return 0;
}
