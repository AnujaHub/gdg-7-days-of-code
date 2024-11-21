#include<iostream>
using namespace std;

int main(){
    cout<<"enter no of schools, students, passed students";
    float schl, stud, pass;
    cin>>schl>>stud>>pass;
    int s = schl*stud;
    
    if(pass==0)
    cout<<"NO";
    
    else if(s==pass)
    cout<<"YES";
    
    else if((pass/s)*100 > 50) 
    cout<<"YES";
    
    else
    cout<<"NO";
    
    return 0;
}

// T.C=O(1)

