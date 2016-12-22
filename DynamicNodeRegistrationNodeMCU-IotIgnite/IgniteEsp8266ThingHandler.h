#ifndef _INCL_IGNITE_ESP8266THING_HANDLER
#define _INCL_IGNITE_ESP8266THING_HANDLER

#include "IgniteThingHandler.h"
#include "DHT.h"

class IgniteEsp8266ThingHandler : public IgniteThingHandler {


  public :

    IgniteEsp8266ThingHandler();
    ~IgniteEsp8266ThingHandler();
    virtual void thingActionReceived(String thingId, String action);
    virtual void inventorySetup();
    virtual void unknownMessageReceived(String msg);
    static void readDHTTemperature();
    static void readLedData();
    static void readDHTHumidity();
    virtual void setup();



  private :
    String getMacAddress();
    static DHT *dht;
    static bool ledState;
    static long resetStateTime;
    void initBlueLED();
    void initResetButton();
    static void resetOn();
    static void resetOnFinal();
    void setBlueLED(int msg);
};

#endif
