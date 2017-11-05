#ifndef DEBUGCONSOLE_H
#define DEBUGCONSOLE_H

#include "WifiManager.h"

/**
 * Command line interface for development to interact with the device.
 */
class DebugConsole {
public:

    /**
    * Default constructor.
    */
    DebugConsole(void);

    /**
    * Destructor.
    */
    ~DebugConsole(void);

    /**
    * Register console commands.
    */
    void setup(WifiManager& wifiManager);

    /**
    * Process console input.
    */
    void loop(void);

private:

    /**
    * Private copy constructor.
    */
    DebugConsole(const DebugConsole&);
   
    /**
    * Private assignment constructor.
    */
    DebugConsole& operator=(const DebugConsole&);
};

#endif //DEBUGCONSOLE_H
