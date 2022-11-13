/*7. Create two class Time and Minute and add required getter and setter including constructors.
Now you need to type cast Time object into Minute to fetch the minute from Time and display it.
Example -
int main()
{
Time t1(2,30);
t1.display();
Minute m1;
m1.display();
m1=t1 // Fetch minute from time
t1.display();
m1.display();
return 0;
}
*/
#include<iostream>
using namespace std;
class Minute
{
    int min;
    public:
    Minute()
    {
      
    }
    Minute(int m)
    {
        min=m;
    }
    operator Minute()
    {
        return min;
    }
    void display()
    {
      cout<<"Time to minute : "<<min<<endl;
    }

};
class Time
{
  int time;
  int min;
  public:
  Time(int t,int m)
  {
    time=t;
    min=m;
  }
  operator Minute()
  {
    Minute t2(time*60);
    return t2;
  }
  void display()
  {
    cout<<"Time : "<<time<<" minute : "<<min<<endl;
  }
  


};

int main()
{
    Time t1(2,30);
    t1.display();
    Minute m1;
    m1=t1;
    t1.display();
    m1.display();

    return 0;
}