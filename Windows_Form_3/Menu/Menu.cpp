// TC2010CH06_01Menu.cpp: 主要專案檔。

#include "stdafx.h"
#include "myForm.h"

using namespace TC2010CH06_01Menu;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// 建立任何控制項之前，先啟用 Windows XP 視覺化效果
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// 建立主視窗並執行
	Application::Run(gcnew Form1());
	return 0;
}
