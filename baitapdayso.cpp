#include<iostream>
#include<cmath>
using namespace std; 
class Dayso{
	private: 
	int *p,n; 
	public: 
	Dayso(int n){
		this->n=n; 
		p = new int[n]; 
	}
	~Dayso(){
		delete[] p; 
	}
	void nhap(){
		for(int i=0; i<n ; i++){
			cout<<" Gia tri thu "<<i+1<<": "; 
			cin>>p[i]; 
		}
	}
	void xuat(){
		cout<<" Ket qua tong day so = "<<tong()<<endl; 
	}
	float tong(){
		float dem = 0; 
		for(int i=0; i<n ; i++){
			dem += p[i]; 
		}
		return dem; 
	}
	bool operator>(Dayso &b){
		if(tong()>b.tong()){
			return 1; 
		}
		return 0; 
	}
};
int main(){
	int n; 
	cout<<" Nhap vao gia tri n: "; cin>>n; 
	Dayso so(n); 
	cout<<" Nhap vao day so 1: "<<endl; 
	so.nhap(); 
	so.xuat(); 
	Dayso so1(n); 
	cout<<" Nhap vao day thu 2 "<<endl; 
	so1.nhap(); 
	so1.xuat(); 
	if(so>so1){
		cout<<" Day lon nhat la day 1 ";  
	}
	else cout<<" Day lon nhat la day thu 2  "; 
}
