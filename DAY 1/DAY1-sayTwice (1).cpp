
#include<iostream>
using namespace std;

int main()
{
    cout<<"enter a word";
    string s;
    cin>>s;
    
    
    // Also handles for special characters
//   invalid if: both special character & letters found, only special characters found
   
   
    // initially asuming the string is invalid
  bool isValid= false;
   
  for(int i=0; i<=s.length()-1; i++)
  {
     if( (s[i] >= 'A' && s[i] <= 'Z')|| (s[i] >= 'a' && s[i] <= 'z') )
      {  
          isValid=true;
        //  only when string contains all letters
      }  
      else
    //   if special characters found
      { isValid=false;
       break; }
    //   exit the loop immediately if any invalid char fouund
    
  }
  
//   if string is valid--> true
      if (isValid)
      {
          for(int j=1; j<=2; j++){
          cout<<s<<" "; }
      }
      
//   invalid--> false
      
      else
            cout<<"please enter letters only!";
        
return 0;        
}

//T.C = O(n) + 2 = O(n)
// n = string length-1 



    

