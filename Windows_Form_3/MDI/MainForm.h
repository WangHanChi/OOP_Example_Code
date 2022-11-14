#pragma once
#include "ChildForm1.h"
#include "ChildForm2.h"

namespace My02_MDI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Form1 的摘要
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: 在此加入建構函式程式碼
			//
			form1_num = 0;
			form2_num = 0;
		}

	protected:
		/// <summary>
		/// 清除任何使用中的資源。
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected: 
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  newForm1ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  newForm2ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  檢視表單ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  表單溝通ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ToolStripMenuItem_ShowAllForms;
	private: System::Windows::Forms::ToolStripMenuItem^  ToolStripMenuItem_ShowChild;
	private: System::Windows::Forms::ToolStripMenuItem^  ToolStripMenuItem_GetChildForm1;
	private: System::Windows::Forms::ToolStripMenuItem^  排列ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  cascadeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  verticalToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  horizontalToolStripMenuItem;




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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->newForm1ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->newForm2ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->檢視表單ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->表單溝通ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ToolStripMenuItem_ShowAllForms = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ToolStripMenuItem_ShowChild = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ToolStripMenuItem_GetChildForm1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->排列ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cascadeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->verticalToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->horizontalToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->fileToolStripMenuItem,
					this->檢視表單ToolStripMenuItem, this->表單溝通ToolStripMenuItem, this->排列ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->MdiWindowListItem = this->檢視表單ToolStripMenuItem;
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(532, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->newForm1ToolStripMenuItem,
					this->newForm2ToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(38, 20);
			this->fileToolStripMenuItem->Text = L"&File";
			// 
			// newForm1ToolStripMenuItem
			// 
			this->newForm1ToolStripMenuItem->Name = L"newForm1ToolStripMenuItem";
			this->newForm1ToolStripMenuItem->Size = System::Drawing::Size(139, 22);
			this->newForm1ToolStripMenuItem->Text = L"New Form&1";
			this->newForm1ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::newForm1ToolStripMenuItem_Click);
			// 
			// newForm2ToolStripMenuItem
			// 
			this->newForm2ToolStripMenuItem->Name = L"newForm2ToolStripMenuItem";
			this->newForm2ToolStripMenuItem->Size = System::Drawing::Size(139, 22);
			this->newForm2ToolStripMenuItem->Text = L"New Form&2";
			this->newForm2ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::newForm2ToolStripMenuItem_Click);
			// 
			// 檢視表單ToolStripMenuItem
			// 
			this->檢視表單ToolStripMenuItem->Name = L"檢視表單ToolStripMenuItem";
			this->檢視表單ToolStripMenuItem->Size = System::Drawing::Size(67, 20);
			this->檢視表單ToolStripMenuItem->Text = L"檢視表單";
			// 
			// 表單溝通ToolStripMenuItem
			// 
			this->表單溝通ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->ToolStripMenuItem_ShowAllForms,
					this->ToolStripMenuItem_ShowChild, this->ToolStripMenuItem_GetChildForm1
			});
			this->表單溝通ToolStripMenuItem->Name = L"表單溝通ToolStripMenuItem";
			this->表單溝通ToolStripMenuItem->Size = System::Drawing::Size(67, 20);
			this->表單溝通ToolStripMenuItem->Text = L"表單溝通";
			// 
			// ToolStripMenuItem_ShowAllForms
			// 
			this->ToolStripMenuItem_ShowAllForms->Name = L"ToolStripMenuItem_ShowAllForms";
			this->ToolStripMenuItem_ShowAllForms->Size = System::Drawing::Size(182, 22);
			this->ToolStripMenuItem_ShowAllForms->Text = L"列舉目前開啟的表單";
			this->ToolStripMenuItem_ShowAllForms->Click += gcnew System::EventHandler(this, &MainForm::ToolStripMenuItem_ShowAllForms_Click);
			// 
			// ToolStripMenuItem_ShowChild
			// 
			this->ToolStripMenuItem_ShowChild->Name = L"ToolStripMenuItem_ShowChild";
			this->ToolStripMenuItem_ShowChild->Size = System::Drawing::Size(182, 22);
			this->ToolStripMenuItem_ShowChild->Text = L"列舉子表單";
			this->ToolStripMenuItem_ShowChild->Click += gcnew System::EventHandler(this, &MainForm::ToolStripMenuItem_ShowChild_Click);
			// 
			// ToolStripMenuItem_GetChildForm1
			// 
			this->ToolStripMenuItem_GetChildForm1->Name = L"ToolStripMenuItem_GetChildForm1";
			this->ToolStripMenuItem_GetChildForm1->Size = System::Drawing::Size(182, 22);
			this->ToolStripMenuItem_GetChildForm1->Text = L"取得子表單1的資料";
			this->ToolStripMenuItem_GetChildForm1->Click += gcnew System::EventHandler(this, &MainForm::ToolStripMenuItem_GetChildForm1_Click);
			// 
			// 排列ToolStripMenuItem
			// 
			this->排列ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->cascadeToolStripMenuItem,
					this->verticalToolStripMenuItem, this->horizontalToolStripMenuItem
			});
			this->排列ToolStripMenuItem->Name = L"排列ToolStripMenuItem";
			this->排列ToolStripMenuItem->Size = System::Drawing::Size(43, 20);
			this->排列ToolStripMenuItem->Text = L"排列";
			// 
			// cascadeToolStripMenuItem
			// 
			this->cascadeToolStripMenuItem->Name = L"cascadeToolStripMenuItem";
			this->cascadeToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->cascadeToolStripMenuItem->Text = L"Cascade";
			this->cascadeToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::cascadeToolStripMenuItem_Click);
			// 
			// verticalToolStripMenuItem
			// 
			this->verticalToolStripMenuItem->Name = L"verticalToolStripMenuItem";
			this->verticalToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->verticalToolStripMenuItem->Text = L"Vertical";
			this->verticalToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::verticalToolStripMenuItem_Click);
			// 
			// horizontalToolStripMenuItem
			// 
			this->horizontalToolStripMenuItem->Name = L"horizontalToolStripMenuItem";
			this->horizontalToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->horizontalToolStripMenuItem->Text = L"Horizontal";
			this->horizontalToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::horizontalToolStripMenuItem_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(532, 511);
			this->Controls->Add(this->menuStrip1);
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private:
			int form1_num;
			int form2_num;
	private: System::Void newForm1ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
			 {
				 ChildForm1^ form = gcnew ChildForm1();
				 form->MdiParent = this;
				 form->Text = "Form1_" + form1_num.ToString();
				 form1_num++;
				
				 form->Show();
			 }
	private: System::Void newForm2ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
			 {
				 ChildForm2^ form = gcnew ChildForm2();
				 form->MdiParent = this;
				 form->Text = "Form2_" + form2_num.ToString();
				 form2_num++;

				 form->Show();
			 }
