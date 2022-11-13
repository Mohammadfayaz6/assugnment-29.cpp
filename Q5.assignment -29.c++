/*5. Create two classes Invent1 and Invent2 and also add necessary constructors in it. Now add
functions to support Invent1 to float and Invent1 to Invent2 type.
Example -
int main()
{
Invent1 s1=(4,5);
Invent2 d1;
float tv;
tv=s1;
d1=s1;
return 0;
}
*/
#include<iostream>
using namespace std;
class invent2
{
    int x;
   public:
   invent2()
{
     
}

  invent2(int a)
  {
    x=a;
  }
  operator invent2()
  {
     return x;
  }
  void display()
  {
     cout<<"invent1 to invent2 = "<<x;
  }
};
class invent1
{
   int num1;
   int num2;
   public:
invent1(int x,int y)
{
   num1=x;
   num2=y;
}
operator float()
{
    return(num1+num2);
}
operator invent2()
{
    invent2 i1(num1+num2);
    return i1;
    
}

};

int main()
{
    invent1 s1(4,5);
    invent2 d1;
    float tv;
    tv=s1;
    cout<<"conversion from user define to float = "<<tv<<endl;
    d1=s1;
    d1.display();

    return 0;
}