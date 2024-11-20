
#include<iostream>
using namespace std;

int main()
{
    cout<<"Enter two numbers a & b :: (a<b)";
    int a, b;
    cin>>a>>b;
    // handles
    while(a>=b){
     cout<<"enter a & b again:: a<b";
     cin>>a>>b;
   }
    
    int n = (b-a)+1;
    int arr[n];
    
    for(int i=0;i<n;i++){
        arr[i]=a;
        a++;
    }
    
    for(int i=0; i<n;i++){
        
        if(arr[i]%5==0 && arr[i]%7==0)
        cout<<"FooBar";
        else if(arr[i]%5==0 && arr[i]%7!=0)
        cout<<"Foo";
        else if(arr[i]%5!=0 && arr[i]%7==0)
        cout<<"Bar";
        else
        cout<<"Baz";
        
        cout<<endl;
    }
    
    return 0;
}


// T.C= O(n)+O(n)=O(n)
