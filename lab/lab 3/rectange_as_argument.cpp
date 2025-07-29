//2.  wap to add two retangular box to construct a third reatangular box 
//(add corresponding length, breadth , height of each box to make third box)
//i)  using object as argument
//ii) using function that return 
  
#include<iostream>


using namespace std; 

class rectangle
{
	double l,b,h; 
	
	public:
		void input()
		{
			cout<<"Enter length , breadth and height of recangular box : "; 
			cin>>l>>b>>h; 
			
		}
		
		rectangle add(rectangle r)
		{
			rectangle a; 
			a.l=r.l+l; 
			a.b=r.b+b; 
			a.h=r.h+h;
			
			return a;   
			
		}
		
		void display()
		{
			cout<<"Length: "<<l<<" Breadth: "<<b<<" Height: "<<h<<endl; 
		}
		
	
};
int main()
{
	rectangle r1,r2,r3;
	
	r1.input() ; 
	
	r2.input(); 
	
	r3=r1.add(r2); 
	
	r1.display(); 
	r2.display();
	r3.display();  
	
	
	
	return 0; 
}


