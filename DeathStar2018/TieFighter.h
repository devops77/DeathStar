
#ifndef TIEFIGHTER_H
#define TIEFIGHTER_H
#include "Actor.h"
#include "Actor.h"

#include <string>

/**
  * class TieFighter
  * Need to define
  * #define TieFighterNumbeOfLightsInner 2
  * #define TieFighterNumbeOfLightsOuter 6
  */

class TieFighter : virtual public Actor, virtual public Actor
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  TieFighter ();

  /**
   * Empty Destructor
   */
  virtual ~TieFighter ();

  // Static Public attributes
  //  

  // Public attributes
  //  


  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  



  /**
   * to do: check for more than array size
   * @param  index zerobased index into arry of lights
   * @param  lightId zero based possition in NeoPixel  strip or circle
   */
  void setLigntIdsOuter (uint8_t index, uint8_t lightId)
  {
  }


  /**
   * to do: check for more than array size
   * @param  index zerobased index into arry of lights
   * @param  lightId zero based possition in NeoPixel  strip or circle
   */
  void setLigntIdsInner (uint8_t index, uint8_t lightId)
  {
  }


  /**
   * this is call as part of main loop
   * Switch on script then call script run
   */
  void run ()
  {
  }


  /**
   * use switch to on Screen Class to update CurrentSceen pointer
   * then call sceen start
   */
  void changeSceen ()
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

  // lights for inner explosion
  uint8_t  innerLights[TieFighterNumbeOfLightsInner];
  uint8_t  outerLightIds[TieFighterNumberOfLightsOuter];
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of innerLights
   * lights for inner explosion
   * @param new_var the new value of innerLights
   */
  void setInnerLights (uint8_t  new_var[TieFighterNumbeOfLightsInner])   {
      *innerLights = *new_var;
  }

  /**
   * Get the value of innerLights
   * lights for inner explosion
   * @return the value of innerLights
   */
  uint8_t * getInnerLights ()   {
    return innerLights;
  }

  /**
   * Set the value of outerLightIds
   * @param new_var the new value of outerLightIds
   */
  void setOuterLightIds (uint8_t  new_var[TieFighterNumberOfLightsOuter])   {
      *outerLightIds = *new_var;
  }

  /**
   * Get the value of outerLightIds
   * @return the value of outerLightIds
   */
  uint8_t * getOuterLightIds ()   {
    return outerLightIds;
  }
private:


  void initAttributes () ;

};

#endif // TIEFIGHTER_H
