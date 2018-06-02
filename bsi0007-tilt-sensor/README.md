# Tilt sensor model BSI R65K0-XB-MX360-S115

This sensor measures the angle of its inclination with respect to the vertical (_y_) axis
and outputs current proportional to said angle, which is then converted to a value in the (-180°, 180°)
range, accurate to within 0.25° per documentation. The following diagram shows the necessary wiring:

![diagram](https://user-images.githubusercontent.com/24684698/38117471-36b8dfa4-3383-11e8-8700-506ebe9f09c4.png)

If no 250Ω resistor is available, a smaller value resistor can be used as a shunt.
The `RSHUNT` has to be set to the appropriate value in `R65K0.h` in this case.
A larger value resistor is inadvisable: Arduino analog pins expect no more than 5V,
and `20mA * R > 20mA * 250Ω = 5V` if `R > 250Ω`.


Notes:
1. The sensor must be mounted on a strictly vertical surface, connector down, for accurate readings. 
2. High acceleration or strong vibration will decrease accuracy.
3. Calibration (for the case when the sensor is mounted on a slanted surface) is possible, but not implemented.
   Shorting pin on the connector 6 while powered is sufficient.
