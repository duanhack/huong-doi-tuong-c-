#include<iostream>
#include<string>
using namespace std; 
class DONHANG{
	private: 
	string ma,loai,ten; 
	public: 
	DONHANG(){
		this->ma=this->loai=this->ten = ""; 
	}
	~DONHANG(){}
	DONHANG(string ma,string loai, string ten){
		this->ma=ma; 
		this->loai = loai; 
		this->ten = ten; 
	}
	void nhap(){
		cin.ignore(); 
		cout<<" Nhap vao Ma: "; getline(cin,ma); 
		cout<<" Nhap vao loai hang:  "; getline(cin,loai); 
		cout<<" Nhap vao ten hang: "; getline(cin,ten); 
	}
	void xuat(){
		cout<<" MA : "<<ma<<endl; 
		cout<<" Loai hang: "<<loai<<endl; 
		cout<<" Ten: "<<ten<<endl; 
	}
	friend bool operator>(DONHANG &a, DONHANG &b){
		return a.ten>b.ten;  
	}
};
int main(){
	DONHANG so1; 
	cout<<" Nhap vao don 1: "<<endl; 
	so1.nhap(); 
	so1.xuat(); 
	DONHANG so2; 
	cout<<" Nhap vao don 2:  "<<endl; 
	so2.nhap(); 
	so2.xuat(); 
	cout<<endl; 
	if(so1>so2){
		cout<<" Chuoi lon hon la: "; 
		so1.xuat(); 
	}
     else{
		cout<<" Chuoi lon hon la: "; 
		so2.xuat(); 
	}
}
