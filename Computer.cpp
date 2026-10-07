//
// Created by spect on 10/5/2026.
//

#include "Computer.h"

#include <iostream>
#include <utility>


void Peripheral::setConnection(const bool bluetooth)
{
    isBluetooth = bluetooth;
    wiredConnection = "NA";
}

void Peripheral::setConnection(bool bluetooth, const std::string& connection)
{
    isBluetooth = bluetooth;
    wiredConnection = connection;
}

Keyboard::Keyboard(std::string  brand, std::string  layout, std::string  size, const double price)
    : brand(std::move(brand)), layout(std::move(layout)), size(std::move(size)), price(price)
{

}

double Keyboard::getPrice() const
{
    return price;
}

std::string Keyboard::getName() const
{
    return brand;
}

Processor::Processor(std::string  brand, const int generation, const int powerNumber, const int coreNumber, const double price)
    : brand(std::move(brand)), generation(generation), powerNumber(powerNumber), coreNumber(coreNumber), price(price)
{

}

double Processor::getPrice() const
{
    return price;
}

std::string Processor::getName() const
{
    return brand;
}

Computer::Computer(Processor  cpu, Keyboard  keyboard)
    : cpu(std::move(cpu)), keyboard(std::move(keyboard))
{

}

void Computer::print() const
{
    const double computerPrice = calculatePrice();

    std::cout << "With a(n) " << cpu.getName()      << " costing : $" << cpu.getPrice() << "\n";
    std::cout << "CPU specs, generation : " << cpu.getGen() << " , cores : " << cpu.getCore() << " , power : " << cpu.getPow() << "\n";
    std::cout << "With a(n) " << keyboard.getName() << " costing : $" << keyboard.getPrice() << "\n";
    std::cout << "Keyboard specs, layout : " << keyboard.getLayout() << " , size : " << keyboard.getSize() << " , bluetooth : " << keyboard.getWirelessStatus()
     << " , cable : " << keyboard.getWire() << "\n";
    std::cout << "\nAdds up to : $" << computerPrice << "\n\n\n";
}

double Computer::calculatePrice() const
{
    const double processorPrice = cpu.getPrice();

    const double keyboardPrice = keyboard.getPrice();

    const double totalPrice = processorPrice + keyboardPrice;

    return totalPrice;
}
