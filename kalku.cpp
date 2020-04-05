#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  float a,b;
  int code;
  
  menu :
    cout <<"Simple Calculator\n";
    cout <<"Author : from Indonesian\n";
  test :
    cout <<"Menu Options : \n";
    cout <<"1.Addition\n";
    cout <<"2.Subtraction\n";
    cout <<"3.Multiplication\n";
    cout <<"4.Division\n";
    cout <<"\nPlease Enter The Menu Code : ";cin >> code;
    
    if (code > 4 || code < 1 )
    {
      cout <<"Incorrect Code Please Repeat Again\n\n";
      system ("break");
      goto menu;
    }
    else
    {
      cout <<"\nEnter The First Number : ";cin >> a;
      cout <<"\nEnter The Second Number : ";cin >> b;
    if (code == 1)
    {
      cout <<"\nAddtions Result "<<a<< " + "<<b<< " is : "<<a+b<<endl;
      system ("break");
      goto test;
    }
    else if (code == 2)
    {
      cout <<"\nSubtraction Result "<<a<< " - "<<b<< " is : "<<a-b<<endl;
      system ("break");
      goto test;
    }
    else if (code == 3)
    {
      cout <<"\nMultiplication Result "<<a<< " * "<<b<< " is : "<<a*b<<endl;
      system("break");
      goto test;
    }
    else if (code == 4)
    {
      cout <<"\nDivision Result "<<a<< " / "<<b<< " is : "<<a/b<<endl;
      system ("break");
      goto test;
    }
    }
    return 0;
}
