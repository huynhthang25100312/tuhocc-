#include<iostream>
#include<cstring>
using namespace std;
int main(){
char c[40];
string name;
cout<<"Vui long nhap ten:";
cin.getline(c,40);
cout<<"Do dai ten cua ban:"<<strlen(c)<<endl;
cout<<"Do dai cua chuoi:"<<sizeof(c)<<endl;
return 0;	
}