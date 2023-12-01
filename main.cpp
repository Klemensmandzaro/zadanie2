#include <iostream>
using namespace std;
int main() {
    char a;
    int b=2147483647, c, d;
    do
    {
     cin>>a;
        if (isdigit(a))
        {

            d=a-48;
            if (d<b)
            {
                b=d;
            }
            if (d>c)
            {
                c=d;
            }
        }
    }
    while (a!='q');
    cout<<c<<endl<<b;
    return 0;
}
