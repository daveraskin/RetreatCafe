#include <string>
#include <vector>
#include <iostream>
#include <fstream>
#include "MenuItem.h"

class Cafe {
   /**
    *    Initializer method which reads in the menu from the menu text file and
    *    populates the Menu vector with pointers to MenuItem objects.
    */ 
   void init(ifstream& menuFile);

   std::vector<MenuItem*> Menu;

   public:
   /**
    *    Constructor for the cafe class
    */ 
   Cafe();

   /**
    *    Constructor for the cafe class that accepts an ifstream object
    *    that can be handed to the init method to initialize today's menu.
    */ 
   Cafe(ifstream& menuFile) {
      init(menuFile)
   }

   /**
    *    printMenu method that will display a formatted menu to the
    *    user.
    */ 
   std::string printMenu();

   void placeOrder();





};