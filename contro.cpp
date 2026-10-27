#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<&n<<endl;
  int *prt=&n;
  *prt=10;
  cout<<n<<endl;
  cout<<&*prt<<endl;
  return 0;
}