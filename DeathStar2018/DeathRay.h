
#ifndef DEATHRAY_H
#define DEATHRAY_H
#include "TieFighter.h"

#include <string>

/**
  * class DeathRay
  * 
  */

class DeathRay : public TieFighter
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  DeathRay ();

  /**
   * Empty Destructor
   */
  virtual ~DeathRay ();

  // Static Public attributes
  //  

  // Public attributes
  //  


  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  


protected:

  // Static Protected attributes
  //  

  // Protected attributes
  //  

public:


  // Protected attribute accessor methods
  //  

protected:

public:


  // Protected attribute accessor methods
  //  

protected:


private:

  // Static Private attributes
  //  

  // Private attributes
  //  

  short int new_attribute;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of new_attribute
   * @param new_var the new value of new_attribute
   */
  void setNew_attribute (short int new_var)   {
      new_attribute = new_var;
  }

  /**
   * Get the value of new_attribute
   * @return the value of new_attribute
   */
  short int getNew_attribute ()   {
    return new_attribute;
  }
private:


  void initAttributes () ;

};

#endif // DEATHRAY_H
