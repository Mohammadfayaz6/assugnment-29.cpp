/*1.Write a C++ program to convert Primitive type to Complex type.
Example -
int main()
{
Complex c1;
Int x=5;
c1=x;
return 0;
}
*/
#include <iostream>
using namespace std;
class complex
{
    int num;

public:
    complex()
    {
    }
    complex(int n)
    {
        num = n;
    }
    void display()
    {
        cout << num;
    }
};
int main()
{
    int x = 5;
    complex c1;
    c1 = x;
    c1.display();

    return 0;
}