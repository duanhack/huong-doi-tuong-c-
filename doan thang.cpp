#include<iostream>
#include<cmath>
#include<string>
using namespace std; 
class Doanthang{
	private: 
	float A[2], B[2]; 
	public: 
	Doanthang(){
	}
	~Doanthang(){}
	void nhap(){
	  cout<<" Nhap toa do thu 1 "; 
	  cin>>A[0]; 
	  cin>>A[1]; 
	  cout<<" Nhap vao toa do thu 2: "; 
	  cin>>B[0]; 
	  cin>>B[1]; 
	}
	void xuat(){
         cout<<"("<<A[0]<<","<<A[1]<<" ; "<<B[0]<<","<<B[1]<<")"<<endl; 
  	}
  	bool operator>(Doanthang &a){
    return B[0]>a.B[0]||B[1]>a.B[1]; 
}
};
int main(){
	Doanthang so1; 
	so1.nhap(); 
	so1.xuat(); 
	 
} 
