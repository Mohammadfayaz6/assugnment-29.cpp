/*10. Create two classes Rupee and Dollar and add necessary functions to support Rupee to
Dollar and Dollar to Rupee conversion.

Example-
int main()

{
Rupee r = 23;
Dollar d = r; // Rupee to Dollar conversion
d.display();
r.display();
r = d; // Dollar to Rupee Conversion
d.display();
r.display();
return 0;
*/
#include <iostream>
using namespace std;

class Dollar
{
  float dollar;

public:
  Dollar(float y)
  {
    dollar = y;
  }
  operator Dollar()
  {
    return dollar;
  }
  void display()
  {
    cout << dollar << endl;
  }

  float getD()
  {
    return dollar;
  }
};
class Rupee
{
  float rupee;

public:
  Rupee(float x)
  {
    rupee = x;
  }
  operator Dollar()
  {
    Dollar d2(rupee / 89);
    return d2;
  }
  void display()
  {
    cout << rupee << endl;
  }
  Rupee(Dollar d1)
  {
    rupee = d1.getD() * 89;
  }

  operator float()
  {
    cout << "float() of Rupee called" << endl;
    return rupee;
  }
};

int main()
{
  Rupee r = 230;
  Dollar d = r;

  cout << "Dollar   = ";
  d.display();
  cout << "Rupee To Dollar  = ";
  r.display();

  r = d;
  cout << "Dollar To Rupee = ";
  d.display();
  cout << "Rupee = ";
  r.display();
  return 0;
}