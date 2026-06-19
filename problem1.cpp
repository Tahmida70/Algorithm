#include<iostream>
using namespace std;
int main(){
       int n;
       cin>>n;
       int a[n][n];
       for(int i=0 ; i<n ;i++){
        for(int j= 0;j<n;j++){
            cin>>a[i][j];
        }
       }
 for(int i=0 ; i<n-1;i++)
 {
     int min=i;
 for(int j=i+1 ; j<n ;j++)
 {
     if(a[j][0]<a[min][0])
     {
          min=j;
     }
 }
     swap(a[i][0],a[min][0]);
 }

 for(int i= 0 ;i<n ;i++){
    for(int j=0 ;j<n ;j++){
        cout<<a[i][j]<<" ";
  }
  cout<<endl;


 }
return 0;

}
