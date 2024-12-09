#include <iostream>
#include "json.hpp"
#include "AlarmComponent.h"
#include "User.h"
#include "Utils.h"
#include "AlarmSystem.h"
#include "DataBase.h"
#include "Customer.h"


using json = nlohmann::json;



int main() {
    Customer customer;
    User user;
    Utils utils;
    Database database;
    AlarmSystem alarmsystem;
    AlarmComponent alarmcomponent;
    Utils message;
    int menuChoice;

    do
    {
        displayMenu();
        std::cin >> menuChoice;
        switch (menuChoice)
        {
        case 1:
          //void addUser();
          customer.addUser(user);
            
            break;

            case 2:
            customer.addAlarmSystem(alarmsystem);

            break;

            case 3:
            
            alarmsystem.addComponent(alarmcomponent);
            
            break;

            case 4:
            alarmcomponent.activate();
            
            break;

            case 5:
            
            alarmsystem.testSystem();
            
            break;

            case 6:
            alarmsystem.triggerSystem();
            break;

            case 7:
            alarmcomponent.deactivate();
            
            break;
            case 8:
            database.disconnect();
            break;
            
            case 9:
            database.connect();
            break;

            case 10:
            utils.logmessage(message);
            break;

            case 11:
            std::cout << "Closing program.\n";
            exit(0);
            break;
        
        default:
        std::cout << "Not a valid option, Please try again.\n";
            
        }
        
        
    } while (menuChoice != 11);
    
}

void displayMenu(){
std::cout << "This is the menu enter your choice:" << std::endl;
std::cout << "1. Add user" << std::endl;
std::cout << "2. Add alarm system" << std::endl;
std::cout << "3. Add component " << std::endl;
std::cout << "4. Activate alarm " << std::endl;
std::cout << "5. Test system " << std::endl;
std::cout << "6. Trigger system " << std::endl;
std::cout << "7. Deactivate alarm " << std::endl;
std::cout << "8. Disconnect database" << std::endl;
std::cout << "9. Connect database " << std::endl;
std::cout << "10. View logmessages " << std::endl;
std::cout << "11. Exit" << std::endl;
}