# Larmsystem
boilerroom 7 kurs2


Kund.h + Kund.cpp

Användare.h + Användare.cpp

larmSystem.h + larmSystem.cpp

Komponent.h + Komponent.cpp

dataBas.h + dataBas.cpp

Utils.h + Utils.cpp

Larm.json




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
    


### System Requirement Specification (SRS)  
**Project Name**: Modular Alarm Management System   
**Date**: 2024-12-02  

---

#### 1. **Introduction**  

##### 1.1 **Purpose**  
Säkerhetsföretaget behöver ett konsolbaserat system för att hantera installationer och administration av larmsystem i kunders lokaler. Systemet ska vara modulärt och stödja både NoSQL- och SQL-databaser, där databastypen väljs vid installationen.  

##### 1.2 **Scope**  
Systemet ska:  
- Registrera kunder, användare, larmsystem och deras komponenter.  
- Stödja aktivering och deaktivering av larm samt test av larmsystem.  
- Säkerställa att all data lagras i en central databas.  
- Tillhandahålla ett gränssnitt för att hantera larmhändelser och verifiering.  

##### 1.3 **Definitions, Acronyms, and Abbreviations**  
- **SQL**: Structured Query Language, en relationsdatabas.  
- **NoSQL**: Icke-relationella databaser, exempelvis JSON-baserade databaser.  
- **RFID**: Radio-Frequency Identification.  

##### 1.4 **Overview**  
Systemet ska vara flexibelt, modulärt och användarvänligt. Det ska leverera ett robust gränssnitt för larminstallatörer och operatörer att utföra sina uppgifter effektivt.  

---

#### 2. **System Description**  

##### 2.1 **Functional Requirements**  
- **Kundhantering**:  
  - Registrera nya kunder med namn, adress och kopplade larmsystem.  
- **Användarhantering**:  
  - Skapa användare med unikt ID, sifferkod, RFID-tag och verifieringsfras.  
- **Larmkomponenthantering**:  
  - Registrera larmsystemets komponenter (typ, namn, ID).  
- **Testfunktioner**:  
  - Simulera larm och logga resultaten.  
- **Larmaktivering och avaktivering**:  
  - Kräv verifieringsfras för att stänga av ett aktivt larm.  
- **Databashantering**:  
  - Initialt stödja antingen NoSQL (JSON) eller SQL (t.ex. SQLite, MySQL).  

##### 2.2 **Non-Functional Requirements**  
- **Modularitet**: Systemet ska kunna växla mellan NoSQL och SQL vid installation.  
- **Prestanda**: Systemet ska hantera upp till 10 kunder och 100 larmsystemskomponenter.  
- **Säkerhet**:  
  - Endast behöriga användare ska få åtkomst till databasen.  

##### 2.3 **Assumptions and Dependencies**  
- Programmet körs i en miljö som stödjer C++ och kan hantera valda databaser.  
- NoSQL-lösningen bygger på JSON-filer, och SQL-lösningen använder SQLite som standard.  

---

#### 3. **System Architecture**  

##### 3.1 **High-Level Design**  
- **Komponenter**:  
  1. Konsolbaserat gränssnitt.  
  2. Databasmodul (plugin för NoSQL/SQL).  
  3. Logik för larmhantering (aktivering, avaktivering, test).  

##### 3.2 **Data Flow**  
- Användaren interagerar med gränssnittet → Kommandon skickas till databasmodulen → Data hämtas och sparas enligt användarens input.  

---

#### 4. **Implementation Plan**  

##### 4.1 **Phases**  
1. **Gränssnitt och grundläggande funktioner**  
   - Kund- och användarregistrering.  
   - Larmkomponenthantering.  
2. **Databasmodul**  
   - Implementera JSON-baserad databas.  
   - Implementera SQL-baserad databas.  
3. **Test och larmfunktionalitet**  
   - Test av larmsystem.  
   - Hantera skarpa larm.  
4. **Modularisering**  
   - Låt systemet välja databas vid installation.  

##### 4.2 **Tools**  
- **Programmeringsspråk**: C++  
- **Bibliotek**:  
  - För JSON: `nlohmann/json`  
  - För SQL: `SQLiteCpp`  
- **Databashanteringsverktyg**: 
- DBeaver för SQLite 

---

#### 5. **Testing and Validation**  

##### 5.1 **Unit Testing**  
- Verifiera alla grundfunktioner (registrering, lagring och hämtning av data).  

##### 5.2 **Integration Testing**  
- Säkerställ att alla moduler (gränssnitt, logik och databas) fungerar tillsammans.  

##### 5.3 **System Testing**  
- Testa prestanda och skalbarhet.  
- Testa säkerhetsfunktioner för lagring av känslig data.  

##### 5.4 **User Acceptance Testing (UAT)**  
- Validera att systemet uppfyller alla krav i samråd med säkerhetsföretaget.  

---

#### 6. **Maintenance**  

- Uppdateringar för nya komponenttyper och larmhändelser.  
- Möjlighet att migrera data till andra databassystem vid framtida behov.  

---
