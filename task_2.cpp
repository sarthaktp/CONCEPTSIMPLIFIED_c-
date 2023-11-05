// TASK : 2   (completed)

// Develop a calculator program that performs basic arithmetic
// operations such as addition, subtraction, multiplication, and
// division. Allow the user to input two numbers and choose an
// operation to perform.


#include<iostream>
#include<math.h>
using namespace std ;

class calculator
{
    private :
    int a,b;

    public:

    void add(int a,int b)
    {
        cout<<"The addition of given number is : ";
        cout<<a+b;
    }

    void sub(int a,int b)
    {
        cout<<"The substraction of given number is : ";
        cout<<a-b;
    }

    void mul(int a,int b)
    {
        cout<<"The multiplicatioon of given number is : ";
        cout<<a*b;
    }

    void div(int a,int b)
    {
        cout<<"The division of given number is : ";
        cout<<a%b;
    }

};

int main ()
{
    int a,b;
    calculator operation;
    while(true)
    {
        cout<<"\n1.addition \n";
        cout<<"2.substraction \n";
        cout<<"3.multiplication \n";
        cout<<"4.division \n";
        cout<<"5.exit \n";
        int choice;
        cout<<"enter your choice : ";
        cin>>choice;

        if (choice==1)
        {
            cout<<"enter the first number : ";
            cin>>a;
            cout<<"enter the second number : ";
            cin>>b;
            operation.add(a,b);

        }

        else if (choice==2)
        {
            cout<<"enter the first number : ";
            cin>>a;
            cout<<"enter the second number : ";
            cin>>b;
            operation.sub(a,b);

        }

        else if (choice==3)
        {
            cout<<"enter the first number : ";
            cin>>a;
            cout<<"enter the second number : ";
            cin>>b;
            operation.mul(a,b);

        }

        
        else if (choice==4)
        {
            cout<<"enter the first number : ";
            cin>>a;
            cout<<"enter the second number : ";
            cin>>b;
            operation.div(a,b);

        }

        else if (choice==5)
        {
            cout<<"exited successfully .....";
            exit (false);
        }

        else 
        {
            cout<<"enter the valid choice number ????";
        }
    }
}

