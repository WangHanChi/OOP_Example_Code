#pragma once
#include "DesignPen.h"

namespace GDIPlus {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Form1 的摘要
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	private:
		int draw_type;
		Point current_pt;	// 目前滑鼠位置
		Point previous_pt;	// 先前滑鼠位置
		Pen^ usingPen;		// 目前使用的畫筆
		List<Point>^ lines;

	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel_Drawtype;
	private: System::Windows::Forms::ToolStripMenuItem^  ToolStripMenuItem_Lines;
	private: System::Windows::Forms::ToolStripMenuItem^  ToolStripMenuItem_Ellipse;
	private: System::Windows::Forms::ToolStripMenuItem^  ToolStripMenuItem_Polygon;
	private: System::Windows::Forms::ToolStripMenuItem^  ToolStripMenuItem_PenSetting;
			 

	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: 在此加入建構函式程式碼
			//
			draw_type = 0;
			previous_pt.X = Int32::MaxValue;
			previous_pt.Y = Int32::MaxValue;
			current_pt.X = Int32::MaxValue;
			current_pt.Y = Int32::MaxValue;
			lines = gcnew List<Point>();

			usingPen = gcnew Pen(Color::Red, 2.0);
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
	private: System::Windows::Forms::Panel^  panel1;
	protected: 
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  圖形ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ToolStripMenuItem_Line;


	protected: 

	private:
		/// <summary>
		/// 設計工具所需的變數。
		/// </summary>
		System::ComponentModel::Container ^components;
		
