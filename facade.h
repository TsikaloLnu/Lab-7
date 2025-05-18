#ifndef MEBEL_FACADE_H
#define MEBEL_FACADE_H

#include <string>
#include <iostream>
#include <stdexcept>  

using namespace std;

class FurnitureStock
{
public:
    int CheckStock(const string& furnitureType);
};

class FurnitureSalesSystem
{
public:
    int SellFurniture(const string& furnitureType, int quantity);
};

class FurnitureDeliverySystem
{
public:
    int DeliverFurniture(const string& furnitureType, int quantity);
};

class MebelFacade
{
private:
    FurnitureStock* _furnitureStock;
    FurnitureSalesSystem* _furnitureSalesSystem;
    FurnitureDeliverySystem* _furnitureDeliverySystem;

public:
    MebelFacade();
    int ProcessOrder(const string& furnitureType, int quantity);
    ~MebelFacade();
};

#endif 
