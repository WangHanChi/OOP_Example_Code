#include "TreeView_demo.h"

using namespace TreeView;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	// �إߥD�����ð���
	Application::Run(gcnew  TreeView_demo());
	return 0;
}
