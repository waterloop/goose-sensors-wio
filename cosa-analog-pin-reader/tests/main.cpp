#include <Cosa/Trace.hh>
#include <Cosa/UART.hh>

#include "AnalogPinReader.h"

using namespace wlp;

void setup() {
    uart.begin(9600);
    trace.begin(&uart);
}

void loop() {
    static auto reader = AnalogPinReader(Board::A0);

    trace << "\r";  // Move cursor to start of line
    trace << reader.read_value() << " V";
    delay(100);
}
