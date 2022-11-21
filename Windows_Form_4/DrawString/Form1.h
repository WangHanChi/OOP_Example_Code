#pragma once

namespace DrawString {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Drawing::Drawing2D;
	using namespace System::Drawing::Text;

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
	private: System::Windows::Forms::TextBox^  textBox1;
	protected: 
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Button^  button_clear;
	private: System::Windows::Forms::Button^  button_Font;
	private: System::Windows::Forms::FontDialog^  fontDialog1;

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button_clear = (gcnew System::Windows::Forms::Button());
			this->button_Font = (gcnew System::Windows::Forms::Button());
			this->fontDialog1 = (gcnew System::Windows::Forms::FontDialog());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->textBox1->Location = System::Drawing::Point(13, 13);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(576, 35);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::Window;
			this->panel1->Location = System::Drawing::Point(13, 64);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(576, 148);
			this->panel1->TabIndex = 1;
			// 
			// button_clear
			// 
			this->button_clear->Font = (gcnew System::Drawing::Font(L"新細明體", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->button_clear->Location = System::Drawing::Point(596, 13);
			this->button_clear->Name = L"button_clear";
			this->button_clear->Size = System::Drawing::Size(75, 34);
			this->button_clear->TabIndex = 2;
			this->button_clear->Text = L"Clear";
			this->button_clear->UseVisualStyleBackColor = true;
			this->button_clear->Click += gcnew System::EventHandler(this, &Form1::button_clear_Click);
			// 
			// button_Font
			// 
			this->button_Font->Font = (gcnew System::Drawing::Font(L"新細明體", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->button_Font->Location = System::Drawing::Point(596, 119);
			this->button_Font->Name = L"button_Font";
			this->button_Font->Size = System::Drawing::Size(75, 34);
			this->button_Font->TabIndex = 3;
			this->button_Font->Text = L"Font";
			this->button_Font->UseVisualStyleBackColor = true;
			this->button_Font->Click += gcnew System::EventHandler(this, &Form1::button_Font_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(676, 234);
			this->Controls->Add(this->button_Font);
			this->Controls->Add(this->button_clear);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->textBox1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:
		System::Drawing::Font^ font;
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e)
			 {
				 Graphics^ g = panel1->CreateGraphics();
				 // SolidBrush^ brush = gcnew SolidBrush(Color::Blue);
				 
				 Point startPos(0, 0);
				 Point endPos(this->textBox1->Width, this->textBox1->Height);
				 LinearGradientBrush^ brush =
					 gcnew LinearGradientBrush(startPos, endPos, Color::Yellow, Color::Blue);

				 if(font == nullptr)
					 font = gcnew System::Drawing::Font("Arial Black", 64);
				 g->DrawString(textBox1->Text, font, brush, 0, 0);
			 }
	private: System::Void button_clear_Click(System::Object^  sender, System::EventArgs^  e)
			 {
				 textBox1->Text = nullptr;
				 panel1->Invalidate();
			 }
	private: System::Void button_Font_Click(System::Object^  sender, System::EventArgs^  e)
			 {
				 fontDialog1->Font = font;
				 if(fontDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
				 {
					 font = fontDialog1->Font;
					 panel1->Invalidate();
				 }
			 }
};
}

