// TC2010CH06_01Menu.cpp: �D�n�M���ɡC

#include "stdafx.h"
#include "myForm.h"

using namespace TC2010CH06_01Menu;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// �إߥ��󱱨���e�A���ҥ� Windows XP ��ı�ƮĪG
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// �إߥD�����ð���
	Application::Run(gcnew Form1());
	return 0;
}
