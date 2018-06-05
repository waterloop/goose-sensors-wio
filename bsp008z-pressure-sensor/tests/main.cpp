#include <Cosa/Trace.hh>
#include <Cosa/UART.hh>

#include "pressure/BSP008Z.h"

using namespace wlp;

void setup() {
    uart.begin(9600);
    trace.begin(&uart);
}

void loop() {
    static auto sensor = BSP008Z::PressureSensor(Board::A0);

    trace << "\r";  // Move cursor to start of line
    trace << sensor.read_value() << " bar";
    delay(100);
}
