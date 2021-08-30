#pragma once
#include"Calculator.h"
#include<string>
#include<vector>
#include<iostream>
namespace Hasse {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			gr = pnlHasse->CreateGraphics();
			formulario = this->CreateGraphics();
		}

	protected:
		~MyForm()
		{
			if (components)
			{
				delete components;

			}
		}
	private: System::Windows::Forms::Label^  lblN;
	protected:
	private: System::Windows::Forms::TextBox^  tbxN;
	private: System::Windows::Forms::Label^  lblDivisores;

	private: System::Windows::Forms::Label^  lblNumeros;
	private: System::Windows::Forms::Button^  btnReady;

	private:
		System::ComponentModel::Container ^components;
		Calculator*calculo;
		int n;
		bool active = false;
		Graphics^gr;
		Graphics^formulario;
		int len = 0;
	private: System::Windows::Forms::Panel^  pnlHasse;
	private: System::Windows::Forms::Label^  lblParesO;
	private: System::Windows::Forms::TextBox^  tbxIngrese;

	private: System::Windows::Forms::Label^  lblIngrese;
	private: System::Windows::Forms::Button^  btnClear;
	private: System::Windows::Forms::Label^  lblTpares;
	private: System::Windows::Forms::Button^  btnAuto;
	private: System::Windows::Forms::Label^  lblPruebas;












	private: System::Windows::Forms::Label^  lblNigresados;
	private: System::Windows::Forms::Button^  btnVerificar;
	private: System::Windows::Forms::RichTextBox^  tbxIngresados;






			 String^c_div = "";
