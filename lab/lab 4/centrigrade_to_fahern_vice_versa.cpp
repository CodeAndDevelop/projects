#include<iostream>

using namespace std; 
class fahrenheit ; 
class centrigrade{
	float c; 
	public:
		centrigrade (int x=0) {
			c=x; 
		}
		friend class fahrenheit; 
		void conversion (fahrenheit temp);
};

class fahrenheit{
	float f; 
	
	public: 
	fahrenheit(int y=0)
	{

		f=y;  
	}

	friend class centrigrade ; 
	
	void conversion (centrigrade temp){
		fahrenheit t ; 
		t.f=temp.c*(9.0/5.0)+32;
		cout<<temp.c<<" celsius is "<< t.f<<" fahrenheit ";  
	}
		

};


void centrigrade :: conversion (fahrenheit temp){
	
	centrigrade cel; 
	cel.c=(temp.f -32)*(5.0/9.0); 
	cout<<endl<<temp.f<< " fahrenheit  is "<< cel.c<< " Celsius "; 
}

int main()
{
	fahrenheit f1(95); 
	centrigrade c1(35); 
	f1.conversion(c1); 
	c1.conversion(f1); 
	return 0; 
}
