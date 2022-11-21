#pragma once

namespace GDIPlus {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Drawing::Drawing2D;

	/// <summary>
	/// DesignPen 的摘要
	/// </summary>
	public ref class DesignPen : public System::Windows::Forms::Form
	{
	public:
		Pen^ myPen;
	public:
		DesignPen(Pen^ pen)
		{
			InitializeComponent();
			//
			//TODO: 在此加入建構函式程式碼
			//
			myPen = pen;

			this->panel1->BackColor = myPen->Color;
			numericUpDown1->Value = Convert::ToInt32(myPen->Width);

			switch(myPen->DashStyle)
			{
			case DashStyle::Solid:
				comboBox1->Text = "Solid";
				break;
			case DashStyle::Dash:
				comboBox1->Text = "Dash";
				break;
			case DashStyle::DashDot:
				comboBox1->Text = "SolidDashDot";
				break;
			case DashStyle::DashDotDot:
				comboBox1->Text = "DashDotDot";
				break;
			case DashStyle::Dot:
				comboBox1->Text = "Dot";
				break;
			}
		}

	protected:
		/// <summary>
		/// 清除任何使用中的資源。
		/// </summary>
		~DesignPen()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected: 
	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::ColorDialog^  colorDialog1;
	private: System::Windows::Forms::Button^  btn_OK;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label3;

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
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->btn_OK = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(20, 51);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(72, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"畫筆粗細";
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(141, 49);
			this->numericUpDown1->Margin = System::Windows::Forms::Padding(4);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {10, 0, 0, 0});
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(180, 27);
			this->numericUpDown1->TabIndex = 1;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &DesignPen::numericUpDown1_ValueChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(20, 116);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(72, 16);
			this->label2->TabIndex = 2;
			this->label2->Text = L"畫筆色彩";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::Window;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Location = System::Drawing::Point(141, 110);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(180, 22);
			this->panel1->TabIndex = 3;
			this->panel1->Click += gcnew System::EventHandler(this, &DesignPen::panel1_Click);
			// 
			// colorDialog1
			// 
			this->colorDialog1->Color = System::Drawing::Color::White;
			// 
			// btn_OK
			// 
			this->btn_OK->DialogResult = System::Windows::Forms::DialogResult::OK;
			this->btn_OK->Location = System::Drawing::Point(155, 248);
			this->btn_OK->Name = L"btn_OK";
			this->btn_OK->Size = System::Drawing::Size(75, 23);
			this->btn_OK->TabIndex = 4;
			this->btn_OK->Text = L"OK";
			this->btn_OK->UseVisualStyleBackColor = true;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) {L"Solid", L"Dash", L"DashDot", L"DashDotDot", L"Dot"});
			this->comboBox1->Location = System::Drawing::Point(141, 173);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(180, 24);
			this->comboBox1->TabIndex = 5;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &DesignPen::comboBox1_SelectedIndexChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(20, 181);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(72, 16);
			this->label3->TabIndex = 6;
			this->label3->Text = L"畫筆樣式";
			// 
			// DesignPen
			// 
			this->AcceptButton = this->btn_OK;
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(384, 317);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->btn_OK);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"新細明體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"DesignPen";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"設計一個畫筆";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void panel1_Click(System::Object^  sender, System::EventArgs^  e)
			 {
				 colorDialog1->Color = this->panel1->BackColor;
				 if(colorDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
				 {
					 this->panel1->BackColor = colorDialog1->Color;
					 myPen->Color = colorDialog1->Color;
				 }
			 }
private: System::Void numericUpDown1_ValueChanged(System::Object^  sender, System::EventArgs^  e)
		 {
			 myPen->Width = Convert::ToSingle(numericUpDown1->Value);
		 }
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e)
		 {
			 ComboBox^ cb = safe_cast<ComboBox^>(sender);

			 if(cb->Text == "Solid")
			 {
				 myPen->DashStyle = DashStyle::Solid;
			 }
			 else if(cb->Text == "Dash")
			 {
				 myPen->DashStyle = DashStyle::Dash;
			 }
			 else if(cb->Text == "DashDot")
			 {
				 myPen->DashStyle = DashStyle::DashDot;
			 }
			 else if(cb->Text == "DashDotDot")
			 {
				 myPen->DashStyle = DashStyle::DashDotDot;
			 } 
			 else if(cb->Text == "Dot")
			 {
				 myPen->DashStyle = DashStyle::Dot;
			 }
		 }
};
}
