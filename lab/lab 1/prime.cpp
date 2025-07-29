#include<iostream>


using namespace std; 

int checkprime(int num)
{
   int i,count=0; 

   for(i=1;i<=num; i++)
   {
         if(num%i==0)
         {
              count++; 
         }
    }
    if(count==2)
    {
        return 1;
    }
    else{
        return 0; 
   }
}

int main()
{
    int start ,end,i,c; 

    cout<<"Enter the range:"; 

    cin>>start>>end; 

    for(i=start; i<end; i++)
    {
        c=checkprime(i); 

        if(c==1)
        {
            cout<<i; 
            cout<<endl; 
        }
        
    }
return 0; 

}

