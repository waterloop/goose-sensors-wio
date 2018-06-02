#include "AnalogPinReader.h"

using namespace wlp;

/* Read raw voltage on pin (range 0...5 V) */
double AnalogPinReader::read_voltage_raw() {
    return analog_pin.sample() * VOLTAGE_SCALE;
}

/* Shift voltage by given bias, then scale.
** For example, bias = 2.5 and scale = 100 will output 0
** when raw voltage is 2.5 V and 100 when raw voltage is 3.5 V.
*/
double AnalogPinReader::read_voltage_scaled(double scale, double bias) {
    return (read_voltage_raw() - bias) * scale;
}

double AnalogPinReader::read_value() {
    return read_voltage_raw();
}

void AnalogPinReader::begin() {
    analog_pin.powerup();
}

void AnalogPinReader::sleep() {
    analog_pin.powerdown();
}
