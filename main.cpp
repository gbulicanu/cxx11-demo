#include <iostream>
#include <limits>
#include "rectangle.hpp"

using namespace std;

int main()
{
    Rectangle r{};

    cout << "default rectangle #ctor: \n"
         << "rect: (" << r.Width() << ',' <<r.Height() << ")\n"
         << "area: " << r.Area() << '\n';

    Rectangle ri{45,15};

    cout << "initilized rectangle #ctor: \n"
         << "rect: (" << ri.Width() << ',' <<ri.Height() << ")\n"
         << "area: " << ri.Area() << '\n';

    return 0;
}
