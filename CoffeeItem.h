#include "MenuItem.h"
#include "Modifier.h"
#include <map>

#pragma once


class CoffeeItem : public MenuItem {

   public:

   std::map<std::string, float> size;
};