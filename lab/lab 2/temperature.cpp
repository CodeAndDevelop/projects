//write a function that passes two tempreatures by reference & sets the 
//larger of the 2 numbers to 100 by using return by refrence
#include<iostream>
using namespace std; 
float &temperature(float &t1 , float &t2)
{
	if(t1>t2)
	{
		return t1; 
	}
	else
	{
		return t2; 
	}
}
int main()
{
	float t1,t2,t; 
	
	cout<<"Enter two tempratures:"; 
	cin>>t1>>t2; 

	t=temperature(t1,t2); 
 
	temperature(t1,t2)=100; 
	
	cout<<t1<<"  "<<t2; 
	
	return 0; 
	
	
	
	
	
}
