// wap to calculate the area and perimeter using the concept of oop 
#include<iostream>

using namespace std; 


class rectangle{
	int l,b; 
	public:
	void input()
	{
		cout<<"Enter the lenght and breadth of rectangle: "; 
		cin>>l>>b; 
	}
	
	int area()
	{
		return l*b; 
	}
	
	int perimeter()
	{
		return 2*(l+b); 
	}
};
int main()
{
	int a,p; 
	rectangle r; 
	
	r.input(); 
	a=r.area(); 
	p=r.perimeter();
	
	cout<<"Area= "<<a<<endl; 
	cout<<"Perimeter= "<<p; 
	
	
     return 0; 
}
