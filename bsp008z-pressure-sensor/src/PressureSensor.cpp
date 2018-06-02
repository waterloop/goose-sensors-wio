#include "PressureSensor.h"

using namespace wlp::BSP008Z;

#define BAR_PER_VOLT 80 // 400 bar over 5 V

double PressureSensor::read_value() {
    return read_voltage_scaled(BAR_PER_VOLT);
}
