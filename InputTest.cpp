// InputTest.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//
#include <stdlib.h>
#include <iostream>
#include <Windows.h>
#include <Xinput.h>
#pragma comment(lib,"xinput.lib")


void XInputTest();

int main()
{
	std::cout << "Hello World!\n";

	while (!GetAsyncKeyState(VK_ESCAPE))
	{
		std::system("cls");
		XInputTest();

		Sleep(100);
	}

}

#define BOOL_TO_STRING(b) b ? "TRUE" : "FALSE"

XINPUT_STATE xiValue;
void XInputTest()
{
	XInputGetState(0, &xiValue);
	std::cout << "bLeftTrigger" << (int)xiValue.Gamepad.bLeftTrigger << std::endl;
	std::cout << "bRightTrigger" << (int)xiValue.Gamepad.bRightTrigger << std::endl;

	bool BT_b, BT_a, BT_y, BT_x, BT_up, BT_down, BT_right, BT_left, BT_r1, BT_l1, BT_r3, BT_l3, BT_start, BT_back;
	BT_b = (xiValue.Gamepad.wButtons & XINPUT_GAMEPAD_B) ? true : false;
	BT_a = (xiValue.Gamepad.wButtons & XINPUT_GAMEPAD_A) ? true : false;
	BT_y = (xiValue.Gamepad.wButtons & XINPUT_GAMEPAD_Y) ? true : false;
	BT_x = (xiValue.Gamepad.wButtons & XINPUT_GAMEPAD_X) ? true : false;
	BT_up = (xiValue.Gamepad.wButtons & XINPUT_GAMEPAD_DPAD_UP) ? true : false;
	BT_down = (xiValue.Gamepad.wButtons & XINPUT_GAMEPAD_DPAD_DOWN) ? true : false;
	BT_right = (xiValue.Gamepad.wButtons & XINPUT_GAMEPAD_DPAD_RIGHT) ? true : false;
	BT_left = (xiValue.Gamepad.wButtons & XINPUT_GAMEPAD_DPAD_LEFT) ? true : false;
	BT_r1 = (xiValue.Gamepad.wButtons & XINPUT_GAMEPAD_RIGHT_SHOULDER) ? true : false;
	BT_l1 = (xiValue.Gamepad.wButtons & XINPUT_GAMEPAD_LEFT_SHOULDER) ? true : false;
	BT_r3 = (xiValue.Gamepad.wButtons & XINPUT_GAMEPAD_RIGHT_THUMB) ? true : false;
	BT_l3 = (xiValue.Gamepad.wButtons & XINPUT_GAMEPAD_LEFT_THUMB) ? true : false;
	BT_start = (xiValue.Gamepad.wButtons & XINPUT_GAMEPAD_START) ? true : false;
	BT_back = (xiValue.Gamepad.wButtons & XINPUT_GAMEPAD_BACK) ? true : false;


	std::cout << "Button B" << BT_b << std::endl;

}