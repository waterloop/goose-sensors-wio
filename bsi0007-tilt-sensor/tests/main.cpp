#include <Cosa/Trace.hh>
#include <Cosa/UART.hh>

#include "TiltSensor.h"

using namespace wlp;

void setup() {
    uart.begin(9600);
    trace.begin(&uart);
}

void loop() {
    static auto sensor = TiltSensor(Board::A0);

    trace << "\r";  // Move cursor to start of line
    trace << sensor.read_value() << "° tilt";
    delay(100);
}
