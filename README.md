# LenovoPlayPause
Map the user-defined key to Play / Pause key on Lenovo laptops, with no flashing console window.

## Usage

> [!IMPORTANT]
> In recent Thinkpad drivers, Lenovo has disabled the ability to select any executable file. To be able to select `LenovoPlayPause.exe`, you need to add it to the start menu by creating a shortcut of it in `C:\ProgramData\Microsoft\Windows\Start Menu\Programs`.

### Lenovo Keyboard Manager
1. Download `LenovoPlayPause.exe` from [releases](https://github.com/FrzMtrsprt/LenovoPlayPause/releases)
2. Open Control Panel, and navigate to `System and Security` -> `Lenovo - Keyboard Manager`
3. Open Lenovo Keyboard Manager, and go to the `User-defined key` tab
4. Choose `Add File`, and select `LenovoPlayPause.exe`
> [!NOTE]
> If you don't see `Lenovo - Keyboard Manager` in Control Panel, or if there isn't a `User-defined key` tab in Lenovo Keyboard Manager, reinstall [`Hotkey Features Integration`](https://support.lenovo.com/us/en/downloads/ds029026).
### Lenovo Vantage  
> Not recommended - bloatware warning
1. Download `LenovoPlayPause.exe` from [releases](https://github.com/FrzMtrsprt/LenovoPlayPause/releases)
2. Open Lenovo Vantage, and go to the `User-defined Key` section
3. Choose `Open Files`, and select `LenovoPlayPause.exe`

## Compilation
1. Clone the repository
2. Open the project in Visual Studio
3. Compile & run
