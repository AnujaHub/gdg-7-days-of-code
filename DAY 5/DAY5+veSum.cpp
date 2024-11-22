#include<iostream>
using namespace std;

int main()
{
    int n, i=0, sum=0;
    cout<<"enter array size";
    cin>>n;
    if(n>0)
    cout<<"enter array elements";
    int arr[n];
    for( i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    
    // re-initializing i to 0
    i=0; 
    
    while(i<=n-1){
        if(arr[i]>=0)
        sum+=arr[i];
        i++;
    }
    
    cout<<"postive sum = "<<sum;
    return 0;
}

// T.C=O(n)
