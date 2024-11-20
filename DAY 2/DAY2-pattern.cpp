    #include<iostream>
    using namespace std;
    
    int main()
    {
        cout<<" enter number";
        int n;
        cin>>n;
        
        for(int i=1;i<=n;i++){ //rows
        int rows=n;
        int spaces=n-i; 
                for(int s=1;s<=spaces;s++){
                    cout<<" ";
                }
                 for(int j=1;j<=(2*i)-1;j++){ //cols
                     cout<<"*";
                 }
                
             cout<<endl;
            }
        
        return 0;
    }
    
    
    // T.C =O(n)*[O(n)+O(n)]= O(n^2)
    // spaces run n-i --> avg n/2 times--> n times
    // col runs 2i-->avg 2n/2 times--> n times
