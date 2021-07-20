#include <iostream>

using namespace std;
// declaring global variables

int x, y, z;



class Operators
{
    public:
    // function definition later..

        int add(int a, int b); 
        int subtract(int a, int b);
        int multiply(int a, int b);
        int divide(int a, int b); 
};

int Operators ::add(int a, int b)
{
    int c = a + b; //adds the 2 provided values.

    cout << "The Sum is : " <<c <<endl;
}

int Operators ::subtract(int a, int b)
{

    int c = a - b; //subtracts the 2 provided values.

    cout<<"The Diffrence is : "<<c <<endl;

}

int Operators ::multiply(int a, int b)
{

    int c = a * b; //multiplies the 2 provided values.

    cout<<"The product is : "<<c <<endl;

}

int Operators ::divide(int a, int b)
{

    int c = a / b; //divides the 2 provided values.

    cout<<"The Quotient is : "<<c <<endl;

    int v = a % b; // also the remainder is displayed

    cout<<"& The remainder is : "<<v <<endl;

}
int starter()
{

    // takes input from the user.
    
    cout << "\n Enter the Two numbers : \n";
    cin >> x;
    cin >> y;

    cout<<"Enter the operation which you want to perform  \n 1 = Addition , 2 = Subtraction \n 3 = Multipication , 4 = Division";
    cout<<"\nNOTE : NO DECIMAL VALUES.\n ";
    cin>>z;
    return x, y, z;
    
}

int main()
{

    cout << "  ***  CALCULATOR ***\n";


    //Making a simple calculator that can add , subtract , divide & multiply.
  
    Operators first; //operator named first initialized
  
    starter();

// loop starts
    if (z==1)
    {
        first.add(x,y);

    }

    else if (z==2)
    {
        first.subtract(x,y);

    }
    
    else if (z==3)
    {
        first.multiply(x,y);

    }

    else if (z==4)
    {
        first.divide(x,y);

    }

    else
    {
        cout<<"Invalid Operation \n Please TRY AGAIN :( ";
    }
    
  
    return 0;
}
