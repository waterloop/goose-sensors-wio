#include "AnalogPinReader.h"

using namespace wlp;

double AnalogPinReader::read_voltage() {
    return analog_pin.sample() * VOLTAGE_SCALE;
}

double AnalogPinReader::read_value() {
    return read_voltage();
}

void AnalogPinReader::begin() {
    analog_pin.powerup();
}

void AnalogPinReader::sleep() {
    analog_pin.powerdown();
}
