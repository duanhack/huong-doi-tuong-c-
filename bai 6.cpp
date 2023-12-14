#include<iostream>
#include<cmath>
using namespace std; 
class Dagiac{
	protected: 
	float a; 
	public: 
	virtual float dientich()=0; 
};
class Vuong : public Dagiac{
	public: 
	void nhap(){
		cout<<" Nhap vao canh hinh vuong "; cin>>a; 
	}
	float dientich(){
		return a*a;  
	} 
};
int main(){
	Dagiac *p;  
    Vuong h; 
    p = &h;  
	h.nhap(); 
	cout<<" Chu vi = "<<p->dientich();  
}
