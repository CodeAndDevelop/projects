// wap to calculate the distance between 2 points using oop concept
#include<iostream>
#include<cmath>

using namespace std;

class point{
  double x,y; 
  
  public:
  	void input()
  	{
  		cout<<"Enter the coordinate of point: "; 
  		cin>>x>>y; 
  		
	  }
	  
	  void calculate(point p)
	  { 
	  double d; 
	  d=sqrt(pow(p.x-x,2)+pow(p.y-y,2)); 
	  cout<<"Distance between the points = " <<d; 
             	  	
    	}  
}; 
int main()
{
	
	point p1,p2; 
	
	p1.input(); 
	p2.input(); 
	
	p1.calculate(p2); 
	
	
	return 0; 
}
