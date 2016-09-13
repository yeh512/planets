#include <iostream>
using namespace std;

 double a; //bottom side length
 double b; // top side length
 double height; // height of the truncated pyramid

class pyramid
{
public:
  
  double getVolume(double a,double b,double height)
  {
    return 1./3.*(a*a + a*b + b*b)* height;
  }
  
}; // class pyramid
  
int main()
{
  cout << "Hello World\n";
  cout << "Calculate the volume of a truncated pyramid:\n";
  cout << "Please enter the length of the side of the bottom base: ";
  cin >> a;
  cout << "Please enter the length of the side of the top base: ";
  cin >> b;
  cout << "Please enter the height: ";
  cin >> height;
  
  pyramid p1;
  double vol = p1.getVolume(a,b,height);
  cout << "The volume of the truncated pyramid is " << vol << endl;
  return 0;
}
