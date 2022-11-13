/*6. Create a Time class and take Duration in seconds. Now you need to convert seconds(i.e in
int ) to Time class.

Example-
int main()

{
int duration;
cout<<”Enter time duration in minutes”;
cin>>duration;
Time t1 = duration;
t1.display();
return 0;
}
*/
#include<iostream>
using namespace std;
class Time
{
   
   int hour;
   int min;
   int sec;
    public:
    Time(int x)
    {
     hour=x/3600;
     min=x%3600;
     sec=min%60;
    }
    void display()
    {
        cout<<"Hours = "<<hour<<" min = "<<min<<" sec = "<<sec<<endl;
    }


};
int main()
{
    int duration;
    cout<<"Enter time duration in minutes"<<endl;
    cin>>duration;
    Time t1=duration;
    t1.display();
    return 0;
}