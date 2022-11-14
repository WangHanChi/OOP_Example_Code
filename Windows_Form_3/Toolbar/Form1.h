#pragma once

namespace TC2010CH06_02Toolbar {

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
			
			Style_Normal->Tag = PictureBoxSizeMode::Normal;
			Style_StretchImage->Tag = PictureBoxSizeMode::StretchImage;
			Style_AutoSize->Tag = PictureBoxSizeMode::AutoSize;
			Style_CenterImage->Tag = PictureBoxSizeMode::CenterImage;
			Style_Zoom->Tag = PictureBoxSizeMode::Zoom;

			ToolStripStatusLabel^ label = gcnew ToolStripStatusLabel();
			label->Text = this->pictureBox1->SizeMode.ToString();
			label->Name = "style";
			statusStrip1->Items->Add(label);
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
	private: System::Windows::Forms::ToolStripContainer^  toolStripContainer1;
	protected: 
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  menuToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ToolStripMenuItem_Open;
	private: System::Windows::Forms::ToolStrip^  toolStrip1;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton_Open;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialogImg;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::ToolStripDropDownButton^  toolStripDropDownButton_Style;
	private: System::Windows::Forms::ToolStripMenuItem^  Style_Normal;
	private: System::Windows::Forms::ToolStripMenuItem^  Style_StretchImage;
	private: System::Windows::Forms::ToolStripMenuItem^  Style_Zoom;
	private: System::Windows::Forms::ToolStripMenuItem^  Style_AutoSize;
	private: System::Windows::Forms::ToolStripMenuItem^  Style_CenterImage;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator1;
	private: System::Windows::Forms::StatusStrip^  statusStrip1;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatus_Filename;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->toolStripContainer1 = (gcnew System::Windows::Forms::ToolStripContainer());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripStatus_Filename = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->menuToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ToolStripMenuItem_Open = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStripButton_Open = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripDropDownButton_Style = (gcnew System::Windows::Forms::ToolStripDropDownButton());
			this->Style_Normal = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Style_StretchImage = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Style_Zoom = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Style_AutoSize = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Style_CenterImage = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->openFileDialogImg = (gcnew System::Windows::Forms::OpenFileDialog());
			this->toolStripContainer1->BottomToolStripPanel->SuspendLayout();
			this->toolStripContainer1->ContentPanel->SuspendLayout();
			this->toolStripContainer1->TopToolStripPanel->SuspendLayout();
			this->toolStripContainer1->SuspendLayout();
			this->statusStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->toolStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// toolStripContainer1
			// 
			// 
			// toolStripContainer1.BottomToolStripPanel
			// 
			this->toolStripContainer1->BottomToolStripPanel->Controls->Add(this->statusStrip1);
			// 
			// toolStripContainer1.ContentPanel
			// 
			this->toolStripContainer1->ContentPanel->Controls->Add(this->pictureBox1);
			this->toolStripContainer1->ContentPanel->Size = System::Drawing::Size(496, 403);
			this->toolStripContainer1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->toolStripContainer1->Location = System::Drawing::Point(0, 0);
			this->toolStripContainer1->Name = L"toolStripContainer1";
			this->toolStripContainer1->Size = System::Drawing::Size(496, 474);
			this->toolStripContainer1->TabIndex = 0;
			this->toolStripContainer1->Text = L"toolStripContainer1";
			// 
			// toolStripContainer1.TopToolStripPanel
			// 
			this->toolStripContainer1->TopToolStripPanel->Controls->Add(this->menuStrip1);
			this->toolStripContainer1->TopToolStripPanel->Controls->Add(this->toolStrip1);
			// 
			// statusStrip1
			// 
			this->statusStrip1->Dock = System::Windows::Forms::DockStyle::None;
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->toolStripStatus_Filename });
			this->statusStrip1->Location = System::Drawing::Point(0, 0);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(496, 22);
			this->statusStrip1->TabIndex = 1;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// toolStripStatus_Filename
			// 
			this->toolStripStatus_Filename->Name = L"toolStripStatus_Filename";
			this->toolStripStatus_Filename->Size = System::Drawing::Size(55, 17);
			this->toolStripStatus_Filename->Text = L"檔案名稱";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(496, 403);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Dock = System::Windows::Forms::DockStyle::None;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->menuToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(496, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// menuToolStripMenuItem
			// 
			this->menuToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->ToolStripMenuItem_Open });
			this->menuToolStripMenuItem->Name = L"menuToolStripMenuItem";
			this->menuToolStripMenuItem->Size = System::Drawing::Size(52, 20);
			this->menuToolStripMenuItem->Text = L"Menu";
			// 
			// ToolStripMenuItem_Open
			// 
			this->ToolStripMenuItem_Open->Name = L"ToolStripMenuItem_Open";
			this->ToolStripMenuItem_Open->Size = System::Drawing::Size(106, 22);
			this->ToolStripMenuItem_Open->Text = L"Open";
			this->ToolStripMenuItem_Open->Click += gcnew System::EventHandler(this, &Form1::ToolStripMenuItem_Open_Click);
			// 
			// toolStrip1
			// 
			this->toolStrip1->Dock = System::Windows::Forms::DockStyle::None;
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->toolStripButton_Open,
					this->toolStripSeparator1, this->toolStripDropDownButton_Style
			});
			this->toolStrip1->Location = System::Drawing::Point(3, 24);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(108, 25);
			this->toolStrip1->TabIndex = 1;
			// 
			// toolStripButton_Open
			// 
			this->toolStripButton_Open->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->toolStripButton_Open->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton_Open.Image")));
			this->toolStripButton_Open->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton_Open->Name = L"toolStripButton_Open";
			this->toolStripButton_Open->Size = System::Drawing::Size(43, 22);
			this->toolStripButton_Open->Text = L"Open";
			this->toolStripButton_Open->Click += gcnew System::EventHandler(this, &Form1::ToolStripMenuItem_Open_Click);
			// 
			// toolStripDropDownButton_Style
			// 
			this->toolStripDropDownButton_Style->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->toolStripDropDownButton_Style->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->Style_Normal,
					this->Style_StretchImage, this->Style_Zoom, this->Style_AutoSize, this->Style_CenterImage
			});
			this->toolStripDropDownButton_Style->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripDropDownButton_Style.Image")));
			this->toolStripDropDownButton_Style->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripDropDownButton_Style->Name = L"toolStripDropDownButton_Style";
			this->toolStripDropDownButton_Style->Size = System::Drawing::Size(47, 22);
			this->toolStripDropDownButton_Style->Text = L"Style";
			// 
			// Style_Normal
			// 
			this->Style_Normal->Name = L"Style_Normal";
			this->Style_Normal->Size = System::Drawing::Size(152, 22);
			this->Style_Normal->Text = L"Normal";
			this->Style_Normal->Click += gcnew System::EventHandler(this, &Form1::ImageModeChange);
			// 
			// Style_StretchImage
			// 
			this->Style_StretchImage->Name = L"Style_StretchImage";
			this->Style_StretchImage->Size = System::Drawing::Size(152, 22);
			this->Style_StretchImage->Text = L"StretchImage";
			this->Style_StretchImage->Click += gcnew System::EventHandler(this, &Form1::ImageModeChange);
			// 
			// Style_Zoom
			// 
			this->Style_Zoom->Name = L"Style_Zoom";
			this->Style_Zoom->Size = System::Drawing::Size(152, 22);
			this->Style_Zoom->Text = L"Zoom";
			this->Style_Zoom->Click += gcnew System::EventHandler(this, &Form1::ImageModeChange);
			// 
			// Style_AutoSize
			// 
			this->Style_AutoSize->Name = L"Style_AutoSize";
			this->Style_AutoSize->Size = System::Drawing::Size(152, 22);
			this->Style_AutoSize->Text = L"AutoSize";
			this->Style_AutoSize->Click += gcnew System::EventHandler(this, &Form1::ImageModeChange);
			// 
			// Style_CenterImage
			// 
			this->Style_CenterImage->Name = L"Style_CenterImage";
			this->Style_CenterImage->Size = System::Drawing::Size(152, 22);
			this->Style_CenterImage->Text = L"CenterImage";
			this->Style_CenterImage->Click += gcnew System::EventHandler(this, &Form1::ImageModeChange);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(6, 25);
			// 
			// openFileDialogImg
			// 
			this->openFileDialogImg->DefaultExt = L"JPG";
			this->openFileDialogImg->FileName = L"openFileDialog1";
			this->openFileDialogImg->Filter = L"圖片(*.JPG;*.BMP)|*.JPG;*.BMP|所有檔案|*.*";
			this->openFileDialogImg->Title = L"開啟一張圖片";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(496, 474);
			this->Controls->Add(this->toolStripContainer1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->toolStripContainer1->BottomToolStripPanel->ResumeLayout(false);
			this->toolStripContainer1->BottomToolStripPanel->PerformLayout();
			this->toolStripContainer1->ContentPanel->ResumeLayout(false);
			this->toolStripContainer1->TopToolStripPanel->ResumeLayout(false);
			this->toolStripContainer1->TopToolStripPanel->PerformLayout();
			this->toolStripContainer1->ResumeLayout(false);
			this->toolStripContainer1->PerformLayout();
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void ToolStripMenuItem_Open_Click(System::Object^  sender, System::EventArgs^  e)
	{
				 openFileDialogImg->Title = "由 " + sender->GetType()->ToString() + " 呼叫的";

				 if (openFileDialogImg->ShowDialog() == System::Windows::Forms::DialogResult::OK)
				 {
					 Image^ img = Image::FromFile(openFileDialogImg->FileName);
					 this->pictureBox1->Image = img;

					 toolStripStatus_Filename->Text = openFileDialogImg->FileName;
				 }

				 // 如果你要判斷式從哪裡調用

				 MessageBox::Show(sender->GetType()->ToString());

				 if (sender->GetType()->ToString() == "System.Windows.Forms.ToolStripMenuItem")
				 {
					 this->Text = "MenuStrip呼叫";
					 ToolStripMenuItem^ item = safe_cast<ToolStripMenuItem^>(sender);
				 }
				 else if (sender->GetType()->ToString() == "System.Windows.Forms.ToolStripButton")
				 {
					 this->Text = "ToolStrip呼叫";
					 ToolStripButton^ btn = safe_cast<ToolStripButton^>(sender);
				 }

			 }
private: System::Void ImageModeChange(System::Object^  sender, System::EventArgs^  e)
		 {
			 ToolStripMenuItem^ item = safe_cast<ToolStripMenuItem^>(sender);

			 this->pictureBox1->SizeMode = (PictureBoxSizeMode)(item->Tag);

			 statusStrip1->Items["style"]->Text = this->pictureBox1->SizeMode.ToString();
			 //statusStrip1->Items["style"]->Text = "1231";
		 }
};
}

