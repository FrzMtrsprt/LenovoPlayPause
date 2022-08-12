# LenovoPlayPause
Map `Fn + F12` to Play / Pause key on Lenovo Laptops, with no flashing console window.

## Usage
- Download `LenovoPlayPause.exe` from [releases](https://github.com/FrzMtrsprt/LenovoPlayPause/releases)
- Open Lenovo Vantage, and navigate to the `User-defined Key` section
- Choose `Open Files`, and select `LenovoPlayPause.exe`

## Compilation
`gcc play_pause.cpp -o play_pause.exe -mwindows`

The `-mwindows` parameter generates executables without console.
