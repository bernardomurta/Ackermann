#include <iostream>
using namespace std;

int A(int m, int n){
  if(m==0){
    return n+1;
  }
 else if(m>0 and n==0){
    return A(m-1,1); 
  }
   else if(m>0 and n>0){
    return A(m-1,A(m,n-1));
  }
  else if(m<0){
    return 0;
  }
}
int main(){
  int x,y;
  cin>>x;
  cin>>y;
  int ackermann=A(x,y);
  cout<<ackermann<<endl;;
  return 0;
}