#include <iostream>
using namespace std;

int main() {
    int n,m;
    cout<<"enter rows"; cin>>n;
    cout<<"enter cols"; cin>>m;
    int matrix[n][m];
    cout<<"enter matrix elements:row-wise";
    for(int i=0;i<n;i++){
         for(int j=0;j<m;j++){
             cin>> matrix[i][j];
         }
    }
    cout <<endl<< "YOUR Matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    
    
    // this part will store the positions to be zeroed 
    
    int col[m] ,colIndex=0, row[n], rowIndex=0;
    for(int i=0;i<n;i++){
         for(int j=0;j<m;j++){
             if(matrix[i][j]==0){
                 col[colIndex++]=j;
                 row[rowIndex++]=i;
             }
         }
    }
    
    
    // updating the Matrix
    for(int i=0;i<n;i++){
         for(int j=0;j<m;j++){
             for(int k=0;k<rowIndex;k++){
               if(row[k]==i){
               matrix[i][j]=0; //change element to 0 if row index matches the index to be zeroed 
              }
            }
            
             for(int k=0;k<colIndex;k++){
               if(col[k]==j){
               matrix[i][j]=0;
               }
            }
       }
    }
    
    
    cout << "NEW Matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}