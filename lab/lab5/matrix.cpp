// 5. Matrix multiplication for * operator overloading for 2x2 matirx
#include<iostream> 
using namespace std; 
class Matrix{
    int a[2][2];
    public: 
    Matrix(){}
    void input()
    {
        int i,j; 

        for(i=0;i<2; i++)
        {
            for(j=0;j<2; j++)
            {
                cout<<"a"<<i+1<<j+1<<": "; 
                cin>>a[i][j]; 
            }
        }
    } 

        void display()
    {
        int i,j; 

        for(i=0;i<2; i++)
        {
            for(j=0;j<2; j++)
            {
                cout<<a[i][j]<<" "; 
                
            }
            cout<<endl; 
        }
    } 



    Matrix operator *(Matrix m)
    {
           Matrix result; 

           for(int i=0;i<2; i++)
           {
            for(int j=0;j<2; j++)
            {
                result.a[i][j]=0; 
                for(int k=0;k<2;k++)
                {
               result.a[i][j] += a[i][k] * m.a[k][j];

                }
            }
        }
        return result; 
    }
}; 


int main()
{
    Matrix a,b,c;
    cout<<"First matrix : "<< endl;  
    a.input(); 

    cout<<"Second Matrix : "<< endl; 
    b.input(); 

    cout<<"Before multiplication: "<< endl; 

    a.display();

    cout<<endl; 

    b.display();
    
    cout<<endl; 

    c=a*b; 
    cout<<"After multiplication : "<< endl; 

    c.display(); 
    return 0; 


}