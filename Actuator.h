#pragma once
#include <cstdint>

class Actuator {
 virtual void SetTarget(uint32_t target) = 0;

};

class LED : public Actuator{
    private:
    int m_pin;

    public:
    LED(int m_pin) : m_pin(m_pin){};
    void SetTarget(uint32_t target) override{

    }
};

class ServoMotor : public Actuator {
    private:
    int m_pin;

    public:
    ServoMotor(int m_pin) : m_pin(m_pin){};
    void SetTarget(uint32_t target) override {
        
    }
};