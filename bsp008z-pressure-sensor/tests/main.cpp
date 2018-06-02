#include <Cosa/Trace.hh>
#include <Cosa/UART.hh>

#include "PressureSensor.h"

using namespace wlp;

void setup() {
    uart.begin(9600);
    trace.begin(&uart);
}

void loop() {
    static auto sensor = PressureSensor(Board::A0);

    trace << "\r";  // Move cursor to start of line
    trace << sensor.read_value() << " bar";
    delay(100);
}
