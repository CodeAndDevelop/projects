//4b 
#include<iostream>
#include<cstring> 

using namespace std; 
class SportDpt; 
class EduDpt
{
	int roll; 
	char name[30]; 
	float s1G,s2G; 
	
	public: 
//	EduDpt(int r=0, char n[20]=" ", int g1=0, int g2=0)
//	{
//		roll=r; 
//		name=n;
//		s1G=g1;
//		s2G=g2; 		
//	}
//	
	void input()
	{
		cout<<"Enter your name: ";
		cin>>name; 
		
		cout<<"Enter your roll number: "; 
		cin>>roll; 
		
		cout<<"Enter your grade of first and second semester in gpa: "; 
		cin>>s1G>>s2G;  
	}
	
	
	
	friend class SportDpt;
 
}; 

class SportDpt{
	char name[30]; 
	int roll;
	bool allow; 
	 
	public: 
		void input()
	{
		cout<<"Enter your name: ";
		cin>>name; 
		
		cout<<"Enter your roll number: "; 
		cin>>roll; 
	}
	
	void check(EduDpt temp){
		if(strcmp(name,temp.name)==0 && roll==temp.roll)
		{
			if(temp.s1G>=2.0 && temp.s2G>=2.0)
			{
				cout<<"Name= "<< name << "  Roll= "<< roll<< endl; 
			}
		}
		
	}
	
	
	
	
};


int main()
{
	 EduDpt s[3]; 
	 SportDpt sp[2]; 
	
	int i,j; 
	
	for(i=0;i<3 ;i++)
	{
		s[i].input(); 
	}
	
	cout<<"sport: "<<endl; 
	for(i=0;i<2; i++)
	{
		sp[i].input(); 
	}
	

	cout<<"Student Eligble for playing sports : "<<endl; 
	for(i=0;i<3; i++)
	{
		for(j=0; j<2; j++)
		{
		
		sp[j].check(s[i]); 
	}
	}
	
	
	return 0; 
}
