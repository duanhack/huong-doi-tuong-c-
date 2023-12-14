#include<iostream>
using namespace std; 
class Dayso{
	private: 
	int *p,n; 
	public: 
	Dayso(int n){
		this->n=n; 
		p = new int[n]; 
	}
	void nhap(){
		cout<<" Nhap vao day so ! "; 
		for(int i=0; i<n; i++){
			cout<<" Gia tri thu "<<i+1<<": "; 
			cin>>p[i]; 
		}
	}
	void xuat(){
		for(int i=0; i<n ;i++){
			cout<<p[i]<<" "; 
		}
	}
	int tong(){
		int dem = 0; 
		for(int i=0; i<n ;i++){
			dem += p[i]; 
		}
		return dem; 
	}
	bool operator>(Dayso &b){
		return tong()>b.tong(); 
	}
};
int main(){
	int n; 
	cout<<" Nhap vao gia tri n "; cin>>n; 
	Dayso so(n); 
	so.nhap(); 
	cout<<" Tong day so = "<<so.tong(); 
	cout<<" Day so thu 2 ! "<<endl; 
	Dayso so1(n); 
	so1.nhap(); 
	cout<<" Tong day so thu 2 = "<<so1.tong(); 
	if(so>so1){
		cout<<" Day so thu 1 lon hon "; 
	}
	else cout<<" Day thu 2 lon hon "; 
	
}
