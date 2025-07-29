// 1 wap to perform the additions of distance in feet and inches format.use objectb as argument
#include<iostream>
using namespace std;
class dist{
	int feet,inch;
	public:
		void input() {
			cout<<"Enter the distances in feet and inch : ";
			cin>>feet>>inch;
		
		}
		void add( dist d ){
			dist a;
			
			
			a.inch=d.inch+inch; 
			a.feet=d.feet+feet+a.inch/12;
			a.inch=a.inch%12; 
		
			cout<<" Total distace is "<<a.feet <<" feet "<<a.inch<<" inch";
		}	
		
	
};
 int main(){
 
 dist d1,d2;
 d1.input();
 d2.input();
 d2.add(d1); 
 return 0; 
}

