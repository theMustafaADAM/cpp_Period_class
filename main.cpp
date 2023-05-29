#include <iostream>
#include "../OOP_Projects_Date/include/clsDate.h"
#include "clsPeriod.h"

using namespace std;

int main()
{
    cout << "OOP Projects : class Period!" << endl;

    clsDate d1("2/2/2022"); clsDate d2("5/5/2022");
    clsPeriod p1(d1,d2);

    p1.Print();

    clsDate d3("30/3/2022"); clsDate d4("2/4/2022");
    clsPeriod p2(d3, d4);

    p2.Print();

    cout << "Is Overlap : " << p1.IsOverLapPeriods(p2) << endl;

    return 0;
}
