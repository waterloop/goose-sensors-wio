#include "TemperatureSensor.h"

using namespace wlp::TMP36;

#define DEGREES_PER_VOLT 100
#define VOLTAGE_OFFSET 0.5  // 0°C is achieved at 0.5 V

double TemperatureSensor::read_value() {
    return read_voltage_scaled(DEGREES_PER_VOLT, VOLTAGE_OFFSET);
}
