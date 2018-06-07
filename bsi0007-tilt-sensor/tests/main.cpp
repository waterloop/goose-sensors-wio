#include <Cosa/Trace.hh>
#include <Cosa/UART.hh>

#include "tilt/BSI0007.h"

using namespace wlp;

auto sensor = BSI0007::TiltSensor(Board::A0);

void setup() {
    uart.begin(9600);
    trace.begin(&uart);
    sensor.begin();
}

void loop() {
    trace << "\r";  // Move cursor to start of line
    trace << sensor.read_value() << "° tilt";
    delay(100);
}
