// 03_Introduction2CLR.cpp: �D�n�M���ɡC

#include "stdafx.h"

using namespace System;

int main(array<System::String ^> ^args)
{
	System::String^ str = String::Empty;
	str = "Hello the CLR world";
	Console::Write("{0}{1}", str, "!"); //�g��������
	Console::Write(Environment::NewLine);		// ����


	array<int>^ arr = { 5, 3, 4, 7, 9 };
	//int a[] = {5,3,4,7,9};

	Console::WriteLine("�Ƨǫe"); //�g�����ᴫ��
	for (int i = 0; i < arr->Length; i++)	// �}�C���ץi�H��arr->Length���D
	{
		Console::Write(arr[i]);
		Console::Write(" ");
	}

	Array::Sort(arr);	// �Q��Array::Sort()�Ƨ�

	Console::WriteLine("\n" + "�Ƨǫ�");
	for (int i = 0; i < arr->Length; i++)	// �}�C���ץi�H��arr->Length���D
	{
		Console::Write(arr[i]);
		Console::Write(" ");
	}

	// �إ�2���}�C(����k���వ�������}�C, ������}���}�C)
	// �إ�3�C, 5�檺�}�C
	Console::WriteLine("\n�إ�3�C, 5�檺�}�C");
	array<int, 2>^ two_dimensional_array = gcnew array<int, 2>(3, 5);
	for (int i = 0; i < two_dimensional_array->GetLength(0); i++)
	{
		for (int j = 0; j < two_dimensional_array->GetLength(1); j++)
		{
			two_dimensional_array[i, j] = (i + 1)*(j + 1);
			// �榡�ƿ�X�\��: �z�LMSDN�d�� Double.ToString(String) ��k
			Console::Write(two_dimensional_array[i, j].ToString("0.000") + " ");
		}
		Console::WriteLine("");
	}

	// �t�@�ئh���}�C�g�k(����Native C++���@�k, �i�H���������}�C)
	array< array<int>^ >^ two_dimensional_array2 = gcnew array< array<int>^ >(3);

	Console::Read(); //system("pause");
	return 0;
}
