//3. wap to display the total time in 24 hours format having 12:34:56 and 10:35:14 .
// One constuctor should initialize member data: hour, minute and second to ("0") and 
// another should initialize it fixed values. Other tow members function should add two 
// objects of type time passed as arguments and display result.  
#include<iostream>
#include <iomanip>


using namespace std; 

class Time
{
	int hr,min,sec; 
	public:
		Time():hr(0),min(0),sec(0){}
		
		
	Time(int h, int m, int s)
	{
		hr=h; 
		min=m; 
		sec=s;  
	}
	
	
	void display()
	{
		cout<<setw(2)<<setfill('0')<<hr<< 
		":"<<setw(2)<<setfill('0')<<min<<
		":"<<setw(2)<<setfill('0')<<sec<<endl; 
		
	}
	
	Time add(Time t)
	{
		Time a; 
		
		a.sec=t.sec+sec;
		a.min=t.min+min+t.sec/60; 
		a.sec=a.sec%60; 
		a.hr=t.hr+hr+a.min/60; 
		a.min=a.min%60; 
		
		
		return a; 
	}
	
	
};
int main()
{
	Time t,t1(12, 34, 56),t2(10, 35, 14),add; 
	
	t.display();
		 
	add=t1.add(t2); 
	
	t1.display(); 
	t2.display(); 
	add.display(); 
	
	
	return 0; 
}
