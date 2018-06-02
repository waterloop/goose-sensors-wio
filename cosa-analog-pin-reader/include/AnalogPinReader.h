#ifndef COSA_ANALOG_PIN_READER_H
#define COSA_ANALOG_PIN_READER_H

#include <Cosa/AnalogPin.hh>

#define VOLTAGE_SCALE 5.0/1023.0  // 0..1023 as returned by sample() -> 0..5 V
#define VOLTAGE_EPSILON 0.005  // Reading precision, in V

namespace wlp {
    class AnalogPinReader {
    public:
        explicit AnalogPinReader(AnalogPin analog_pin)
            : analog_pin(analog_pin) {}
        void begin();
        void sleep();
        virtual double read_value();
    protected:
        double read_voltage_raw();
        double read_voltage_scaled(double scale, double bias = 0.0);
    private:
        AnalogPin analog_pin;
    };
}

#endif // COSA_ANALOG_PIN_READER_H
