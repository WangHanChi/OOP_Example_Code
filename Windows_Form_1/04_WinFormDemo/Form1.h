#pragma once

namespace My04_WinFormDemo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Form1 的摘要
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: 在此加入建構函式程式碼
			//
		}

	protected:
		/// <summary>
		/// 清除任何使用中的資源。
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  Messge_btn;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->Messge_btn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(106, 112);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(106, 168);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// Messge_btn
			// 
			this->Messge_btn->Location = System::Drawing::Point(80, 11);
			this->Messge_btn->Name = L"Messge_btn";
			this->Messge_btn->Size = System::Drawing::Size(128, 95);
			this->Messge_btn->TabIndex = 2;
			this->Messge_btn->Text = L"My button";
			this->Messge_btn->UseVisualStyleBackColor = true;
			this->Messge_btn->Click += gcnew System::EventHandler(this, &Form1::Messge_btn_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 262);
			this->Controls->Add(this->Messge_btn);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)
	{
				 // sender表示觸發事件的物件
				 // e表示事件的參數
				 //Button^ btn = safe_cast<Button^>(sender);
				 //MessageBox::Show(btn->Text);

				 MessageBox::Show("按一下");
				 MessageBox::Show("按一下", "提示");
				 MessageBox::Show("按一下", "提示", MessageBoxButtons::OKCancel);
				 MessageBox::Show("按一下", "提示", MessageBoxButtons::YesNo, MessageBoxIcon::Information);

				 if (MessageBox::Show("是否觸發Yes", "提示", MessageBoxButtons::YesNoCancel, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
				 {
					 MessageBox::Show("按一下");
				 }
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Close();

	}
	private: System::Void Messge_btn_Click(System::Object^  sender, System::EventArgs^  e) {
	}
};
}

