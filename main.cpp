#include <iostream>
#include "Computer.h"

int main()
{
    Processor intelOption("Intel", 10, 9, 10, 600.99);

    Processor amdOption("AMD", 5, 9, 16, 742.00);

    Keyboard cheapChoice("RK Royal Kludge RK61", "US_ANSI", "60%", 54.99);

    Keyboard expensiveChoice("Mercury K98 Pro", "US_ANSI", "98%", 259.95);

    cheapChoice.setConnection(true, "USB-C");

    expensiveChoice.setConnection(true, "USB-C");

    Computer numberOne(intelOption, cheapChoice);

    Computer numberTwo(intelOption, expensiveChoice);

    Computer numberThree(amdOption, cheapChoice);

    Computer numberFour(amdOption, expensiveChoice);

    numberOne.print();

    numberTwo.print();

    numberThree.print();

    numberFour.print();

    return 0;
}
