#include <windows.h>

int WINAPI WinMain(
    _In_ HINSTANCE hInstance,
    _In_opt_ HINSTANCE hPrevInstance,
    _In_ LPSTR lpCmdLine,
    _In_ int nShowCmd)
{
    INPUT input[1]{};
    input[0].type = INPUT_KEYBOARD;
    input[0].ki.wVk = VK_MEDIA_PLAY_PAUSE;
    SendInput(_countof(input), input, sizeof(INPUT));
    return 0;
}