	private: System::Windows::Forms::StatusStrip^  statusStrip1;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel_MousePos;

			 

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 此為設計工具支援所需的方法 - 請勿使用程式碼編輯器
		/// 修改這個方法的內容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->圖形ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ToolStripMenuItem_Line = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ToolStripMenuItem_Lines = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ToolStripMenuItem_Ellipse = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ToolStripMenuItem_PenSetting = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripStatusLabel_MousePos = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripStatusLabel_Drawtype = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->ToolStripMenuItem_Polygon = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->statusStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::Window;
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 24);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(496, 450);
			this->panel1->TabIndex = 0;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::panel1_Paint);
			this->panel1->MouseDoubleClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::panel1_MouseDoubleClick);
			this->panel1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::panel1_MouseDown);
			this->panel1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::panel1_MouseMove);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->圖形ToolStripMenuItem, 
				this->ToolStripMenuItem_PenSetting});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(496, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// 圖形ToolStripMenuItem
			// 
			this->圖形ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {this->ToolStripMenuItem_Line, 
				this->ToolStripMenuItem_Lines, this->ToolStripMenuItem_Ellipse, this->ToolStripMenuItem_Polygon});
			this->圖形ToolStripMenuItem->Name = L"圖形ToolStripMenuItem";
			this->圖形ToolStripMenuItem->Size = System::Drawing::Size(44, 20);
			this->圖形ToolStripMenuItem->Text = L"圖形";
			// 
			// ToolStripMenuItem_Line
			// 
			this->ToolStripMenuItem_Line->Name = L"ToolStripMenuItem_Line";
			this->ToolStripMenuItem_Line->Size = System::Drawing::Size(152, 22);
			this->ToolStripMenuItem_Line->Text = L"線";
			this->ToolStripMenuItem_Line->Click += gcnew System::EventHandler(this, &Form1::ToolStripMenuItem_Line_Click);
			// 
			// ToolStripMenuItem_Lines
			// 
			this->ToolStripMenuItem_Lines->Name = L"ToolStripMenuItem_Lines";
			this->ToolStripMenuItem_Lines->Size = System::Drawing::Size(152, 22);
			this->ToolStripMenuItem_Lines->Text = L"連線直線";
			this->ToolStripMenuItem_Lines->Click += gcnew System::EventHandler(this, &Form1::ToolStripMenuItem_Lines_Click);
			// 
			// ToolStripMenuItem_Ellipse
			// 
			this->ToolStripMenuItem_Ellipse->Name = L"ToolStripMenuItem_Ellipse";
			this->ToolStripMenuItem_Ellipse->Size = System::Drawing::Size(152, 22);
			this->ToolStripMenuItem_Ellipse->Text = L"橢圓與矩形";
			this->ToolStripMenuItem_Ellipse->Click += gcnew System::EventHandler(this, &Form1::ToolStripMenuItem_Ellipse_Click);
			// 
			// ToolStripMenuItem_PenSetting
			// 
			this->ToolStripMenuItem_PenSetting->Name = L"ToolStripMenuItem_PenSetting";
			this->ToolStripMenuItem_PenSetting->Size = System::Drawing::Size(68, 20);
			this->ToolStripMenuItem_PenSetting->Text = L"設定畫筆";
			this->ToolStripMenuItem_PenSetting->Click += gcnew System::EventHandler(this, &Form1::ToolStripMenuItem_PenSetting_Click);
			// 
			// statusStrip1
			// 
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->toolStripStatusLabel_MousePos, 
				this->toolStripStatusLabel_Drawtype});
			this->statusStrip1->Location = System::Drawing::Point(0, 452);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(496, 22);
			this->statusStrip1->TabIndex = 2;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// toolStripStatusLabel_MousePos
			// 
			this->toolStripStatusLabel_MousePos->Name = L"toolStripStatusLabel_MousePos";
			this->toolStripStatusLabel_MousePos->Size = System::Drawing::Size(56, 17);
			this->toolStripStatusLabel_MousePos->Text = L"滑鼠座標";
			// 
			// toolStripStatusLabel_Drawtype
			// 
			this->toolStripStatusLabel_Drawtype->Name = L"toolStripStatusLabel_Drawtype";
			this->toolStripStatusLabel_Drawtype->Size = System::Drawing::Size(56, 17);
			this->toolStripStatusLabel_Drawtype->Text = L"繪圖樣式";
			// 
			// ToolStripMenuItem_Polygon
			// 
			this->ToolStripMenuItem_Polygon->Name = L"ToolStripMenuItem_Polygon";
			this->ToolStripMenuItem_Polygon->Size = System::Drawing::Size(152, 22);
			this->ToolStripMenuItem_Polygon->Text = L"多邊形";
			this->ToolStripMenuItem_Polygon->Click += gcnew System::EventHandler(this, &Form1::ToolStripMenuItem_Polygon_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(496, 474);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Form1";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e)
			 {
				 if(previous_pt.X <= panel1->Width && previous_pt.Y <= panel1->Height)
				 {
					 switch(draw_type)
					 {
					 case 1:
						 // 畫線
						 e->Graphics->DrawLine(usingPen, previous_pt, current_pt);					 
						 break;
					 case 2:
						 // 畫連續直線
						 e->Graphics->DrawLine(usingPen, previous_pt, current_pt);
						 if(lines->Count >= 2)
						 {
							 e->Graphics->DrawLines(usingPen, lines->ToArray());
						 }						 
						 break;
					 case 3:
						 {
							 // 畫橢圓
							 double r = Math::Sqrt((current_pt.X-previous_pt.X)*(current_pt.X-previous_pt.X) + (current_pt.Y-previous_pt.Y)*(current_pt.Y-previous_pt.Y));
							 Rectangle rect(previous_pt.X-r, previous_pt.Y-r, 2.0*r, 2.0*r);
							 e->Graphics->DrawEllipse(usingPen, rect);
							 // 畫出外框
							 e->Graphics->DrawRectangle(Pens::Black, rect);
							 break;
						 }						 
					 case 4:
						 // 畫多邊形
						 e->Graphics->DrawLine(usingPen, previous_pt, current_pt);
						 if(lines->Count >= 2)
						 {
							 e->Graphics->DrawPolygon(usingPen, lines->ToArray());
						 }						 
						 break;
					 }
				 }
			 }
	private: System::Void panel1_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e)
			 {
				 if(e->Button == System::Windows::Forms::MouseButtons::Left)
				 {
					 previous_pt = e->Location;
				 }
				 if(draw_type == 2 || draw_type == 4)
				 {
					 lines->Add(e->Location);
				 }
			 }
	private: System::Void panel1_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e)
			 {
				 toolStripStatusLabel_MousePos->Text = current_pt.ToString();
				 current_pt = e->Location;
				 panel1->Invalidate();
			 }
private: System::Void ToolStripMenuItem_Line_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			 draw_type = 1;
			 toolStripStatusLabel_Drawtype->Text = "畫線";
		 }
private: System::Void ToolStripMenuItem_Lines_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			 lines->Clear();
			 draw_type = 2;
			 toolStripStatusLabel_Drawtype->Text = "畫連續直線";
		 }
private: System::Void ToolStripMenuItem_Ellipse_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			 draw_type = 3;
			 toolStripStatusLabel_Drawtype->Text = "畫橢圓 與 矩形";
		 }
private: System::Void ToolStripMenuItem_Polygon_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			 lines->Clear();
			 draw_type = 4;
			 toolStripStatusLabel_Drawtype->Text = "畫多邊形";
		 }
private: System::Void panel1_MouseDoubleClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e)
		 {
			 if(e->Button == System::Windows::Forms::MouseButtons::Right)
			 {
				 draw_type = 0;
				 previous_pt.X = Int32::MaxValue;
				 previous_pt.Y = Int32::MaxValue;
				 current_pt.X = Int32::MaxValue;
				 current_pt.Y = Int32::MaxValue;
				 toolStripStatusLabel_Drawtype->Text = "繪圖樣式";

				 lines->Clear();
			 }
		 }
private: System::Void ToolStripMenuItem_PenSetting_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			 DesignPen^ DP = gcnew DesignPen(usingPen);
			 DP->ShowDialog();
		 }
};
}

