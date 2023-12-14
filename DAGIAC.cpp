#include<iostream>
#include<cmath>
using namespace std; 
class Dagiac{
	protected: 
	float a,b,c; 
	public: 
	Dagiac(float a=1, float b=5, float c=3){
		this->a =a ;this-> b = b; this->c = c; 
	}
	virtual float chuvi()= 0; 
};
class Tamgiac:public Dagiac{
	public: 
     Tamgiac(float a, float b, float c):Dagiac(a,b,c){}
	float chuvi(){
		return a+b+c; 
	}
};
int main(){
	Tamgiac a(1,5,3); 
	a.chuvi(); 
	cout<<" Chu vi la: "<<a.chuvi()<<endl; 
}
