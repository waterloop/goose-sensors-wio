#include <Cosa/Trace.hh>
#include <Cosa/UART.hh>

#include "pressure/BSP008Z.h"

using namespace wlp;

auto sensor = BSP008Z::PressureSensor(Board::A0);

void setup() {
    uart.begin(9600);
    trace.begin(&uart);
    sensor.begin();
}

void loop() {
    trace << "\r";  // Move cursor to start of line
    trace << sensor.read_value() << " bar";
    delay(100);
}
