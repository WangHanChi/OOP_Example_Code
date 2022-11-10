// 00_NET_DEMO_CPPCLI.cpp: 主要專案檔。

#include "stdafx.h"

using namespace System;
using namespace System::IO;

int main(array<System::String ^> ^args)
{
	Console::WriteLine("C++/CLI Version");

	StreamReader^ sr = gcnew StreamReader("D:\Desktop\02 Training Courses\TC2010\TC2010_CH04\TC2010CH04_Form01\00_NET_DEMO_CPPCLI\mandible_RT.csv");
	while(!sr->EndOfStream)
	{
		String^ str = sr->ReadLine();

		Console::WriteLine(str);
	}
	sr->Close();

	Console::Read();
    return 0;
}
