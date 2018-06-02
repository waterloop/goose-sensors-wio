#ifndef BSP008Z_PRESSURE_SENSOR_H
#define BSP008Z_PRESSURE_SENSOR_H

#include <AnalogPinReader.h>

namespace wlp {
    namespace BSP008Z {
        class PressureSensor: public AnalogPinReader {
        public:
            explicit PressureSensor(Board::AnalogPin analog_pin)
            : AnalogPinReader(analog_pin) {};
            virtual double read_value() override;
        };
    }
}

#endif // BSP008Z_PRESSURE_SENSOR_H
