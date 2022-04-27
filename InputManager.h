#pragma once
//#include <minwindef.h>
struct XInputGamePadData
{
	unsigned int buttons;

};








class InputManager
{
private:
	InputManager();
public:
	static void CreateInstance();
	static InputManager* GetInstance();
	static void DeleteInstance();

	bool Initialize();
	void Update();



private:
	static InputManager* m_pInst;
public:

};