// 03_Introduction2CLR.cpp: 主要專案檔。

#include "stdafx.h"

using namespace System;

int main(array<System::String ^> ^args)
{
	System::String^ str = String::Empty;
	str = "Hello the CLR world";
	Console::Write("{0}{1}", str, "!"); //寫完不換行
	Console::Write(Environment::NewLine);		// 換行


	array<int>^ arr = { 5, 3, 4, 7, 9 };
	//int a[] = {5,3,4,7,9};

	Console::WriteLine("排序前"); //寫完之後換行
	for (int i = 0; i < arr->Length; i++)	// 陣列長度可以由arr->Length知道
	{
		Console::Write(arr[i]);
		Console::Write(" ");
	}

	Array::Sort(arr);	// 利用Array::Sort()排序

	Console::WriteLine("\n" + "排序後");
	for (int i = 0; i < arr->Length; i++)	// 陣列長度可以由arr->Length知道
	{
		Console::Write(arr[i]);
		Console::Write(" ");
	}

	// 建立2維陣列(此方法不能做鋸齒狀陣列, 必為方陣的陣列)
	// 建立3列, 5欄的陣列
	Console::WriteLine("\n建立3列, 5欄的陣列");
	array<int, 2>^ two_dimensional_array = gcnew array<int, 2>(3, 5);
	for (int i = 0; i < two_dimensional_array->GetLength(0); i++)
	{
		for (int j = 0; j < two_dimensional_array->GetLength(1); j++)
		{
			two_dimensional_array[i, j] = (i + 1)*(j + 1);
			// 格式化輸出功能: 透過MSDN查詢 Double.ToString(String) 方法
			Console::Write(two_dimensional_array[i, j].ToString("0.000") + " ");
		}
		Console::WriteLine("");
	}

	// 另一種多維陣列寫法(此為Native C++的作法, 可以做鋸齒狀陣列)
	array< array<int>^ >^ two_dimensional_array2 = gcnew array< array<int>^ >(3);

	Console::Read(); //system("pause");
	return 0;
}
