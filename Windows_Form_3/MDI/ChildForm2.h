#pragma once
#include <windows.h>
#include "glut.h"

namespace My02_MDI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ChildForm2 的摘要
	/// </summary>
	public ref class ChildForm2 : public System::Windows::Forms::Form
	{
	public:
		ChildForm2(void)
		{
			InitializeComponent();
			//
			//TODO: 在此加入建構函式程式碼
			//
			// OpenGL Initiation

			// Get Handle
			m_hWnd = (HWND)this->panel1->Handle.ToInt32();
			m_hDC = ::GetDC( m_hWnd );

			// Set pixel format
			PIXELFORMATDESCRIPTOR pfd;
			ZeroMemory( &pfd, sizeof( pfd ) );
			pfd.nSize = sizeof( pfd );
			pfd.nVersion = 1;
			pfd.dwFlags = PFD_DRAW_TO_WINDOW | PFD_SUPPORT_OPENGL | PFD_DOUBLEBUFFER;
			pfd.iPixelType = PFD_TYPE_RGBA;
			pfd.cColorBits = 32;
			pfd.cDepthBits = 32;
			pfd.iLayerType = PFD_MAIN_PLANE;
			int nFormat = ::ChoosePixelFormat( m_hDC, &pfd );
			::SetPixelFormat( m_hDC, nFormat, &pfd );

			// Create OpenGL Rendering Context
			m_hRC = ::wglCreateContext( m_hDC );
			if(m_hRC==0)
				MessageBox::Show("Create Render Context Error");

			// Assign OpenGL Rendering Context
			if (::wglMakeCurrent( m_hDC, m_hRC ) == false)
				MessageBox::Show("wglMakeCurrent Error");

			// ------------------------------------------------------------------
			timer1->Interval = 33;
			timer1->Enabled = true;
		}

	protected:
		/// <summary>
		/// 清除任何使用中的資源。
		/// </summary>
		~ChildForm2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::ComponentModel::IContainer^  components;
	protected: 

	private:
		/// <summary>
		/// 設計工具所需的變數。
		/// </summary>
		HWND m_hWnd;
		HDC  m_hDC;
		HGLRC m_hRC;
		int width;
		int height;
		System::Drawing::Size OpenGLSize;
		float m_rAngle;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 此為設計工具支援所需的方法 - 請勿使用程式碼編輯器
		/// 修改這個方法的內容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(284, 262);
			this->panel1->TabIndex = 0;
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &ChildForm2::timer1_Tick);
			// 
			// ChildForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 262);
			this->Controls->Add(this->panel1);
			this->Name = L"ChildForm2";
			this->Text = L"ChildForm2";
			this->ResumeLayout(false);

		}
#pragma endregion

		private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e)
				 {
					 // Rendering ------------------------------------------------
					 glClearColor( 0.0f, 0.0f, 0.0f, 1.0f );
					 glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT) ;
					 glMatrixMode(GL_PROJECTION);
					 glLoadIdentity();

					 glMatrixMode(GL_MODELVIEW);
					 glLoadIdentity();

					 m_rAngle = m_rAngle + 1;
					 if(360 < m_rAngle) m_rAngle -= 360;
					 glRotatef( m_rAngle, 0.0f, 0.0f, 1.0f );
					 glBegin(GL_QUADS);
					 glColor3f(1.0, 0.0, 0.0);
					 glVertex3f(-0.5,-0.5,0);
					 glVertex3f( 0.5,-0.5,0);
					 glVertex3f( 0.5, 0.5,0);
					 glVertex3f(-0.5, 0.5,0);
					 glEnd();

					 glFlush();
					 SwapBuffers( m_hDC );
				 }
	};
}
