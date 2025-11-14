#pragma once
#include <cstdint>

class Sensor{
    public:
    virtual uint32_t ReadValue() = 0; //making sure we dont use unecessary memory
};

class MagSensor : public Sensor {
    private:
    int m_pin;

    public:
    //need a constructor here now
    MagSensor(int m_pin) : m_pin(m_pin){};
    uint32_t ReadValue() override {
    }
};

class Potentiometer : public Sensor {
    private:
    int m_pin;

    public:
    Potentiometer(int m_pin) : m_pin(m_pin){};
    uint32_t ReadValue() override {

    }
};