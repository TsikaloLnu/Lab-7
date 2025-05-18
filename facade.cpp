#include "facade.h"

int FurnitureStock::CheckStock(const string& furnitureType)
{
    if (furnitureType == "Chair") return 100;
    if (furnitureType == "Table") return 50;
    return 0;
}

int FurnitureSalesSystem::SellFurniture(const string& furnitureType, int quantity)
{
    return 20 * quantity; 
}

int FurnitureDeliverySystem::DeliverFurniture(const string& furnitureType, int quantity)
{
    return 5 * quantity; 
}

MebelFacade::MebelFacade()
{
    _furnitureStock = new FurnitureStock();
    _furnitureSalesSystem = new FurnitureSalesSystem();
    _furnitureDeliverySystem = new FurnitureDeliverySystem();
}

int MebelFacade::ProcessOrder(const std::string& furnitureType, int quantity)
{
    int stock = _furnitureStock->CheckStock(furnitureType);
    if (stock < quantity)
    {
        throw std::invalid_argument("Not enough stock for " + furnitureType);
    }

    int salesPrice = _furnitureSalesSystem->SellFurniture(furnitureType, quantity);
    int deliveryCost = _furnitureDeliverySystem->DeliverFurniture(furnitureType, quantity);

    return salesPrice + deliveryCost;
}

MebelFacade::~MebelFacade()
{
    delete _furnitureStock;
    delete _furnitureSalesSystem;
    delete _furnitureDeliverySystem;
}
