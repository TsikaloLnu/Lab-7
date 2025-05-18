#include "facade.h"
#include <iostream>

int main()
{
    MebelFacade mebelFacade;

    try
    {
        int orderPrice = mebelFacade.ProcessOrder("Chair", 5);
        cout << "Total Price for Chairs: " << orderPrice << endl;

        orderPrice = mebelFacade.ProcessOrder("Table", 3);
        cout << "Total Price for Tables: " << orderPrice << endl;
    }
    catch (const exception& ex)
    {
        cout << "Error: " << ex.what() << endl;
    }

    return 0;
}
