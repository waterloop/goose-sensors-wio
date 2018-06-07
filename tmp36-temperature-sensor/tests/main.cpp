#include <Cosa/Trace.hh>
#include <Cosa/UART.hh>

#include "temperature/TMP36.h"

using namespace wlp;

auto sensor = TMP36::TemperatureSensor(Board::A0);

void setup() {
    uart.begin(9600);
    trace.begin(&uart);
    sensor.begin();
}

void loop() {
    trace << "\r";  // Move cursor to start of line
    trace << sensor.read_value() << "°C";
    delay(100);
}
