// 02_MDI.cpp: �D�n�M���ɡC

#include "stdafx.h"
#include "MainForm.h"

using namespace My02_MDI;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// �إߥ��󱱨���e�A���ҥ� Windows XP ��ı�ƮĪG
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// �إߥD�����ð���
	Application::Run(gcnew MainForm());
	return 0;
}
