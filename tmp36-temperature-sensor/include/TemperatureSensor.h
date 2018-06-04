#ifndef TMP36_TEMPERATURE_SENSOR_H
#define TMP36_TEMPERATURE_SENSOR_H

#include <AnalogPinReader.h>

namespace wlp {
    namespace TMP36 {
        class TemperatureSensor: public AnalogPinReader {
        public:
            explicit TemperatureSensor(Board::AnalogPin analog_pin)
            : AnalogPinReader(analog_pin) {};
            double read_value() override;
        };
    }
}

#endif // TMP36_TEMPERATURE_SENSOR_H
