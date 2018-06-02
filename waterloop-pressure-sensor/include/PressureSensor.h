#ifndef GOOSE_SENSORS_PRESSURE_SENSOR_H
#define GOOSE_SENSORS_PRESSURE_SENSOR_H

#include <AnalogPinSensor.h>

namespace wlp {
    class PressureSensor: public AnalogPinSensor {
    public:
        explicit PressureSensor(Board::AnalogPin analog_pin)
        : AnalogPinSensor(analog_pin) {};
        double read_value();
    };
}

#endif //GOOSE_SENSORS_PRESSURE_SENSOR_H
