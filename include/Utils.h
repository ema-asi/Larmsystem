#ifndef UTILS_H
#define UTILS_H

#include <iostream>
#include <string>

class Utils
{

public:
bool validateinput(std::string input);
bool formatoutput(std::string output);
void logmessage(std::string message);

private: 

std::string logger;

};







#endif // UTILS_H