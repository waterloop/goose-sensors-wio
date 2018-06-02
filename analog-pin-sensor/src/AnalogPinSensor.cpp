#include "AnalogPinSensor.h"

using namespace wlp;

double AnalogPinSensor::read_voltage() {
    return analog_pin.sample() * VOLTAGE_SCALE;
}

double AnalogPinSensor::read_value() {
    return read_voltage();
}

void AnalogPinSensor::begin() {
    analog_pin.powerup();
}

void AnalogPinSensor::sleep() {
    analog_pin.powerdown();
}
