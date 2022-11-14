#pragma once

namespace TC2010CH06_01Menu {

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
			MenuItem_normal->Tag = PictureBoxSizeMode::Normal;
			MenuItem_stretch->Tag = PictureBoxSizeMode::StretchImage;
			MenuItem_autoSize->Tag = PictureBoxSizeMode::AutoSize;
			MenuItem_center->Tag = PictureBoxSizeMode::CenterImage;
			MenuItem_zoom->Tag = PictureBoxSizeMode::Zoom;
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
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected:


	private: System::Windows::Forms::PictureBox^  pictureBox1;

	private: System::Windows::Forms::OpenFileDialog^  openFileDialogImg;
	private: System::Windows::Forms::ToolStripMenuItem^  顯示模式ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  MenuItem_normal;

	private: System::Windows::Forms::ToolStripMenuItem^  MenuItem_stretch;
	private: System::Windows::Forms::ToolStripMenuItem^  MenuItem_autoSize;
	private: System::Windows::Forms::ToolStripMenuItem^  MenuItem_center;
	private: System::Windows::Forms::ToolStripMenuItem^  MenuItem_zoom;
	private: System::Windows::Forms::ContextMenuStrip^  contextMenuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  ToolStripMenuItem_CloseImage;
	private: System::Windows::Forms::ContextMenuStrip^  contextMenuStrip2;
	private: System::Windows::Forms::ToolStripMenuItem^  closeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  範例功能ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ToolStripMenuItem_OpenImage;
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// 設計工具所需的變數。
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// 此為設計工具支援所需的方法 - 請勿使用程式碼編輯器
		/// 修改這個方法的內容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->範例功能ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ToolStripMenuItem_OpenImage = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->顯示模式ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->MenuItem_normal = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->MenuItem_stretch = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->MenuItem_autoSize = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->MenuItem_center = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->MenuItem_zoom = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->ToolStripMenuItem_CloseImage = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openFileDialogImg = (gcnew System::Windows::Forms::OpenFileDialog());
			this->contextMenuStrip2 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->closeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->contextMenuStrip1->SuspendLayout();
			this->contextMenuStrip2->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->範例功能ToolStripMenuItem,
					this->顯示模式ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(496, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// 範例功能ToolStripMenuItem
			// 
			this->範例功能ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->ToolStripMenuItem_OpenImage });
			this->範例功能ToolStripMenuItem->Name = L"範例功能ToolStripMenuItem";
			this->範例功能ToolStripMenuItem->Size = System::Drawing::Size(81, 20);
			this->範例功能ToolStripMenuItem->Text = L"範例功能(&F)";
			// 
			// ToolStripMenuItem_OpenImage
			// 
			this->ToolStripMenuItem_OpenImage->Name = L"ToolStripMenuItem_OpenImage";
			this->ToolStripMenuItem_OpenImage->Size = System::Drawing::Size(152, 22);
			this->ToolStripMenuItem_OpenImage->Text = L"開啟圖片(&O)";
			this->ToolStripMenuItem_OpenImage->Click += gcnew System::EventHandler(this, &Form1::ToolStripMenuItem_OpenImage_Click);
			// 
			// 顯示模式ToolStripMenuItem
			// 
			this->顯示模式ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->MenuItem_normal,
					this->MenuItem_stretch, this->MenuItem_autoSize, this->MenuItem_center, this->MenuItem_zoom
			});
			this->顯示模式ToolStripMenuItem->Name = L"顯示模式ToolStripMenuItem";
			this->顯示模式ToolStripMenuItem->Size = System::Drawing::Size(67, 20);
			this->顯示模式ToolStripMenuItem->Text = L"顯示模式";
			// 
			// MenuItem_normal
			// 
			this->MenuItem_normal->Name = L"MenuItem_normal";
			this->MenuItem_normal->Size = System::Drawing::Size(152, 22);
			this->MenuItem_normal->Text = L"Normal";
			this->MenuItem_normal->Click += gcnew System::EventHandler(this, &Form1::ImageModeChange);
			// 
			// MenuItem_stretch
			// 
			this->MenuItem_stretch->Name = L"MenuItem_stretch";
			this->MenuItem_stretch->Size = System::Drawing::Size(152, 22);
			this->MenuItem_stretch->Text = L"StretchImage";
			this->MenuItem_stretch->Click += gcnew System::EventHandler(this, &Form1::ImageModeChange);
			// 
			// MenuItem_autoSize
			// 
			this->MenuItem_autoSize->Name = L"MenuItem_autoSize";
			this->MenuItem_autoSize->Size = System::Drawing::Size(152, 22);
			this->MenuItem_autoSize->Text = L"AutoSize";
			this->MenuItem_autoSize->Click += gcnew System::EventHandler(this, &Form1::ImageModeChange);
			// 
			// MenuItem_center
			// 
			this->MenuItem_center->Name = L"MenuItem_center";
			this->MenuItem_center->Size = System::Drawing::Size(152, 22);
			this->MenuItem_center->Text = L"Center";
			this->MenuItem_center->Click += gcnew System::EventHandler(this, &Form1::ImageModeChange);
			// 
			// MenuItem_zoom
			// 
			this->MenuItem_zoom->Name = L"MenuItem_zoom";
			this->MenuItem_zoom->Size = System::Drawing::Size(152, 22);
			this->MenuItem_zoom->Text = L"Zoom";
			this->MenuItem_zoom->Click += gcnew System::EventHandler(this, &Form1::ImageModeChange);
			// 
			// pictureBox1
			// 
			this->pictureBox1->ContextMenuStrip = this->contextMenuStrip1;
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox1->Location = System::Drawing::Point(0, 24);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(496, 450);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::pictureBox1_MouseClick);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->ToolStripMenuItem_CloseImage });
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(123, 26);
			this->contextMenuStrip1->Text = L"顯示模式";
			// 
			// ToolStripMenuItem_CloseImage
			// 
			this->ToolStripMenuItem_CloseImage->Name = L"ToolStripMenuItem_CloseImage";
			this->ToolStripMenuItem_CloseImage->Size = System::Drawing::Size(122, 22);
			this->ToolStripMenuItem_CloseImage->Text = L"關閉圖片";
			this->ToolStripMenuItem_CloseImage->Click += gcnew System::EventHandler(this, &Form1::ToolStripMenuItem_CloseImage_Click);
			// 
			// openFileDialogImg
			// 
			this->openFileDialogImg->DefaultExt = L"JPG";
			this->openFileDialogImg->FileName = L"openFileDialog1";
			this->openFileDialogImg->Filter = L"圖片(*.JPG;*.BMP)|*.JPG;*.BMP|所有檔案|*.*";
			this->openFileDialogImg->Title = L"開啟一張圖片";
			// 
			// contextMenuStrip2
			// 
			this->contextMenuStrip2->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->closeToolStripMenuItem });
			this->contextMenuStrip2->Name = L"contextMenuStrip2";
			this->contextMenuStrip2->Size = System::Drawing::Size(106, 26);
			this->contextMenuStrip2->Text = L"視窗程式";
			// 
			// closeToolStripMenuItem
			// 
			this->closeToolStripMenuItem->Name = L"closeToolStripMenuItem";
			this->closeToolStripMenuItem->Size = System::Drawing::Size(105, 22);
			this->closeToolStripMenuItem->Text = L"Close";
			this->closeToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::closeToolStripMenuItem_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(496, 474);
			this->ContextMenuStrip = this->contextMenuStrip2;
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->Text = L"myForm";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->contextMenuStrip1->ResumeLayout(false);
			this->contextMenuStrip2->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void ToolStripMenuItem_OpenImage_Click(System::Object^  sender, System::EventArgs^  e)
	{
				 if (openFileDialogImg->ShowDialog() == System::Windows::Forms::DialogResult::OK)
				 {
					 Image^ img = Image::FromFile(openFileDialogImg->FileName);
					 this->pictureBox1->Image = img;
				 }
	}
	private: System::Void ImageModeChange(System::Object^  sender, System::EventArgs^  e)
	{
				 ToolStripMenuItem^ item = safe_cast<ToolStripMenuItem^>(sender);

				 this->pictureBox1->SizeMode = (PictureBoxSizeMode)(item->Tag);
	}
	private: System::Void ToolStripMenuItem_CloseImage_Click(System::Object^  sender, System::EventArgs^  e)
	{
				 this->pictureBox1->Image = nullptr;
	}
	private: System::Void closeToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
	{
				 this->Close();
	}
	private: System::Void pictureBox1_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
				 Control^ control = safe_cast<Control^> (sender);
				 contextMenuStrip2->Show(control->PointToScreen(System::Drawing::Point(e->X, e->Y)));
	}
	};
}

