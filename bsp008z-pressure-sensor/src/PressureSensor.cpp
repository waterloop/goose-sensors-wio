#include "PressureSensor.h"

using namespace wlp;

#define BAR_PER_VOLT 80 // 400 bar over 5 V

double PressureSensor::read_value() {
    return read_voltage() * BAR_PER_VOLT;
}
