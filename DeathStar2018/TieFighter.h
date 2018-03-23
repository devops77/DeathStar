
#ifndef TIEFIGHTER_H
#define TIEFIGHTER_H
#include "Actor.h"
#include "Actor.h"


/**
  * class TieFighter
  * Need to define
  * #define TieFighterNumbeOfLightsInner 2
  * #define TieFighterNumbeOfLightsOuter 6
  */

class TieFighter : virtual public Actor, virtual public Actor
{

private:
	enum NumberOfLights (TieFighterNumbeOfLightsInner=2, TieFighterNumberOfLightsOuter=4);
	// lights for inner explosion
	uint8_t  innerLights[TieFighterNumbeOfLightsInner];
	uint8_t  outerLightIds[TieFighterNumberOfLightsOuter];

	void initAttributes () ;

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



};

#endif // TIEFIGHTER_H
