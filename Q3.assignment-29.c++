/*3. Create a Product class and convert Product type to Item type using constructor
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
class product
{
    int x;
    int y;

public:
    product(int a, int b)
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
    void display()
    {
        cout << " product x = " << x << endl;
        cout << " product y = " << y << endl;
    }
};
class item
{
    int i;

public:
    item()
    {
    }
    item(product p)
    {
        i = p.getx() + p.gety();
    }
    void display()
    {
        cout << " item i = " << i << endl;
    }
};
int main()
{
    product p1(3, 4);
    item i1;
    i1 = p1;
    p1.display();
    i1.display();
    return 0;
}