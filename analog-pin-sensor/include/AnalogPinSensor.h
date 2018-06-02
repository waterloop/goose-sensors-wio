#ifndef GOOSE_SENSORS_ANALOGPINSENSOR_H
#define GOOSE_SENSORS_ANALOGPINSENSOR_H

#include <Cosa/AnalogPin.hh>

using ::Board;

#ifdef MOCK
#define AnalogPin MockAnalogPin
#endif

#define VOLTAGE_SCALE 5.0/1023.0  // 0..1023 as returned by sample() -> 0..5 V
#define VOLTAGE_EPSILON 0.005  // Reading precision, in V

namespace wlp {
    class AnalogPinSensor {
    public:
        explicit AnalogPinSensor(AnalogPin analog_pin)
            : analog_pin(analog_pin) {}
        void begin();
        void sleep();
        double read_value();
    protected:
        double read_voltage();
    private:
        AnalogPin analog_pin;
    };
}

#endif // GOOSE_SENSORS_ANALOGPINSENSOR_H
