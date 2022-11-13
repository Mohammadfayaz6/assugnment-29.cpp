/*2. Write a C++ program to convert Complex type to Primitive type.
Example -
int main()
{
Complex c1;
c1.setData(3,4);
int x;
x=c1;
return 0;
}
*/
#include <iostream>
using namespace std;
class complex
{
  int real;
  int img;

public:
  void setdata(int r, int i)
  {
    real = r;
    img = i;
  }
  operator int()
  {
    return (real + img);
  }
};

int main()
{
  complex c1;
  c1.setdata(3, 4);
  int x = c1;
  cout << c1;

  return 0;
}
