#include "Singelton.h"

class Furniture
{
private:
    string _type;
    int _quantity;

public:
    Furniture(const string& type, int quantity)
        : _type(type), _quantity(quantity) {}

    void Display()
    {
        LoggerSingleton::GetInstance()->Log("Displaying " + to_string(_quantity) + " units of " + _type);
    }

    void Sell()
    {
        LoggerSingleton::GetInstance()->Log("Selling " + to_string(_quantity) + " units of " + _type);
    }
};

int main()
{
    Furniture* chair = new Furniture("Chair", 10);
    chair->Display();
    chair->Sell();

    Furniture* table = new Furniture("Table", 5);
    table->Display();
    table->Sell();

    delete chair;
    delete table;

    return 0;
}
