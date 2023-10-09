#include <iostream>
using namespace std;

int main()
{
    float a,b,c;
    int choice;
    cout<<"Enter First Number"<<endl;
    cin>>a;
    cout<<"Enter second Number"<<endl;
    cin>>b;
    cout<<"******MENU******"<<endl;
    cout<<"1.Addition"<<endl;
    cout<<"2.Subtraction"<<endl;
    cout<<"3.Multiplication"<<endl;
    cout<<"4.Division"<<endl;
    
    cout<<"Enter your choice"<<endl;
    cin>>choice;
    
    switch(choice)
    {
        case 1:
        {//float c;
               c=a+b;
               cout<<"Addition is : "<<c<<endl;
            break;
        }
        case 2:
      {
          c=a-b;
        cout<<"Subtraction is : "<<c<<endl;
        break;
      }
        
        case 3:
       {
       c=a*b;
        cout<<"Multiplication is "<<c<<endl;
        break;
       }
       case 4:
       {
           c=a/b;
           if(b==0)
           {
               cout<<"Not defined"<<endl;
           }
           else
           cout<<"Division is : "<<c<<endl;
           break;
           
       }
    }
    return 0;
}


