#ifndef GOOSE_SENSORS_TILTSENSOR_H
#define GOOSE_SENSORS_TILTSENSOR_H

#include <AnalogPinReader.h>

namespace wlp {
    class TiltSensor: public AnalogPinReader {
    public:
        explicit TiltSensor(Board::AnalogPin analog_pin)
        : AnalogPinSensor(analog_pin) {};
        double read_value();
    };
}

#endif //GOOSE_SENSORS_TILTSENSOR_H
