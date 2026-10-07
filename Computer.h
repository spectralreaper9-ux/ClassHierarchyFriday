//
// Created by spect on 10/5/2026.
//

#ifndef CLASSRANDOMPROJECT_COMPUTER_H
#define CLASSRANDOMPROJECT_COMPUTER_H

#include <string>


class Peripheral
{
    bool isBluetooth = true;
    std::string wiredConnection;

public:

    Peripheral() = default;

    void setConnection(bool bluetooth);

    void setConnection(bool bluetooth, const std::string& connection);

    [[nodiscard]] bool getWirelessStatus() const {return isBluetooth;}

    [[nodiscard]] std::string getWire() const {return wiredConnection;}
};

class Keyboard : public Peripheral
{
    std::string brand;
    std::string layout;
    std::string size;
    double price = 0.0;

public:

    Keyboard() = default;
    Keyboard(std::string  brand, std::string  layout, std::string  size, double price);

    [[nodiscard]] double getPrice() const;
    [[nodiscard]] std::string getName() const;
    [[nodiscard]] std::string getLayout() const {return layout;}
    [[nodiscard]] std::string getSize() const {return size;}
};

class Processor
{
    std::string brand;
    int generation = 0;
    int powerNumber = 0;
    int coreNumber = 0;
    double price = 0.0;

public:

    Processor() = default;
    Processor(std::string  brand, int generation, int powerNumber, int coreNumber, double price);

    [[nodiscard]] double getPrice() const;
    [[nodiscard]] std::string getName() const;
    [[nodiscard]] int getGen() const {return generation;}
    [[nodiscard]] int getPow() const {return powerNumber;}
    [[nodiscard]] int getCore() const {return coreNumber;}
};

class Computer
{
    Processor cpu;
    Keyboard keyboard;

public:

    Computer() = default;

    Computer(Processor  cpu, Keyboard  keyboard);

    void print() const;

    [[nodiscard]] double calculatePrice() const;
};


#endif //CLASSRANDOMPROJECT_COMPUTER_H
