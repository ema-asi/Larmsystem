#ifndef ALARM_SYSTEM_H
#define ALARM_SYSTEM_H
#include "AlarmComponent.h"

class AlarmSystem {
    int alarmId;
public:
    void addComponent(AlarmComponent component);
    bool testSystem();
    void triggerSystem();
};

#endif 

