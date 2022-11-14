#pragma once

namespace TreeView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// TreeView_demo 的摘要
	/// </summary>
	public ref class TreeView_demo : public System::Windows::Forms::Form
	{
	public:
		TreeView_demo(void)
		{
			InitializeComponent();
			//
			//TODO:  在此加入建構函式程式碼
			//
		}

	protected:
		/// <summary>
		/// 清除任何使用中的資源。
		/// </summary>
		~TreeView_demo()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  toolToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  addNodeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  group1ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  group2ToolStripMenuItem;
	private: System::Windows::Forms::TreeView^  treeView1;
	private: System::Windows::Forms::ContextMenuStrip^  contextMenuStrip1;
	private: System::Windows::Forms::SplitContainer^  splitContainer1;
	private: System::Windows::Forms::SplitContainer^  splitContainer2;
	private: System::Windows::Forms::TextBox^  textBox1;

	private: System::ComponentModel::IContainer^  components;
	protected:

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
			System::Windows::Forms::TreeNode^  treeNode1 = (gcnew System::Windows::Forms::TreeNode(L"Group1"));
			System::Windows::Forms::TreeNode^  treeNode2 = (gcnew System::Windows::Forms::TreeNode(L"Node1"));
			System::Windows::Forms::TreeNode^  treeNode3 = (gcnew System::Windows::Forms::TreeNode(L"Node2"));
			System::Windows::Forms::TreeNode^  treeNode4 = (gcnew System::Windows::Forms::TreeNode(L"Node3"));
			System::Windows::Forms::TreeNode^  treeNode5 = (gcnew System::Windows::Forms::TreeNode(L"Group2", gcnew cli::array< System::Windows::Forms::TreeNode^  >(3) {
				treeNode2,
					treeNode3, treeNode4
			}));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->toolToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->addNodeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->group1ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->group2ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->treeView1 = (gcnew System::Windows::Forms::TreeView());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->splitContainer2 = (gcnew System::Windows::Forms::SplitContainer());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer2))->BeginInit();
			this->splitContainer2->Panel2->SuspendLayout();
			this->splitContainer2->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->toolToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(465, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// toolToolStripMenuItem
			// 
			this->toolToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->addNodeToolStripMenuItem });
			this->toolToolStripMenuItem->Name = L"toolToolStripMenuItem";
			this->toolToolStripMenuItem->Size = System::Drawing::Size(45, 20);
			this->toolToolStripMenuItem->Text = L"Tool";
			// 
			// addNodeToolStripMenuItem
			// 
			this->addNodeToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->group1ToolStripMenuItem,
					this->group2ToolStripMenuItem
			});
			this->addNodeToolStripMenuItem->Name = L"addNodeToolStripMenuItem";
			this->addNodeToolStripMenuItem->Size = System::Drawing::Size(131, 22);
			this->addNodeToolStripMenuItem->Text = L"Add node";
			// 
			// group1ToolStripMenuItem
			// 
			this->group1ToolStripMenuItem->Name = L"group1ToolStripMenuItem";
			this->group1ToolStripMenuItem->Size = System::Drawing::Size(120, 22);
			this->group1ToolStripMenuItem->Tag = L"0";
			this->group1ToolStripMenuItem->Text = L"Group 1";
			this->group1ToolStripMenuItem->Click += gcnew System::EventHandler(this, &TreeView_demo::add_node_ToolStripMenuItem_Click);
			// 
			// group2ToolStripMenuItem
			// 
			this->group2ToolStripMenuItem->Name = L"group2ToolStripMenuItem";
			this->group2ToolStripMenuItem->Size = System::Drawing::Size(120, 22);
			this->group2ToolStripMenuItem->Tag = L"1";
			this->group2ToolStripMenuItem->Text = L"Group 2";
			this->group2ToolStripMenuItem->Click += gcnew System::EventHandler(this, &TreeView_demo::add_node_ToolStripMenuItem_Click);
			// 
			// treeView1
			// 
			this->treeView1->CheckBoxes = true;
			this->treeView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->treeView1->Location = System::Drawing::Point(0, 0);
			this->treeView1->Name = L"treeView1";
			treeNode1->Name = L"Group1";
			treeNode1->Text = L"Group1";
			treeNode2->Name = L"Node1";
			treeNode2->Tag = L"Default node";
			treeNode2->Text = L"Node1";
			treeNode3->Name = L"Node2";
			treeNode3->Tag = L"Default node";
			treeNode3->Text = L"Node2";
			treeNode4->Name = L"Node3";
			treeNode4->Tag = L"Default node";
			treeNode4->Text = L"Node3";
			treeNode5->Name = L"Group2";
			treeNode5->Text = L"Group2";
			this->treeView1->Nodes->AddRange(gcnew cli::array< System::Windows::Forms::TreeNode^  >(2) { treeNode1, treeNode5 });
			this->treeView1->Size = System::Drawing::Size(465, 377);
			this->treeView1->TabIndex = 1;
			this->treeView1->AfterCheck += gcnew System::Windows::Forms::TreeViewEventHandler(this, &TreeView_demo::treeView1_AfterCheck);
			this->treeView1->NodeMouseClick += gcnew System::Windows::Forms::TreeNodeMouseClickEventHandler(this, &TreeView_demo::treeView1_NodeMouseClick);
			this->treeView1->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &TreeView_demo::treeView1_KeyDown);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// splitContainer1
			// 
			this->splitContainer1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer1->Location = System::Drawing::Point(0, 0);
			this->splitContainer1->Name = L"splitContainer1";
			this->splitContainer1->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->Controls->Add(this->splitContainer2);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Controls->Add(this->textBox1);
			this->splitContainer1->Size = System::Drawing::Size(465, 671);
			this->splitContainer1->SplitterDistance = 406;
			this->splitContainer1->TabIndex = 2;
			// 
			// splitContainer2
			// 
			this->splitContainer2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer2->Location = System::Drawing::Point(0, 0);
			this->splitContainer2->Name = L"splitContainer2";
			this->splitContainer2->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// splitContainer2.Panel2
			// 
			this->splitContainer2->Panel2->Controls->Add(this->treeView1);
			this->splitContainer2->Size = System::Drawing::Size(465, 406);
			this->splitContainer2->SplitterDistance = 25;
			this->splitContainer2->TabIndex = 0;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 3);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(441, 246);
			this->textBox1->TabIndex = 0;
			// 
			// TreeView_demo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(465, 671);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->splitContainer1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"TreeView_demo";
			this->Text = L"TreeView_demo";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel2->ResumeLayout(false);
			this->splitContainer1->Panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			this->splitContainer2->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer2))->EndInit();
			this->splitContainer2->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void add_node_ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				 // sender 表示觸發事件的物件
				 // e 表示事件的參數
				 ToolStripMenuItem^ tsm = safe_cast<ToolStripMenuItem^>(sender);
				 MessageBox::Show(tsm->Text + " " + tsm->Tag);

				 unsigned int i = Int32::Parse(safe_cast<System::String^>(tsm->Tag));
				 //C# -> C++/CLI
				// Int32.Parse ->  Int32::Parse

				 TreeNode^ NewNode = gcnew TreeNode("       ");
				 NewNode->Tag = "Add by toolstrip";
				 //NewNode->Checked = true;
				 NewNode->BackColor = System::Drawing::Color::FromArgb(0, 150, 0);
				 treeView1->Nodes[i]->Nodes->Add(NewNode);
				 NewNode->Checked = true;

	}
