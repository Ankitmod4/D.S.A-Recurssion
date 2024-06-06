# include <iostream>
using namespace std;
int Factorial(int n){
  if(n==0||n==1){
    return 1 ;
  }
 int ans=n*Factorial(n-1);
 return ans;

}
int main(){

cout<<Factorial(5);




    return 0;
}