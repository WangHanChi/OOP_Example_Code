#pragma once

namespace SlefDesignDialog {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// SelfDesignDlg 的摘要
	/// </summary>
	public ref class SelfDesignDlg : public System::Windows::Forms::Form
	{
	public:
		SelfDesignDlg(int i)
		{
			InitializeComponent();
			//
			//TODO: 在此加入建構函式程式碼
			//
			this->label1->Text += ": " + i.ToString();
		}

	protected:
		/// <summary>
		/// 清除任何使用中的資源。
		/// </summary>
		~SelfDesignDlg()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected: 

	private:
		/// <summary>
		/// 設計工具所需的變數。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 此為設計工具支援所需的方法 - 請勿使用程式碼編輯器
		/// 修改這個方法的內容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"標楷體", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->label1->Location = System::Drawing::Point(12, 99);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(348, 64);
			this->label1->TabIndex = 0;
			this->label1->Text = L"自訂對話盒";
			// 
			// SelfDesignDlg
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(472, 262);
			this->Controls->Add(this->label1);
			this->Name = L"SelfDesignDlg";
			this->Text = L"SelfDesignDlg";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