private: System::Void ToolStripMenuItem_ShowAllForms_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			 int mainform_count = 0;
			 int childform1_count = 0;
			 int childform2_count = 0;

			 for each(Form^ f in Application::OpenForms)
			 {
				 MainForm^ m = dynamic_cast<MainForm^>(f);
				 if(m != nullptr)
				 {
					 mainform_count++;
				 }
				 ChildForm1^ c1 = dynamic_cast<ChildForm1^>(f);
				 if(c1 != nullptr)
				 {
					 childform1_count++;
				 }
				 ChildForm2^ c2 = dynamic_cast<ChildForm2^>(f);
				 if(c2 != nullptr)
				 {
					 childform2_count++;
				 }
			 }

			 String^ str = "目前共有 " + mainform_count.ToString() + " 個 MainForm 開啟" + "\n" + 
						   "目前共有 " + childform1_count.ToString() + " 個 ChildForm1 開啟" + "\n" + 
						   "目前共有 " + childform2_count.ToString() + " 個 ChildForm2 開啟";

			 MessageBox::Show(str);
		 }
private: System::Void ToolStripMenuItem_ShowChild_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			 int mainform_count = 0;
			 int childform1_count = 0;
			 int childform2_count = 0;

			 for each(Form^ f in this->MdiChildren)
			 {
				 MainForm^ m = dynamic_cast<MainForm^>(f);
				 if(m != nullptr)
				 {
					 mainform_count++;
				 }
				 ChildForm1^ c1 = dynamic_cast<ChildForm1^>(f);
				 if(c1 != nullptr)
				 {
					 childform1_count++;
				 }
				 ChildForm2^ c2 = dynamic_cast<ChildForm2^>(f);
				 if(c2 != nullptr)
				 {
					 childform2_count++;
				 }
			 }

			 String^ str = "目前共有 " + mainform_count.ToString() + " 個 MainForm 開啟" + "\n" + 
				 "目前共有 " + childform1_count.ToString() + " 個 ChildForm1 開啟" + "\n" + 
				 "目前共有 " + childform2_count.ToString() + " 個 ChildForm2 開啟";

			 MessageBox::Show(str);
		 }
private: System::Void ToolStripMenuItem_GetChildForm1_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			 ChildForm1^ c1 = nullptr;
			 
			 for each(Form^ f in this->MdiChildren)
			 {
				  c1 = dynamic_cast<ChildForm1^>(f);
				  if(c1 != nullptr)
				  {
					  break;
				  }
			 }
			 if(c1!=nullptr)
			 {
				 int n = c1->Number;
				 MessageBox::Show("數值為: " + n.ToString());
			 }
			 
		 }
private: System::Void cascadeToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->LayoutMdi(System::Windows::Forms::MdiLayout::Cascade);
}
private: System::Void verticalToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->LayoutMdi(System::Windows::Forms::MdiLayout::TileVertical);
}
private: System::Void horizontalToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->LayoutMdi(System::Windows::Forms::MdiLayout::TileHorizontal);
}
};
}

