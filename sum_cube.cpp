#include<iostream>

using namespace std;

class x{
	
	public:
		
	int a,b,c;	
	
	
};

class y : public x{
	
	public: 
	
		void setdata(){
			
			cout<<"enter value 1: ";
			cin>>a;
			cout<<"enter value 2: ";
			cin>>b;
			cout<<"enter value 3: ";
			cin>>c;
			
			
		}
		
		void getdata(){
			
			cout<<"sum of cube of three numbers is : ";
			cout<<(a*a*a)+(b*b*b)+(c*c*c);
			
		}
		
	
	
};

int main(){
	
	y o1;
	o1.setdata();
	o1.getdata();	
	
	
	
	
	return 0;
}
