#include <string>
#include <vector>
#include "Modifier.h"

class MenuItem {
   
   public:

      MenuItem();

      MenuItem(int id, float price, std::string detailedName, 
               std::string kitchenName, std::vector<Modifier> options);

      int typeId; // Id number representing what TYPE of item this is 
      int idNumber; // Id number for this particular menu item
      float price; // base price for this menu item
      std::string detailedName; // Full name that appears on the menu
      std::string kitchenName; // Item name that is sent to kitchen printer
};