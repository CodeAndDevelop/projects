#include<iostream>
using namespace std;
class student
{
  char name[10];
  int roll,i;
   float m[5],sum=0,per;
   public:
   void getdata()
   {
    cout<<"enter the name: ";
    cin>>name;
    cout<<"roll no:";
    cin>>roll;
    for(i=0;i<5;i++)
    {
        cout<<"enter the marks in subject "<<i+1 << "= ";
        cin>>m[i];
        sum=sum+m[i]; 
    }
    per=(sum/500)*100;
   }
   void pass()
   {
    if(per>40)
    {
        cout<<"name="<<name;
        cout<<"percentage="<<per;
    }
   }
};
int main()
{
    student s[3];
    for(int j=0;j<3;j++)
    {
        s[j].getdata();
    }
    for(int j=0;j<3;j++)
    {
        s[j].pass();
    }
    return 0;
}