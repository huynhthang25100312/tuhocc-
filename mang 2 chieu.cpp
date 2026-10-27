#include<iostream>
#include<random>
#include<cstdlib>
#include<ctime>
using namespace std;
#define dong 100
#define cot 100
void nhapmang(int a[dong][cot],int & m,int & n){
	srand(time(NULL));
	int sodong,socot,i,j;
	for(i=0;i<m;i++){
	for(j=0;j<n;j++){
		a[i][j]=rand()%1000;
	}
	}
}
void xuatmang(int a[dong][cot],int m,int n){
	int i,j;
	for(i=0;i<m;i++){
	for(j=0;j<n;j++){
	cout<<a[i][j]<<"\t";
	}
	cout<<endl;
	}
}
int main(){
int a[dong][cot],d,c;
cout<<"Nhap so dong:";
cin>>d;
cout<<"Nhap so cot:";
cin>>c;
nhapmang(a,d,c);
xuatmang(a,d,c);

	return 0;
}