private: System::Void treeView1_AfterCheck(System::Object^  sender, System::Windows::Forms::TreeViewEventArgs^  e) {
			 auto% NodeArr = treeView1->Nodes;
			 textBox1->Clear();
			 for (unsigned int i = 0; i < NodeArr->Count; i++)
			 {
				 if (NodeArr[i]->Checked == false)
				 {
					 for (unsigned int j = 0; j < NodeArr[i]->Nodes->Count; j++)
					 {
						 if (NodeArr[i]->Nodes[j]->Checked)
							 NodeArr[i]->Nodes[j]->Checked = false;
					 }
				 }

				 for (unsigned int j = 0; j < NodeArr[i]->Nodes->Count; j++)
				 {
					 if (NodeArr[i]->Nodes[j]->Checked)
						 textBox1->Text += NodeArr[i]->Nodes[j]->Text + "   " + NodeArr[i]->Nodes[j]->Tag + "     ";
				 }
			 }
			 return;
}
private: System::Void treeView1_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
			 if (e->KeyCode == Keys::Delete)
			 {
				 textBox1->Clear();
				 textBox1->Text += treeView1->SelectedNode->Text + " is deleted.";
				 treeView1->Nodes->Remove(treeView1->SelectedNode);
				 //順序問題
				 treeView1->SelectedNode = nullptr;
			 }

}
private: System::Void treeView1_NodeMouseClick(System::Object^  sender, System::Windows::Forms::TreeNodeMouseClickEventArgs^  e) {
			 //treeView1->SelectedNode

			 System::String^ str = gcnew System::String(
				 "The node is at level " + e->Node->Level +
				 ", number " + e->Node->Index +
				 ", parent name " + e->Node->Parent);
			 //MessageBox::Show(str);
}
};
}
