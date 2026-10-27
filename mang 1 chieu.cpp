#include<iostream>
#include<random>
#include<cstdlib>
#include<ctime>
#define max 100
using namespace std;
random_device r;
mt19937_64 rd(r());
void nhapmang(int a[max],int &n){
	int i;
	cout<<"Nhap so luong phan tu:";
	cin>>n;
  srand(time(NULL));
	for( i=0;i<=n;i++);
	a[i]=rand();
	}
	void xuatmang(int a[max],int n){
		for(int i=0;i<n;i++){
		cout<<"a["<<i<<"]="<<a[i]<<endl;
		}
	}
	int timkiemvitricuagiatri(int a[max],int n,int x){
		int i;
		for(i=0;i<n;i++){
			if(a[i]==x){
			return i;
			}
		}
	}
	void hoanvi(int & a, int & b){
	int c=a;
	a=b;
	b=c;
	}
	void sapxep(int a[max],int n){
		int i,j;
	for(i=0;i<n-1;i++){
	for(j=i+1;j<n;j++){
		if(a[i]>a[j]){
			hoanvi(a[i],a[j]);
		}
	}
	
	}
	}
int main(){
	int a[max],n,x;
	nhapmang(a,n);
	xuatmang(a,n);
	cout<<"Nhap gia tri can tim:";
	cin>>x;
int cantim=timkiemvitricuagiatri(a,n,x);
if(cantim==-1){
	cout<<"Khong tim thay!!!!"<<endl;
}else{
 cout<<"So can tim o:"<<cantim<<endl;
}
cout<<"Sau khi sap xep"<<endl;
sapxep(a,n);
xuatmang(a,n);

	

	return 0;
	
}