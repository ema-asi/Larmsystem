# Larmsystem
boilerroom 7 kurs2


Kund.h + Kund.cpp

Användare.h + Användare.cpp

larmSystem.h + larmSystem.cpp

Komponent.h + Komponent.cpp

dataBas.h + dataBas.cpp

Utils.h + Utils.cpp

Larm.json


HEJHGEJHLLÅ

// Exempel på en ny databas
    json database = {
        {"customers", json::array()}
    };

    //  Lägg till en kund
    json newCustomer = {
        {"customerId", 1},
        {"name", "John Doe"},
        {"address", "Main Street 123"},
        {"users", json::array({
            {
                {"userId", 1},
                {"code", "1234"},
                {"tagId", "ABC123"},
                {"verificationPhrase", "Blue sky"}
            }
        })},
        {"alarmSystem", {
            {"alarmId", 1},
            {"components", json::array({
                {
                    {"componentId", 1},
                    {"type", "Door switch"},
                    {"name", "Yale Lock"}
                },
                {
                    {"componentId", 2},
                    {"type", "Smoke detector"},
                    {"name", "Nest Smoke"}
                }
            })}
        }}
    };

    database["customers"].push_back(newCustomer);

     Spara databasen
    saveDatabase(database, dbFile);
