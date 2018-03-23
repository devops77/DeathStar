
#ifndef SCEENBASE_H
#define SCEENBASE_H

#include <string>

/**
  * class SceenBase
  * 
  */

class SceenBase
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  SceenBase ();

  /**
   * Empty Destructor
   */
  virtual ~SceenBase ();

  // Static Public attributes
  //  

  // Public attributes
  //  


  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  



  /**
   * called to start a screen as part of sceen change
   */
  virtual void start ()
  {
  }


  /**
   * called by actor, runst the current step
   */
  void run ()
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

  // current and next step
  uint8_t step;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of step
   * current and next step
   * @param new_var the new value of step
   */
  void setStep (uint8_t new_var)   {
      step = new_var;
  }

  /**
   * Get the value of step
   * current and next step
   * @return the value of step
   */
  uint8_t getStep ()   {
    return step;
  }
private:


  void initAttributes () ;

};

#endif // SCEENBASE_H
