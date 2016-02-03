# robgednaut #

[![Flattr this git repo](http://button.flattr.com/flattr-badge-large.png)](https://flattr.com/submit/auto?user_id=kwendenarmo&url=https%3A%2F%2Fgithub.com%2Fakornsys-rdi%2Frobgednaut&title=robgednaut&language=KiCAD&tags=github&category=software "Flattr this git repo")
[![GNU/GPL](https://www.gnu.org/graphics/gplv3-88x31.png)](https://www.gnu.org/licenses/gpl.html "GNU General Public License")

### Robust and easy-to-use introduction-to-robotics platform ###

         ___     _              
        | _ \___| |__  ___ _ _  
        |   / _ \ '_ \/ -_) ' \ 
        |_|_\___/_.__/\___|_||_|
                                

_Robgednaut_ (from **Rob**otic, Rug**ged**, and _-**naut**_ [like 
_astronaut_]), commonly _Roben_, it's a simple hardware platform for the 
introduction to robotics. Use an Arduino Nano to provide four multifunction 
connections. Also has ability to move up to two motors with the replaceable 
driver included. It can be used stand-alone or controlled from a computer, also 
it has numerous protections so you don't have to worry about if you break it!

Robgednaut is free software/hardware. See License Information below.

## Repository Contents ##

-   `/img/`: Graphic resources used --if not told otherwise-- as part of the 
documentation.  
-   `/3d/` 3D design source code.
    *   `/3d/bin/` Files resulting from the compilation of 3D designs (`STL` 
files).  
-   `/brd/` Hardware source code.  
    *    `/brd/bin/` Files resulting from the compilation of hardware (`PDF` 
and Gerber files).  
-   `/src/` Firmware source code.  
    *   `/src/bin/` Files resulting from the compilation of code (`HEX` files).

Robgednaut can be obtained on GitHub:
[Robgednaut](https://github.com/akornsys-rdi/robgednaut "Robgednaut").

## Installation and use ##

_Roben_ is very easy to use! You just need a Arduino Nano with the firmware we 
provide (compatible with firmata) or your own, your _Robgednaut_, and a power 
supply (3 to 32v max). Connect things to their I/O and enjoy making it work!  
It can be managed from Scratch by Firmata gateway, or from your own software.  
> **Warning**: Make sure you have the proper firmware BEFORE you connect your 
> Arduino Nano to _Robgednaut_. Not doing so may damage your Arduino.

#### Pinout ####

|Robgednaut|Arduino|Function|
|---|---|---|
| +V | - | 5v power out |
| GND | GND | Ground |
| A | D2, A7 | Analog input, digital I/O, `INT` |
| B | D3, A6 | Analog input, digital I/O, `INT`, `PWM` |
| C | D13, A4 | Analog input, digital I/O, `SDA`, `SCK` |
| D | D11, A5 | Analog input, digital I/O, `PWM`, `SCL`, `MOSI` |
| 1+ | D8 (en), D10 (`PWM`) | Half H-Bridge 1 output |
| 1- | D7 (en), D5 (`PWM`) | Half H-Bridge 1 output |
| 2+ | D8 (en), D9 (`PWM`) | Half H-Bridge 2 output |
| 2- | D7 (en), D6 (`PWM`) | Half H-Bridge 2 output |
| Internal | D4 | Piezo buzzer |
| Internal | D12 | Red LED |
| Internal | A0 | Yellow LED |
| Internal | A1 | Green LED |
| Internal | A2 | Push button |
| Internal | A3 | Push button |

## License Information ##

Firmware released under
[GNU/GPL](https://www.gnu.org/licenses/gpl.html "GNU General Public License").
See `/src/` folder.

The hardware design is released under
[GNU/GPL](https://www.gnu.org/licenses/gpl.html "GNU General Public License").
See `/brd/` folder.  
Source code hardware is considered any file created and stored by the CAD tool 
with design information. To KiCAD are mainly `SCH`, `NET`, `KICAD_PCB` files 
and associated.  
Binary hardware is considered any file created from source code. To KiCAD they 
are mainly `PDF`, `CSV` files and manufacturing files (e.g. gerber).  
Binary hardware execution is considered any process derived from binary 
hardware, such as manufacturing.

The 3D designs are released under
[GNU/GPL](https://www.gnu.org/licenses/gpl.html "GNU General Public License").
See `/3d/` folder.  
Source code 3D is considered any file created and stored by the CAD tool with 
design information. To OpenSCAD are mainly `SCAD` files.  
Binary 3D is considered any file created from source code. To OpenSCAD they are 
mainly rendering and manufacturing files (e.g. `STL`).  
Binary 3D execution is considered any process derived from binary 3D, such as 
manufacturing.

See the corresponding `COPYING` file.

## Version History ##

Robgednaut uses
[Semantic Versioning](http://semver.org/ "Semantic Versioning").

Robgednaut version 
[v2.0.0](https://github.com/akornsys-rdi/robgednaut/archive/v2.0.0.zip "v2.0.0")
is the latest stable version.

If you are interested, you can view the version history:
[`ChangeLog`](ChangeLog.md)

## Contribute ##

Feel free to submit bugs or patches, feature requests, etc. using
[GitHub issues](https://github.com/akornsys-rdi/robgednaut/issues "GitHub issues")
and
[Pull Requests](https://github.com/akornsys-rdi/robgednaut/pulls "Pull Requests")

You can read the information about the developers:
[`AUTHORS`](AUTHORS.md)


_Last modification: 2016-02-03_  
_This file was automatically generated by KodeUtils 1.0.2_

* * *

Copyright (C) 2015-2016 kwendenarmo. This file is part of Robgednaut

Robgednaut is free software; you can redistribute it and/or modify it under the 
terms of the GNU General Public License as published by the Free Software 
Foundation; either version 3 of the License, or (at your option) any later 
version.

Robgednaut is distributed in the hope that it will be useful, but WITHOUT ANY 
WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A 
PARTICULAR PURPOSE.  See the GNU General Public License for more details

You should have received a copy of the GNU General Public License along with 
this program.  If not, see 
<[http://www.gnu.org/licenses/](http://www.gnu.org/licenses/ "http://www.gnu.org/licenses/")>.
