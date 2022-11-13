/*4. Create Product class and convert Product type to Item type using casting operator
int main()
{
Item i1;
Product p1;

p1.setData(3,4);
i1=p1;
return 0;
}
*/
#include <iostream>
using namespace std;
class item
{
    int i;

public:
    item()
    {
    }
    item(int x)
    {
        i = x;
    }
    operator item()
    {
        return i;
    }
    void display()
    {
        cout << "item i = " << i;
    }
};
class product
{
    int x;
    int y;

public:
    void setdata(int a, int b)
    {
        x = a;
        y = b;
    }
    int getx()
    {
        return x;
    }
    int gety()
    {
        return y;
    }

    operator item()
    {
        item i(x + y);
        return i;
    }
    void display()
    {
        cout << "x = " << x << endl;
        cout << "y = " << y << endl;
    }
};

int main()
{
    item i1;
    product p1;
    p1.setdata(3, 4);
    i1 = p1;
    p1.display();
    i1.display();

    return 0;
}