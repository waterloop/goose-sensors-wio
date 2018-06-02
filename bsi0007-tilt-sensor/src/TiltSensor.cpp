#include "TiltSensor.h"

using namespace wlp::BSI0007;

#define RSHUNT 250.0 // in Ohms
// 0 degrees at current Ic = 4mA + (20mA - 4mA)/2, voltage Vc = Ic * Rshunt
#define CENTER_OFFSET (0.012 * RSHUNT)
// 360 degrees over entire range, which is (20mA - 4mA) * Rshunt
#define DEGREES_PER_VOLT 360.0 / (0.016 * RSHUNT)

double TiltSensor::read_value() {
    return read_voltage_scaled(DEGREES_PER_VOLT, CENTER_OFFSET);
}
