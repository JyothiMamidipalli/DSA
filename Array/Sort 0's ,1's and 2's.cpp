//Sort of 0's and 1's and 2's
#include<bits/stdc++.h>
using namespace std;
int main (){
    //jyo_code();
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int zero= count(a,a+n,0);
    int one = count(a,a+n,1);
    int two = count(a,a+n,2);
    for(int i=0; i<zero ;i++)
    {
        a[i]=0;
    }
    for(int i=zero; i<one+zero ;i++)
    {
        a[i]=1;
    }
    for(int i=one+zero; i<two+zero+one ;i++)
    {
        a[i]=2;
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
