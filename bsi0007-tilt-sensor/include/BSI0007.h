#ifndef BSI0007_TILT_SENSOR_H
#define BSI0007_TILT_SENSOR_H

#include <AnalogPinReader.h>

namespace wlp {
    namespace BSI0007 {
        class TiltSensor: public AnalogPinReader {
        public:
            explicit TiltSensor(Board::AnalogPin analog_pin)
            : AnalogPinReader(analog_pin) {};
            double read_value() override;
        };
    }
}

#endif // BSI0007-TILT_SENSOR_H
