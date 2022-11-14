// 02_MDI.cpp: 主要專案檔。

#include "stdafx.h"
#include "MainForm.h"

using namespace My02_MDI;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// 建立任何控制項之前，先啟用 Windows XP 視覺化效果
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// 建立主視窗並執行
	Application::Run(gcnew MainForm());
	return 0;
}
