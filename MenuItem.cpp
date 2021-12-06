#include "MenuItem.h"
#include <string>

 MenuItem(int id, float price, std::string detailedName, 
               std::string kitchenName, std::vector<Modifier> options) :
               idNumber(id), price(price), detailedName(detailedName),
               kitchenName(kitchenName){

               }