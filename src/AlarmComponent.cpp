#include "AlarmComponent.h"
#include <iostream>

AlarmComponent::AlarmComponent(int id, const std::string& type, const std::string& name)
{
    componentID = id;
    this->type = type;
    this->name = name;
}


void AlarmComponent::deactivate()
{
    std::cout << "Deactivating " << name << "..." << std::endl;
}
void AlarmComponent::activate()
{
    std::cout << "Activating " << name << "..." << std::endl;
}