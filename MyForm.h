#pragma once
#include <iostream>
#include "TMatrix.h"

namespace Project1 
{
	TMatrix<int>* m1 = nullptr;
	TMatrix<int>* m2 = nullptr;
	TMatrix<int>* m3 = nullptr;

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::DataGridView^ dataGridView3;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(335, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(176, 31);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Matrixes Size";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(341, 73);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(169, 38);
			this->textBox1->TabIndex = 1;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ControlLightLight;
			this->dataGridView1->ColumnHeadersVisible = false;
			this->dataGridView1->Location = System::Drawing::Point(23, 150);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->Size = System::Drawing::Size(367, 278);
			this->dataGridView1->TabIndex = 2;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(118, 430);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(125, 54);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Enter matrix";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// dataGridView2
			// 
			this->dataGridView2->AllowUserToAddRows = false;
			this->dataGridView2->AllowUserToDeleteRows = false;
			this->dataGridView2->AllowUserToResizeColumns = false;
			this->dataGridView2->AllowUserToResizeRows = false;
			this->dataGridView2->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView2->BackgroundColor = System::Drawing::SystemColors::ControlLightLight;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->ColumnHeadersVisible = false;
			this->dataGridView2->Location = System::Drawing::Point(472, 150);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersVisible = false;
			this->dataGridView2->Size = System::Drawing::Size(367, 278);
			this->dataGridView2->TabIndex = 4;
			// 
			// dataGridView3
			// 
			this->dataGridView3->AllowUserToAddRows = false;
			this->dataGridView3->AllowUserToDeleteRows = false;
			this->dataGridView3->AllowUserToResizeColumns = false;
			this->dataGridView3->AllowUserToResizeRows = false;
			this->dataGridView3->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView3->BackgroundColor = System::Drawing::SystemColors::ControlLightLight;
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->ColumnHeadersVisible = false;
			this->dataGridView3->Location = System::Drawing::Point(869, 150);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->ReadOnly = true;
			this->dataGridView3->RowHeadersVisible = false;
			this->dataGridView3->Size = System::Drawing::Size(367, 278);
			this->dataGridView3->TabIndex = 5;
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(599, 430);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(125, 54);
			this->button3->TabIndex = 7;
			this->button3->Text = L"Enter matrix";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->button2->Location = System::Drawing::Point(397, 182);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(63, 54);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Sum";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->button4->Location = System::Drawing::Point(397, 242);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(63, 54);
			this->button4->TabIndex = 9;
			this->button4->Text = L"Minus";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->button5->Location = System::Drawing::Point(397, 302);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(63, 54);
			this->button5->TabIndex = 10;
			this->button5->Text = L"Mult";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1226, 554);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->dataGridView3);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


		void Enter_Matrix(System::Windows::Forms::DataGridView^ dg, TMatrix<int>*& m)
		{
			if (m != nullptr)
			{
				size_t size = m->get_size();
				delete m;
				m = new TMatrix<int>(size);
			}
			size_t size = m->get_size();
			for (size_t i = 0; i < size; ++i)
			{
				for (size_t j = 0; j < size - i; ++j)
				{
					(*m)[i][j] = System::Convert::ToInt16(dg->Rows[i]->Cells[j]->Value);
				}
			}
			std::cout << *m;
		}

	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) 
	{
		const size_t size = System::Convert::ToInt16(textBox1->Text);
		std::cout << size;
		if (m1 != nullptr && m2 != nullptr && m3 != nullptr)
		{
			delete m1;
			delete m2;
			delete m3;
		}
		
		if (size > 0)
		{
			m1 = new TMatrix<int>(size);
			m2 = new TMatrix<int>(size);
			m3 = new TMatrix<int>(size);
		}
		dataGridView1->ColumnCount = size;
		dataGridView1->RowCount = size;
		dataGridView2->ColumnCount = size;
		dataGridView2->RowCount = size;
		dataGridView3->ColumnCount = size;
		dataGridView3->RowCount = size;

		for (size_t i = 0; i < size; ++i)
		{
			for (size_t j = size - 1; j > size - 1 - i; --j)
			{
				dataGridView1->Rows[i]->Cells[j]->ReadOnly = true;
				dataGridView2->Rows[i]->Cells[j]->ReadOnly = true;
			}
		}

	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) 
	{

	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Enter_Matrix(dataGridView1, m1);
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		Enter_Matrix(dataGridView2, m2);
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		if (m1 != nullptr && m2 != nullptr)
		{
			*m3 = *m1 + *m2;
		}
		//const std::string res = m3->ToString();
		size_t size = m3->get_size();
		dataGridView3->RowCount = size;
		dataGridView3->ColumnCount = size;
		for (size_t i = 0; i < size; ++i)
		{
			for (size_t j = 0; j < size - i; ++j)
			{
				dataGridView3->Rows[i]->Cells[j]->Value = System::Convert::ToString((*m3)[i][j]);
			}
		}

	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		if (m1 != nullptr && m2 != nullptr)
		{
			*m3 = *m1 - *m2;
		}
		//const std::string res = m3->ToString();
		size_t size = m3->get_size();
		dataGridView3->RowCount = size;
		dataGridView3->ColumnCount = size;
		for (size_t i = 0; i < size; ++i)
		{
			for (size_t j = 0; j < size - i; ++j)
			{
				dataGridView3->Rows[i]->Cells[j]->Value = System::Convert::ToString((*m3)[i][j]);
			}
		}

	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		if (m1 != nullptr && m2 != nullptr)
		{
			*m3 = *m1 * *m2;
		}
		//const std::string res = m3->ToString();
		dataGridView3->Rows->Clear();
		dataGridView3->Columns->Clear();
		size_t size = m3->get_size();
		dataGridView3->RowCount = size;
		dataGridView3->ColumnCount = size;
		for (size_t i = 0; i < size; ++i)
		{
			for (size_t j = 0; j < size - i; ++j)
			{
				dataGridView3->Rows[i]->Cells[j]->Value = System::Convert::ToString((*m3)[i][j]);
			}
		}

	}
};

}
