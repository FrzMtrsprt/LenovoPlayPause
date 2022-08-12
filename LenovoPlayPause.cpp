#include "windows.h"
int main()
{
    INPUT input;
    input.type = INPUT_KEYBOARD;
    input.ki.dwFlags = 0;
    input.ki.wVk = VK_MEDIA_PLAY_PAUSE;
    SendInput(1, &input, sizeof(INPUT));
    return 0;
}
