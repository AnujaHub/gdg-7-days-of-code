#include<iostream>
using namespace std;

int main()
{
    cout<<"enter a string";
    string s;
    getline(cin, s);  // reads entire line including spaces
    
    int vow=0;
    for(int i=0;i<=s.length()-1;i++){
        
        char c = tolower(s[i]);  // convert to lowercase to avoid - if condn for CAP
        if(c == 'a'||c =='e'||c =='i'||c =='o'||c=='u')
        vow++;
    }
    
    cout<<vow;
    return 0;
}
