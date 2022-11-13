/*8. Create a Rupee class and convert it into int. And Display it.

Example-
int main()

{
Rupee r = 10;
int x = r;
cout<<x;
return 0;
}
*/
#include<iostream>
using namespace std;
class Rupee
{
    int rupee;
    public:
    Rupee(int x)
    {
        rupee=x;
    }
    operator int()
    {
        return rupee;
    }


};
int main()
{
    Rupee r=10;
    int x=r;
    cout<<"Rupee to int \n"<<x;
    return 0;
}