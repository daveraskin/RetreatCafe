#include <string>
#include <vector>

class Modifier {
   public:

      /**
       * @brief Construct a new Modifier object
       * 
       * 
       * @param modName name of this modifier  
       * @param type what itemType this will modify
       */
      Modifier(std::string modName, u_int type);

      /**
       * @brief a public method that allows the cafe to add Options
       * to the options vector
       * 
       * @param name name of this option
       * @param price price increase associated with this option
       */
      void addOption(std::string name, float price);

      /**
       * @brief Exposes a read-only vector of the options for this Mod
       * 
       * @return std::vector<Modifier::ModifierOption*> 
       */
      std::vector<Modifier::ModifierOption*> getOptions() const;
   private:

      std::string name; 
      u_int itemType;

      struct ModifierOption{
         std::string modName;
         float addlPrice;
      };

      std::vector<Modifier::ModifierOption*> options
};