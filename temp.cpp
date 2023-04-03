#include<iostream>

using namespace std;

class P{
	
	public:
		
		float a;
		
		void Celsius(){
	 	
		cout<<"enter celsius : ";
		cin>>a;
}
	};

class Q: public P{
	
	public:
		
		void toFehrenheit(){
			
		float f = a*9/5 + 32;
			cout<<"Fehrenheit = "<<f;
			cout<<endl;
			
		}
		
};
class R : public Q{
	
	public:
		void toKelvin(){
		
		
		a= a+273;
		cout<<"kelvin : "<<a;
	}
};


int main(){
	
	R temp;
	
	temp.Celsius();
	temp.toFehrenheit();
	temp.toKelvin();

	
	return 0;
}
