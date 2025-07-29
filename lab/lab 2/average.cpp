// wap to find the sum  and average of numbers using new and delete operators . 
// Also use static_casting operator. 

#include<iostream>

using namespace std; 

int main()
{
	int n,i,sum=0;
	
	cout<<"Enter the number:"; 
	cin>>n; 
	
	int *arr=new int [n];
	
	
	for(i=0;i<n;i++)
	{
		cout<<"Number "<<i+1 <<": "; 
		cin>>arr[i]; 
		sum=sum+arr[i]; 
	}
	
	float avg=static_cast <float> (sum)/n; 
	 
	
	cout<<"sum="<<sum<< endl;  
	
	 
	cout<<"Average="<<avg <<endl; 
	
	delete []arr; 
	
	
	
	return 0; 
}
