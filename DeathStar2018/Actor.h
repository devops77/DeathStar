
#ifndef ACTOR_H
#define ACTOR_H

#include <Arduino.h>
#include <Adafruit_NeoPixel.h>


/**
  * class Actor
  * 
  */

class Actor
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Actor ();

  /**
   * Empty Destructor
   */
  virtual ~Actor ();

  // Static Public attributes
  //  

  // Public attributes
  //  


  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  



  /**
   * use to set
   * @param  lights
   * @param  numberOfLights
   * @param  newColor
   */
  void setLights (int  lights, int numberOfLights, NeoPixelColor newColor)
  {
  }


  /**
   * takes integer that describes the seen
   * 
   * @param  newSceen
   */
  void setSceen (   unint8_t newSceen)
  {
  }


  /**
   * will cause the actor to change seen and do other stuff
   * todo:
   *    * force all lights off
   *    * set seen value
   *    *
   * 
   */
  void changeSceen ()
  {
  }


  /**
   * this is what gets called every so often maybe every 5 ms??
   */
  virtual void run ()
  {
  }


  /**
   * called when it is time to do something
   * based on sine calls other updades  Case Sceen::Tie1Explodes doTieEsxplodes seen
   */
  void update ()
  {
  }

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

  uint8_t sceen;
  uint32_t nextUpdate;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of sceen
   * @param new_var the new value of sceen
   */
  void setSceen (uint8_t new_var)   {
      sceen = new_var;
  }

  /**
   * Get the value of sceen
   * @return the value of sceen
   */
  uint8_t getSceen ()   {
    return sceen;
  }

  /**
   * Set the value of nextUpdate
   * @param new_var the new value of nextUpdate
   */
  void setNextUpdate (uint32_t new_var)   {
      nextUpdate = new_var;
  }

  /**
   * Get the value of nextUpdate
   * @return the value of nextUpdate
   */
  uint32_t getNextUpdate ()   {
    return nextUpdate;
  }
private:


  void initAttributes () ;

};

#endif // ACTOR_H
