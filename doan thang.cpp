#include<iostream>
#include<cmath>
using namespace std; 
class Doanthang{
	private: 
	float A[2],B[2]; 
	public: 
	Doanthang(){}
	Doanthang(float x1, float y1, float x2, float y2){
		A[0] = x1; 
		A[1] = y1; 
		B[0] = x2; 
		B[1] = y2; 
			} 
	~Doanthang(){}
	void nhap(){
		cout<<" Nhap toa do diem 1 "<<endl; 
		cin>>A[0]; 
		cin>>A[1]; 
		cout<<" Nhap toa do diem 2 "<<endl; 
		cin>>B[0]; 
		cin>>B[1]; 
	}
	void xuat(){
		cout<<"("<<A[0]<<","<<A[1]<<";"<<B[0]<<","<<B[1]<<")"<<endl; 
	}
      float dai(){
      	return sqrt(pow(B[0]-A[0],2)+pow(B[1]-A[1],2)); 
	  }
	  bool operator>(Doanthang &b){
	  	return dai()>b.dai(); 
	  }
};
int main(){
	Doanthang d1,d2; 
	cout<<" Nhap doan thang 1 "<<endl; 
	d1.nhap(); 
	d1.xuat(); 
	cout<<" Nhap vao doan thang 2 "<<endl; 
	d2.nhap(); 
	d2.xuat(); 
	if(d1>d2){
		cout<<" Doan thang thu 1 dai hon ";
	}
	else {
		cout<<" Doan thang thu 2 dai hon "<<endl; 
	} 

}
