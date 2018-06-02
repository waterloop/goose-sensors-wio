#include <Cosa/Trace.hh>
#include <Cosa/UART.hh>

#include "AnalogPinSensor.h"

using namespace wlp;

void setup() {
    uart.begin(9600);
    trace.begin(&uart);
}

void loop() {
    static auto sensor = AnalogPinReader(Board::A0);

    trace << "\r";  // Move cursor to start of line
    trace << sensor.read_value() << " V";
    delay(100);
}
