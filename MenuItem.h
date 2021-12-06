#include <string>
#include <vector>
#include "Modifier.h"

class MenuItem {
   
   public:

      MenuItem();

      MenuItem(int id, float price, std::string detailedName, 
               std::string kitchenName, std::vector<Modifier> options);

      int idNumber;
      float price;
      std::string detailedName;
      std::string kitchenName;
      std::vector<Modifier> options;
};