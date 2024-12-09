#ifndef ALARM_COMPONENT_H
#define ALARM_COMPONENT_H

#include <iostream>
#include <string>

class AlarmComponent
{
private:
int componentID;
std::string type;
std::string name;
public:
    AlarmComponent(int id, const std::string& type, const std::string& name);
    void activate();
    void deactivate();
};













#endif // ALARM_COMPONENT_H