# Cosa analog pin reader

This is a generic analog pin reader class for Cosa.

Inheriting from this class provides a `read_voltage()`
interface returning a floating point reading in the range 0-5 V.

Sample usage: suppose values in 0.5-5.0 V range need to be read and scaled by 40.
```c++
class YourSensor: public wlp::AnalogPinReader { /* ... */ };

double YourSensor::read_value() {
    double reading0 = (read_voltage_raw() - 0.5) * 40;
    double reading1 = read_voltage_scaled(40) - 40*0.5;
    double reading2 = read_voltage_scaled(40, 0.5);  // Recommended usage
    assert(reading0 == reading1 && reading1 == reading2);
    return reading2;
}
```