#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->lblN = (gcnew System::Windows::Forms::Label());
			this->tbxN = (gcnew System::Windows::Forms::TextBox());
			this->lblDivisores = (gcnew System::Windows::Forms::Label());
			this->lblNumeros = (gcnew System::Windows::Forms::Label());
			this->btnReady = (gcnew System::Windows::Forms::Button());
			this->pnlHasse = (gcnew System::Windows::Forms::Panel());
			this->lblParesO = (gcnew System::Windows::Forms::Label());
			this->tbxIngrese = (gcnew System::Windows::Forms::TextBox());
			this->lblIngrese = (gcnew System::Windows::Forms::Label());
			this->btnClear = (gcnew System::Windows::Forms::Button());
			this->lblTpares = (gcnew System::Windows::Forms::Label());
			this->btnAuto = (gcnew System::Windows::Forms::Button());
			this->lblPruebas = (gcnew System::Windows::Forms::Label());
			this->lblNigresados = (gcnew System::Windows::Forms::Label());
			this->btnVerificar = (gcnew System::Windows::Forms::Button());
			this->tbxIngresados = (gcnew System::Windows::Forms::RichTextBox());
			this->SuspendLayout();
			// 
			// lblN
			// 
			this->lblN->AutoSize = true;
			this->lblN->BackColor = System::Drawing::Color::Black;
			this->lblN->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblN->ForeColor = System::Drawing::Color::White;
			this->lblN->Location = System::Drawing::Point(4, 47);
			this->lblN->Name = L"lblN";
			this->lblN->Size = System::Drawing::Size(114, 31);
			this->lblN->TabIndex = 0;
			this->lblN->Text = L"Digite n:";
			// 
			// tbxN
			// 
			this->tbxN->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbxN->Location = System::Drawing::Point(124, 39);
			this->tbxN->Name = L"tbxN";
			this->tbxN->Size = System::Drawing::Size(90, 45);
			this->tbxN->TabIndex = 1;
			// 
			// lblDivisores
			// 
			this->lblDivisores->AutoSize = true;
			this->lblDivisores->BackColor = System::Drawing::Color::Gold;
			this->lblDivisores->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDivisores->Location = System::Drawing::Point(214, 9);
			this->lblDivisores->Name = L"lblDivisores";
			this->lblDivisores->Size = System::Drawing::Size(85, 20);
			this->lblDivisores->TabIndex = 2;
			this->lblDivisores->Text = L"Divisores:";
			// 
			// lblNumeros
			// 
			this->lblNumeros->AutoSize = true;
			this->lblNumeros->BackColor = System::Drawing::Color::LightCoral;
			this->lblNumeros->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblNumeros->Location = System::Drawing::Point(272, 9);
			this->lblNumeros->Name = L"lblNumeros";
			this->lblNumeros->Size = System::Drawing::Size(48, 20);
			this->lblNumeros->TabIndex = 3;
			this->lblNumeros->Text = L"auxD";
			// 
			// btnReady
			// 
			this->btnReady->BackColor = System::Drawing::Color::LimeGreen;
			this->btnReady->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnReady->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnReady->Location = System::Drawing::Point(4, 103);
			this->btnReady->Name = L"btnReady";
			this->btnReady->Size = System::Drawing::Size(114, 45);
			this->btnReady->TabIndex = 4;
			this->btnReady->Text = L"READY";
			this->btnReady->UseVisualStyleBackColor = false;
			this->btnReady->Click += gcnew System::EventHandler(this, &MyForm::btnReady_Click);
			// 
			// pnlHasse
			// 
			this->pnlHasse->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->pnlHasse->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pnlHasse->Location = System::Drawing::Point(892, 61);
			this->pnlHasse->Name = L"pnlHasse";
			this->pnlHasse->Size = System::Drawing::Size(1020, 1013);
			this->pnlHasse->TabIndex = 5;
			// 
			// lblParesO
			// 
			this->lblParesO->AutoSize = true;
			this->lblParesO->BackColor = System::Drawing::Color::Orange;
			this->lblParesO->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblParesO->Location = System::Drawing::Point(0, 214);
			this->lblParesO->Name = L"lblParesO";
			this->lblParesO->Size = System::Drawing::Size(73, 20);
			this->lblParesO->TabIndex = 6;
			this->lblParesO->Text = L"auxPares";
			// 
			// tbxIngrese
			// 
			this->tbxIngrese->Location = System::Drawing::Point(1946, 52);
			this->tbxIngrese->Name = L"tbxIngrese";
			this->tbxIngrese->Size = System::Drawing::Size(204, 22);
			this->tbxIngrese->TabIndex = 0;
			// 
			// lblIngrese
			// 
			this->lblIngrese->AutoSize = true;
			this->lblIngrese->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblIngrese->Location = System::Drawing::Point(1942, 17);
			this->lblIngrese->Name = L"lblIngrese";
			this->lblIngrese->Size = System::Drawing::Size(186, 20);
			this->lblIngrese->TabIndex = 7;
			this->lblIngrese->Text = L"Ingrese el sub_conjunto";
			// 
			// btnClear
			// 
			this->btnClear->BackColor = System::Drawing::Color::Aqua;
			this->btnClear->Location = System::Drawing::Point(276, 105);
			this->btnClear->Name = L"btnClear";
			this->btnClear->Size = System::Drawing::Size(122, 45);
			this->btnClear->TabIndex = 8;
			this->btnClear->Text = L"CLEAR";
			this->btnClear->UseVisualStyleBackColor = false;
			this->btnClear->Click += gcnew System::EventHandler(this, &MyForm::btnClear_Click);
			// 
			// lblTpares
			// 
			this->lblTpares->AutoSize = true;
			this->lblTpares->BackColor = System::Drawing::Color::Lime;
			this->lblTpares->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI Light", 10.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTpares->Location = System::Drawing::Point(233, 166);
			this->lblTpares->Name = L"lblTpares";
			this->lblTpares->Size = System::Drawing::Size(170, 23);
			this->lblTpares->TabIndex = 9;
			this->lblTpares->Text = L"PARES ORDENADOS";
			// 
			// btnAuto
			// 
			this->btnAuto->BackColor = System::Drawing::Color::Red;
			this->btnAuto->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAuto->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnAuto->Location = System::Drawing::Point(135, 103);
			this->btnAuto->Name = L"btnAuto";
			this->btnAuto->Size = System::Drawing::Size(120, 47);
			this->btnAuto->TabIndex = 10;
			this->btnAuto->Text = L"Auto";
			this->btnAuto->UseVisualStyleBackColor = false;
			this->btnAuto->Click += gcnew System::EventHandler(this, &MyForm::btnAuto_Click);
			// 
			// lblPruebas
			// 
			this->lblPruebas->AutoSize = true;
			this->lblPruebas->BackColor = System::Drawing::Color::White;
			this->lblPruebas->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lblPruebas->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPruebas->Location = System::Drawing::Point(1, 538);
			this->lblPruebas->Name = L"lblPruebas";
			this->lblPruebas->Size = System::Drawing::Size(562, 33);
			this->lblPruebas->TabIndex = 12;
			this->lblPruebas->Text = L"ELIJA SUS PARES Y HAGA LA COMPROBACIÓN :D";
			this->lblPruebas->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// lblNigresados
			// 
			this->lblNigresados->AutoSize = true;
			this->lblNigresados->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->lblNigresados->Location = System::Drawing::Point(487, 564);
			this->lblNigresados->Name = L"lblNigresados";
			this->lblNigresados->Size = System::Drawing::Size(0, 17);
			this->lblNigresados->TabIndex = 19;
			this->lblNigresados->Click += gcnew System::EventHandler(this, &MyForm::lblNigresados_Click);
			// 
			// btnVerificar
			// 
			this->btnVerificar->BackColor = System::Drawing::Color::Orange;
			this->btnVerificar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnVerificar->Location = System::Drawing::Point(582, 630);
			this->btnVerificar->Name = L"btnVerificar";
			this->btnVerificar->Size = System::Drawing::Size(270, 72);
			this->btnVerificar->TabIndex = 20;
			this->btnVerificar->Text = L"COMPROBAR";
			this->btnVerificar->UseVisualStyleBackColor = false;
			this->btnVerificar->Click += gcnew System::EventHandler(this, &MyForm::btnVerificar_Click);
			// 
			// tbxIngresados
			// 
			this->tbxIngresados->Font = (gcnew System::Drawing::Font(L"Microsoft Yi Baiti", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbxIngresados->ForeColor = System::Drawing::SystemColors::WindowText;
			this->tbxIngresados->Location = System::Drawing::Point(1, 564);
			this->tbxIngresados->Name = L"tbxIngresados";
			this->tbxIngresados->Size = System::Drawing::Size(562, 213);
			this->tbxIngresados->TabIndex = 21;
			this->tbxIngresados->Text = L"";
			this->tbxIngresados->TextChanged += gcnew System::EventHandler(this, &MyForm::richTextBox1_TextChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(1924, 1055);
			this->Controls->Add(this->tbxIngresados);
			this->Controls->Add(this->btnVerificar);
			this->Controls->Add(this->lblNigresados);
			this->Controls->Add(this->lblPruebas);
			this->Controls->Add(this->btnAuto);
			this->Controls->Add(this->lblTpares);
			this->Controls->Add(this->btnClear);
			this->Controls->Add(this->tbxIngrese);
			this->Controls->Add(this->lblIngrese);
			this->Controls->Add(this->lblParesO);
			this->Controls->Add(this->pnlHasse);
			this->Controls->Add(this->btnReady);
			this->Controls->Add(this->lblNumeros);
			this->Controls->Add(this->lblDivisores);
			this->Controls->Add(this->tbxN);
			this->Controls->Add(this->lblN);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnReady_Click(System::Object^  sender, System::EventArgs^  e) {
		//Comprobar();
		if (tbxN->Text !="") {
			btnReady->BackColor = System::Drawing::Color::LightGreen;;
			n = Convert::ToInt32(tbxN->Text);
			String^aux;
			string aux2;//saber el numero de caracteres;
			String^aux3;
			calculo = new Calculator(n);
			lblDivisores->Visible = true;
			lblNumeros->Visible = true;
			lblParesO->Visible = true;
			lblTpares->Visible = true;
			//Dibujando Divisores
			for (int i = 0; i < calculo->getDivisores().size(); i++) {
				aux = calculo->getDivisores()[i] + " ";
				c_div += aux;
			}
			lblNumeros->Text = c_div;
			c_div = "";
			tbxIngresados->Text = " ";
			aux = "";
			//Dibujando Pares Ordenados
			int max = 1;
			for (int i = 0; i < calculo->getParesOrdenados().size(); i++) {
				for (int j = 0; j < calculo->getParesOrdenados()[i].size(); j++) {
					aux += "{" + calculo->getParesOrdenados()[i][j].first + "," + calculo->getParesOrdenados()[i][j].second + "} ";
					aux2 += "{" + to_string(calculo->getParesOrdenados()[i][j].first) + "," + to_string(calculo->getParesOrdenados()[i][j].second) + "} ";
					tbxIngresados->Text+= "{";
					tbxIngresados->Text += calculo->getParesOrdenados()[i][j].first;
					tbxIngresados->Text += ",";
					tbxIngresados->Text += calculo->getParesOrdenados()[i][j].second;
					tbxIngresados->Text +="}";
					tbxIngresados->Text += " ";
					int value = aux2.size();
					if (aux2.size() >= 140 * max) { aux += "\n\n"; max += 1; }
				}
				lblParesO->Text += aux;
				//tbxIngresados->Text += aux3;
				aux = " ";
				aux3 = " ";
			}
			//Graficar();
			//lblIngrese->Visible = true;
			//tbxIngrese->Visible = true;
		}
	
	}
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		//lblNigresados->Text = lblNigresados->Text+ "\n";
	lblDivisores->Visible = false;
		lblNumeros->Visible = false;
		lblParesO->Visible = false;
		lblParesO->Text = "";
		lblIngrese->Visible = false;
		tbxIngrese->Visible = false;
		lblParesO->Visible = false;
		lblTpares->Visible = false;
		formulario->Clear(System::Drawing::Color::White);
		
	}
			 Rectangle ARea(int x,int y) {
				 Rectangle area = Rectangle(x,y,30,30);
				 return area;
			 }
			 //MUESTRA DLAS LINEAS Y COMPARA DIVISIONES
			  void Comparar(pair<vector<vector<int>>, vector<vector<pair<int, int>>>>dibujo) {
				 int a, b, c, d;
				for (int i = 0; i < dibujo.first.size(); i++) {
					for (int j = i+1; j < dibujo.first.size(); j++) {
						for (int k = 0; k < dibujo.first[i].size(); k++) {
							for (int l = 0; l < dibujo.first[j].size(); l++) {
								int proba1 = dibujo.first[i][k];
								int proba2 = dibujo.first[j][l];
								if (proba2 % proba1 == 0) {
									a = dibujo.second[i][k].first;
									b = dibujo.second[i][k].second;
									c = dibujo.second[j][l].first;
									d = dibujo.second[j][l].second;
									//auxpares = { {a,b},{c,d} };
									gr->DrawLine(gcnew Pen(Color::Purple,2), a+15, b+15, c+15, d+15);
								}
							}
						}
						break;
					}
				 }

			 }
		void Graficar() {
	       
		pair<vector<vector<int>>,vector<vector<pair<int,int>>>>dibujo;
		vector< pair<int, int>>aux;
		for (int i = 0; i < calculo->getSub().size(); i++) {
			dibujo.first.push_back(calculo->getSub()[i]);
		}
		////////Rellenando pares con basura
		for (int i = 0; i < calculo->getSub().size();i++) {
			for (int j = 0; j < dibujo.first[i].size(); j++) {
				aux.push_back({ 0,0});
			}
			dibujo.second.push_back(aux);
			aux.clear();
		}
		int mitad = 0;//para inicializar nm
		int index = -1;
					  //////////detectar mitad
		for (auto elem : calculo->getSub()) {
			if (elem.size() <= mitad) {
				break;
			}
			else {
				mitad = elem.size();
				index++;
			}
		}
		if (mitad = 1) index = calculo->getSub().size() / 2;
		int x = 0;
		int  parteMedia =400;
		int y;
		y = parteMedia;
		//////////////////////
		int auxX, auxY;//penultimo
		System::Drawing::Font^ P = gcnew System::Drawing::Font("Arial", 10);
		//MUESTRA CIRCULOS Y NUMEROS
		//////PARTE BAJA
		 for (int i = index; i >=0; i--) {
			 if (i != 0 && calculo->getSub().size()>2) {
				 if (dibujo.first[i].size() == dibujo.first[i + 1].size() )
					 x = 0;
			 }


			 if (i == 0) {
				 auxX = dibujo.second[i + 1][0].first + ((calculo->getSub()[1].size() - 1)*100) / 2;
				 gr->DrawEllipse(gcnew Pen(Color::Red, 3), ARea( auxX, y));
				 gr->FillEllipse(Brushes::White, ARea(auxX, y));
				 gr->DrawString(dibujo.first[i][0] + " ", P, Brushes::Black,auxX+40, y + 5);
				 aux.push_back({auxX, y });
			 }
			 else {

				 for (int j = 0; j < dibujo.first[i].size(); j++) {
					 gr->DrawEllipse(gcnew Pen(Color::Red, 3), ARea(x + j * 100, y));
					 gr->FillEllipse(Brushes::White, ARea(x + j * 100, y));
					 gr->DrawString(dibujo.first[i][j] + " ", P, Brushes::Black, x + 40 + j * 100, y + 5);
					 aux.push_back({ x + j * 100, y });
				 }
			}
			 dibujo.second[i]=aux;
			 aux.clear();
			 y +=100;
			x += 50;
			
			if (i != 0 && calculo->getSub().size()>2) {
				if (dibujo.first[i].size() - dibujo.first[i - 1].size())
					x += 50 * ((dibujo.first[i].size() - dibujo.first[i - 1].size()) - 1);

			}
		 }
		 //////////PARTE ALTA
		 y = parteMedia-100;
		 x = 50;
		
		 for (int i = index + 1; i <calculo->getSub().size(); i++) {
			 ///choque iguales
			 if (i != calculo->getSub().size() - 1&&calculo->getSub().size()>2) {
				 if (dibujo.first[i].size() == dibujo.first[i-1].size())
					 x = 0;
			 }
			 //////////////////
			 if (i != calculo->getSub().size() - 1 && calculo->getSub().size()>2) {
				 if (dibujo.first[i-1].size()- dibujo.first[i].size()>1)
					 x += 50 * ((dibujo.first[i-1].size() - dibujo.first[i ].size()) - 1);
			 }
			 if (i == calculo->getSub().size() - 1) {
				 gr->DrawEllipse(gcnew Pen(Color::Red, 3), ARea(auxX, y));
				 gr->FillEllipse(Brushes::White, ARea(auxX, y));
				 gr->DrawString(dibujo.first[i][0] + " ", P, Brushes::Black, auxX+40, y + 5);
				 aux.push_back({ auxX, y });
			 }
			 else {
				 for (int j = 0; j < dibujo.first[i].size(); j++) {
					 gr->DrawEllipse(gcnew Pen(Color::Red, 3), ARea(x + j * 100, y));
					 gr->FillEllipse(Brushes::White, ARea(x + j * 100, y));
					 gr->DrawString(dibujo.first[i][j] + " ", P, Brushes::Black, x + 40 + j * 100, y + 5);
					 aux.push_back({ x + j * 100, y });
				 }
			 }
			 dibujo.second[i] = aux;
			 aux.clear();
			 y -= 100;
			 x += 50;
		
			
			 ///////////////////////////////////////////////////
		 }
		 /////////////////////////////////////
	Comparar(dibujo);
	
 }
 void Comprobar() {
	 string ingreso;
	// ingreso = Convert::ToString(comprobar_txt->Text);
	 cout << ingreso << endl;
 }
private: System::Void btnClear_Click(System::Object^  sender, System::EventArgs^  e) {
	btnReady->BackColor = System::Drawing::Color::White;
	gr->Clear(System::Drawing::Color::LightBlue);
	formulario->Clear(System::Drawing::Color::Black);
	lblParesO->Text = "";
	tbxN->Text = "";
	lblNumeros->Text = "";
	lblTpares->Visible = false;
	if(!active)
	delete calculo;
	active = false;
}
private: System::Void btnAuto_Click(System::Object^  sender, System::EventArgs^  e) {
	active = true;

	btnReady->BackColor = System::Drawing::Color::White;
	gr->Clear(System::Drawing::Color::LightBlue);
	formulario->Clear(System::Drawing::Color::Black);
	lblParesO->Text = "";
	tbxN->Text = "";
	tbxIngresados->Text = "";
	lblNumeros->Text = "";
	lblTpares->Visible = false;
	n = 5 + rand() % 760;
	tbxN->Text =n+" ";
	String^aux;
	string aux2;//saber el numero de caracteres;
	calculo = new Calculator(n);
	lblDivisores->Visible = true;
	lblNumeros->Visible = true;
	lblParesO->Visible = true;
	lblTpares->Visible = true;
	//Dibujando Divisores
	for (int i = 0; i < calculo->getDivisores().size(); i++) {
		aux = calculo->getDivisores()[i] + " ";
		c_div += aux;
	}
	lblNumeros->Text = c_div;
	c_div = "";
	aux = "";
	//Dibujando Divisores
	for (int i = 0; i < calculo->getDivisores().size(); i++) {
		aux = calculo->getDivisores()[i] + " ";
		c_div += aux;
	}
	lblNumeros->Text = c_div;
	c_div = "";
	aux = "";
	//Dibujando Pares Ordenados
	int max = 1;
	for (int i = 0; i < calculo->getParesOrdenados().size(); i++) {
		for (int j = 0; j < calculo->getParesOrdenados()[i].size(); j++) {
			aux += "{" + calculo->getParesOrdenados()[i][j].first + "," + calculo->getParesOrdenados()[i][j].second + "} ";
			aux2 += "{" + to_string(calculo->getParesOrdenados()[i][j].first) + "," + to_string(calculo->getParesOrdenados()[i][j].second) + "} ";
			int value = aux2.size();
			if (aux2.size() >= 100 * max) { aux += "\n\n"; max += 1; }
		}
		lblParesO->Text += aux;
		tbxIngresados->Text += aux;
		aux = " ";
	}
	//Graficar();
	
//	delete calculo;
}



private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void btnComprobar_Click(System::Object^  sender, System::EventArgs^  e) {
	len++;
	if (len == 10) { 
		lblNigresados->Text = lblNigresados->Text + "\n";
		len = 0; }
} 
void leerNumero(char x) {

                  }
private: System::Void btnVerificar_Click(System::Object^  sender, System::EventArgs^  e) {
	cout << "Matriz antes" << endl;
	
	btnReady->BackColor = System::Drawing::Color::White;
	gr->Clear(System::Drawing::Color::LightBlue);
	String^elemnts = tbxIngresados->Text;
	string recoje;
	string aux;
	for (int i = 0; i < elemnts->Length; i++) {
		recoje.push_back(elemnts[i]);
	}
	//cout << recoje;
	aux = recoje;
	int x, y;
	while (aux.size() != 0) {
		if (aux.front() == ' ')
			aux.erase(aux.begin());
		else {
			aux.erase(aux.begin());
			//		char auxi = aux.front;
			if (aux.front() >= 49 && aux.front() <= 57) {
				string q = "";
				while (aux.front() >= 48 && aux.front() <= 57) {
					q += aux.front();
					aux.erase(aux.begin());
				}
				if (q.size() == 1) {
					char we = q[0];
					x = we - '0';
				}
				else x = stoi(q);
			}
			aux.erase(aux.begin());
			if (aux.front() >= 49 && aux.front() <= 57) {
				string q = "";
				while (aux.front() >= 48 && aux.front() <= 57) {
					q += aux.front();
					aux.erase(aux.begin());
				}
				if (q.size() == 1) {
					char we = q[0];
					y = we - '0';
				}
				else y = stoi(q);
			}
			aux.erase(aux.begin());
			calculo->cambiarPos(calculo->getPos()[x], calculo->getPos()[y]);
		}
	}
	calculo->MostrarMatriz();

	//cout<<"PQ NO ENTRA?"<<endl;
	if (calculo->Reflexiva() == true&& calculo->Antisimetrica() == true &&calculo->Transitiva()==true) {
			MessageBox::Show("SEGÚN SUS CONJUNTOS INGRESADOS:\nES REFLEXIVA\nES ANTISIMÉTRICA\nES TRANSITIVA\nPOR TANTO ES DE ORDEN PARCIAL\nOK PARA MOSTRAR EL DIAGRAMA :D");
			Graficar();
	}
	else {
       
		if (calculo->Reflexiva() == false && calculo->Antisimetrica() == false && calculo->Transitiva() == false) {
			MessageBox::Show("SEGÚN SUS SUBCONJUNTOS INGRESADOS:\nNO ES REFLEXIVA\nNO ES ANTISIMÉTRICA\nNO ES TRANSITIVA\nNO PODEMOS MOSTRAR EL DIAGRAMA :C");
		}
		else if (calculo->Reflexiva() == true && calculo->Antisimetrica() == false && calculo->Transitiva() == false) {
			MessageBox::Show("SEGÚN SUS SUBCONJUNTOS INGRESADOS:\nES REFLEXIVA\nNO ES ANTISIMÉTRICA\nNO ES TRANSITIVA\nNO PODEMOS MOSTRAR EL DIAGRAMA :C");
		}
		else if (calculo->Reflexiva() == false && calculo->Antisimetrica() == true && calculo->Transitiva() == false) {
			MessageBox::Show("SEGÚN SUS SUBCONJUNTOS INGRESADOS:\nNO ES REFLEXIVA\nES ANTISIMÉTRICA\nNO ES TRANSITIVA\nNO PODEMOS MOSTRAR EL DIAGRAMA :C");
		}
		else if(calculo->Reflexiva() == false && calculo->Antisimetrica() == false && calculo->Transitiva() == true){
			MessageBox::Show("SEGÚN SUS SUBCONJUNTOS INGRESADOS:\nNO ES REFLEXIVA\n NO ES ANTISIMÉTRICA\nES TRANSITIVA\nNO PODEMOS MOSTRAR EL DIAGRAMA :C");
		}
		else if (calculo->Reflexiva() == true && calculo->Antisimetrica() == true && calculo->Transitiva() == false) {
			MessageBox::Show("SEGÚN SUS SUBCONJUNTOS INGRESADOS:\nES REFLEXIVA\nES ANTISIMÉTRICA\nNO ES TRANSITIVA\nNO PODEMOS MOSTRAR EL DIAGRAMA :C");
		}
		else if (calculo->Reflexiva() ==false && calculo->Antisimetrica() == true && calculo->Transitiva() == true) {
			MessageBox::Show("SEGÚN SUS SUBCONJUNTOS INGRESADOS:\nNO ES REFLEXIVA\nES ANTISIMÉTRICA\nNO ES TRANSITIVA\nNO PODEMOS MOSTRAR EL DIAGRAMA :C");
		}
		else if (calculo->Reflexiva() == true && calculo->Antisimetrica() == false && calculo->Transitiva() == true) {
			MessageBox::Show("SEGÚN SUS SUBCONJUNTOS INGRESADOS:\nES REFLEXIVA\nNO ES ANTISIMÉTRICA\nES TRANSITIVA\nNO PODEMOS MOSTRAR EL DIAGRAMA :C");
		}
	}
	//lblNigresados->Text="CONJUNTOS INGRESADOS\n ";
	calculo->Matriz();
}
private: System::Void lblNigresados_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void richTextBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
};
}
