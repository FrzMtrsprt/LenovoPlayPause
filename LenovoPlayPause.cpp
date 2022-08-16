#include "windows.h"
int WINAPI wWinMain(
	_In_ HINSTANCE hInstance,
	_In_opt_ HINSTANCE hPrevInstance,
	_In_ LPWSTR lpCmdLine,
	_In_ int nShowCmd)
{
	INPUT input{};
	input.type = INPUT_KEYBOARD;
	input.ki.dwFlags = 0;
	input.ki.wVk = VK_MEDIA_PLAY_PAUSE;
	SendInput(1, &input, sizeof(INPUT));
	return 0;
}
