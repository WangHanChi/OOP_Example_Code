#pragma once

namespace SlefDesignDialog {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// SelfDesignDlg ���K�n
	/// </summary>
	public ref class SelfDesignDlg : public System::Windows::Forms::Form
	{
	public:
		SelfDesignDlg(int i)
		{
			InitializeComponent();
			//
			//TODO: �b���[�J�غc�禡�{���X
			//
			this->label1->Text += ": " + i.ToString();
		}

	protected:
		/// <summary>
		/// �M������ϥΤ����귽�C
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
		/// �]�p�u��һݪ��ܼơC
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// �����]�p�u��䴩�һݪ���k - �ФŨϥε{���X�s�边
		/// �ק�o�Ӥ�k�����e�C
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"�з���", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->label1->Location = System::Drawing::Point(12, 99);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(348, 64);
			this->label1->TabIndex = 0;
			this->label1->Text = L"�ۭq��ܲ�";
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
