# Goose Sensors
This repository contains code for all the sensors used on Waterloop's Goose Hyperloop pods.

Sensor code is for `AVR` platform and is written using [`Cosa`](https://github.com/mikaelpatel/Cosa) SDK. All of the sensors in this repo are [`wio`](https://github.com/waterloop/wio) packages. This allows for each sensor to be included as a dependendency in another `wio` projects.

## Contributing
Development of sensor code requires:
* `cmake`
* `avr-gcc` (linux and macOS) or Arduino SDK (Windows)
* `wio`

To learn more about `wio`, visit it's [github page](https://github.com/waterloop/wio). There is a detailed tutorial on how to get the tool and all the toolchain files to get started with `AVR` development.

`master` branch is protected by default and will not accept any commits. You will have to fork the repo and make Pull Request to the `master` branch. This will then be reviewed and handled accordingly.

Create a `wio` package inside the repository and put all the code for that specific sensor there. `include` directory will contain all the public headers and `src` directory will contain rest of the code. You are required to write a test in `tests` directory. Your package is automatically included by `wio` as a dependency when you are testing and you can call the package just how others will call it when they will include this sensor as a dependency.
