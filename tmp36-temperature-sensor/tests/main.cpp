#include <Cosa/Trace.hh>
#include <Cosa/UART.hh>

#include "TMP36.h"

using namespace wlp;

void setup() {
    uart.begin(9600);
    trace.begin(&uart);
}

void loop() {
    static auto sensor = TMP36::TemperatureSensor(Board::A0);

    trace << "\r";  // Move cursor to start of line
    trace << sensor.read_value() << "°C";
    delay(100);
}
