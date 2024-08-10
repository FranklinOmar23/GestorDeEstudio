#pragma once

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	private: System::Collections::Generic::Dictionary<DateTime, System::Collections::Generic::List<String^>^>^ recordatorios;
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

			recordatorios = gcnew System::Collections::Generic::Dictionary<DateTime, System::Collections::Generic::List<String^>^>();

			dateTimePickerEntrada->Format = DateTimePickerFormat::Time;
			dateTimePickerEntrada->ShowUpDown = true; // Flechas para ajustar horas y minutos

			dateTimePickerSalida->Format = DateTimePickerFormat::Time;
			dateTimePickerSalida->ShowUpDown = true;

			// Ahora es seguro acceder al dataGridViewMaterias
			dataGridViewMaterias->ColumnCount = 5;
			dataGridViewMaterias->Columns[0]->Name = "Nombre de la Materia";
			dataGridViewMaterias->Columns[1]->Name = "Maestro";
			dataGridViewMaterias->Columns[2]->Name = "Horario";
			dataGridViewMaterias->Columns[3]->Name = "Día de Clases";
			dataGridViewMaterias->Columns[4]->Name = "Aula/Modalidad";
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::MonthCalendar^ monthCalendarExamenes;
	protected:

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::DataGridView^ dataGridViewMaterias;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtNombreMateria;
	private: System::Windows::Forms::TextBox^ txtDiaClases;




	private: System::Windows::Forms::TextBox^ txtAulaModalidad;



	private: System::Windows::Forms::TextBox^ txtMaestro;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ btnAgregar;
	private: System::Windows::Forms::Button^ btnCancelar;
	private: System::Windows::Forms::Button^ btnActualizarLista;



	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ txtNombreRecordatorio;

	private: System::Windows::Forms::Label^ label13;

	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::ComboBox^ comboBoxImportancia;

	private: System::Windows::Forms::Button^ btnAgregarRecordatorio;

	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::DateTimePicker^ dateTimePickerEntrada;
	private: System::Windows::Forms::DateTimePicker^ dateTimePickerSalida;


	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::DateTimePicker^ dateTimePickerFecha;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->monthCalendarExamenes = (gcnew System::Windows::Forms::MonthCalendar());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->dataGridViewMaterias = (gcnew System::Windows::Forms::DataGridView());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtNombreMateria = (gcnew System::Windows::Forms::TextBox());
			this->txtDiaClases = (gcnew System::Windows::Forms::TextBox());
			this->txtAulaModalidad = (gcnew System::Windows::Forms::TextBox());
			this->txtMaestro = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->btnAgregar = (gcnew System::Windows::Forms::Button());
			this->btnCancelar = (gcnew System::Windows::Forms::Button());
			this->btnActualizarLista = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->txtNombreRecordatorio = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->comboBoxImportancia = (gcnew System::Windows::Forms::ComboBox());
			this->btnAgregarRecordatorio = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->dateTimePickerEntrada = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePickerSalida = (gcnew System::Windows::Forms::DateTimePicker());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->dateTimePickerFecha = (gcnew System::Windows::Forms::DateTimePicker());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewMaterias))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(34, 54);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(201, 23);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Proximos Examenes";
			// 
			// monthCalendarExamenes
			// 
			this->monthCalendarExamenes->Location = System::Drawing::Point(16, 86);
			this->monthCalendarExamenes->Name = L"monthCalendarExamenes";
			this->monthCalendarExamenes->TabIndex = 1;
			this->monthCalendarExamenes->DateChanged += gcnew System::Windows::Forms::DateRangeEventHandler(this, &Form1::monthCalendarExamenes_DateChanged);
			this->monthCalendarExamenes->DateSelected += gcnew System::Windows::Forms::DateRangeEventHandler(this, &Form1::monthCalendarExamenes_DateSelected);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->panel1->Location = System::Drawing::Point(276, -3);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(10, 568);
			this->panel1->TabIndex = 2;
			// 
			// dataGridViewMaterias
			// 
			this->dataGridViewMaterias->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewMaterias->Location = System::Drawing::Point(292, 310);
			this->dataGridViewMaterias->Name = L"dataGridViewMaterias";
			this->dataGridViewMaterias->Size = System::Drawing::Size(850, 240);
			this->dataGridViewMaterias->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AccessibleDescription = L"";
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(636, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(163, 23);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Agregar Materia";
			// 
			// txtNombreMateria
			// 
			this->txtNombreMateria->Location = System::Drawing::Point(292, 111);
			this->txtNombreMateria->Name = L"txtNombreMateria";
			this->txtNombreMateria->Size = System::Drawing::Size(217, 20);
			this->txtNombreMateria->TabIndex = 5;
			this->txtNombreMateria->Text = L"Ingrese la materia";
			// 
			// txtDiaClases
			// 
			this->txtDiaClases->Location = System::Drawing::Point(292, 198);
			this->txtDiaClases->Name = L"txtDiaClases";
			this->txtDiaClases->Size = System::Drawing::Size(134, 20);
			this->txtDiaClases->TabIndex = 6;
			// 
			// txtAulaModalidad
			// 
			this->txtAulaModalidad->Location = System::Drawing::Point(473, 201);
			this->txtAulaModalidad->Name = L"txtAulaModalidad";
			this->txtAulaModalidad->Size = System::Drawing::Size(158, 20);
			this->txtAulaModalidad->TabIndex = 8;
			// 
			// txtMaestro
			// 
			this->txtMaestro->Location = System::Drawing::Point(548, 111);
			this->txtMaestro->Name = L"txtMaestro";
			this->txtMaestro->Size = System::Drawing::Size(158, 20);
			this->txtMaestro->TabIndex = 9;
			// 
			// label3
			// 
			this->label3->AccessibleDescription = L"";
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(292, 76);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(217, 23);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Nombre de la materia";
			// 
			// label4
			// 
			this->label4->AccessibleDescription = L"";
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(544, 76);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(87, 23);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Maestro";
			// 
			// label5
			// 
			this->label5->AccessibleDescription = L"";
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(739, 76);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(190, 23);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Horario de entrada";
			// 
			// label6
			// 
			this->label6->AccessibleDescription = L"";
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(292, 160);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(134, 23);
			this->label6->TabIndex = 13;
			this->label6->Text = L"Dia de clases";
			// 
			// label7
			// 
			this->label7->AccessibleDescription = L"";
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(544, 160);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(0, 23);
			this->label7->TabIndex = 14;
			// 
			// btnAgregar
			// 
			this->btnAgregar->Location = System::Drawing::Point(925, 198);
			this->btnAgregar->Name = L"btnAgregar";
			this->btnAgregar->Size = System::Drawing::Size(101, 23);
			this->btnAgregar->TabIndex = 15;
			this->btnAgregar->Text = L"Agregar";
			this->btnAgregar->UseVisualStyleBackColor = true;
			this->btnAgregar->Click += gcnew System::EventHandler(this, &Form1::btnAgregar_Click);
			// 
			// btnCancelar
			// 
			this->btnCancelar->Location = System::Drawing::Point(1032, 198);
			this->btnCancelar->Name = L"btnCancelar";
			this->btnCancelar->Size = System::Drawing::Size(102, 23);
			this->btnCancelar->TabIndex = 16;
			this->btnCancelar->Text = L"Cancelar";
			this->btnCancelar->UseVisualStyleBackColor = true;
			this->btnCancelar->Click += gcnew System::EventHandler(this, &Form1::btnCancelar_Click);
			// 
			// btnActualizarLista
			// 
			this->btnActualizarLista->Location = System::Drawing::Point(925, 227);
			this->btnActualizarLista->Name = L"btnActualizarLista";
			this->btnActualizarLista->Size = System::Drawing::Size(209, 23);
			this->btnActualizarLista->TabIndex = 17;
			this->btnActualizarLista->Text = L"Actualizar Listado";
			this->btnActualizarLista->UseVisualStyleBackColor = true;
			// 
			// label8
			// 
			this->label8->AccessibleDescription = L"";
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(636, 271);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(198, 23);
			this->label8->TabIndex = 18;
			this->label8->Text = L"Listado de materias";
			// 
			// label9
			// 
			this->label9->AccessibleDescription = L"";
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::White;
			this->label9->Location = System::Drawing::Point(469, 160);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(162, 23);
			this->label9->TabIndex = 19;
			this->label9->Text = L"Aula/Modalidad";
			// 
			// label10
			// 
			this->label10->AccessibleDescription = L"";
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::White;
			this->label10->Location = System::Drawing::Point(921, 160);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(94, 23);
			this->label10->TabIndex = 20;
			this->label10->Text = L"Acciones";
			// 
			// label11
			// 
			this->label11->AccessibleDescription = L"";
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::White;
			this->label11->Location = System::Drawing::Point(12, 271);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(226, 23);
			this->label11->TabIndex = 21;
			this->label11->Text = L"Añadir un recordatorio";
			// 
			// label12
			// 
			this->label12->AccessibleDescription = L"";
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::White;
			this->label12->Location = System::Drawing::Point(12, 310);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(245, 23);
			this->label12->TabIndex = 22;
			this->label12->Text = L"Nombre del recordatorio";
			// 
			// txtNombreRecordatorio
			// 
			this->txtNombreRecordatorio->Location = System::Drawing::Point(12, 349);
			this->txtNombreRecordatorio->Name = L"txtNombreRecordatorio";
			this->txtNombreRecordatorio->Size = System::Drawing::Size(245, 20);
			this->txtNombreRecordatorio->TabIndex = 23;
			// 
			// label13
			// 
			this->label13->AccessibleDescription = L"";
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::White;
			this->label13->Location = System::Drawing::Point(12, 383);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(65, 23);
			this->label13->TabIndex = 24;
			this->label13->Text = L"Fecha";
			// 
			// label14
			// 
			this->label14->AccessibleDescription = L"";
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::SystemColors::Window;
			this->label14->Location = System::Drawing::Point(12, 453);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(127, 23);
			this->label14->TabIndex = 26;
			this->label14->Text = L"Importancia";
			// 
			// comboBoxImportancia
			// 
			this->comboBoxImportancia->FormattingEnabled = true;
			this->comboBoxImportancia->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"IMPORTANTE", L"REGULAR", L"NORMAL" });
			this->comboBoxImportancia->Location = System::Drawing::Point(16, 490);
			this->comboBoxImportancia->Name = L"comboBoxImportancia";
			this->comboBoxImportancia->Size = System::Drawing::Size(241, 21);
			this->comboBoxImportancia->TabIndex = 27;
			// 
			// btnAgregarRecordatorio
			// 
			this->btnAgregarRecordatorio->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnAgregarRecordatorio->Location = System::Drawing::Point(16, 527);
			this->btnAgregarRecordatorio->Name = L"btnAgregarRecordatorio";
			this->btnAgregarRecordatorio->Size = System::Drawing::Size(75, 23);
			this->btnAgregarRecordatorio->TabIndex = 28;
			this->btnAgregarRecordatorio->Text = L"Agregar";
			this->btnAgregarRecordatorio->UseVisualStyleBackColor = true;
			this->btnAgregarRecordatorio->Click += gcnew System::EventHandler(this, &Form1::btnAgregarRecordatorio_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(163, 527);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 29;
			this->button5->Text = L"Cancelar";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// dateTimePickerEntrada
			// 
			this->dateTimePickerEntrada->Location = System::Drawing::Point(743, 111);
			this->dateTimePickerEntrada->Name = L"dateTimePickerEntrada";
			this->dateTimePickerEntrada->Size = System::Drawing::Size(200, 20);
			this->dateTimePickerEntrada->TabIndex = 30;
			// 
			// dateTimePickerSalida
			// 
			this->dateTimePickerSalida->Location = System::Drawing::Point(674, 201);
			this->dateTimePickerSalida->Name = L"dateTimePickerSalida";
			this->dateTimePickerSalida->Size = System::Drawing::Size(200, 20);
			this->dateTimePickerSalida->TabIndex = 31;
			// 
			// label15
			// 
			this->label15->AccessibleDescription = L"";
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->ForeColor = System::Drawing::Color::White;
			this->label15->Location = System::Drawing::Point(670, 160);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(173, 23);
			this->label15->TabIndex = 32;
			this->label15->Text = L"Horario de salida";
			// 
			// dateTimePickerFecha
			// 
			this->dateTimePickerFecha->Location = System::Drawing::Point(16, 418);
			this->dateTimePickerFecha->Name = L"dateTimePickerFecha";
			this->dateTimePickerFecha->Size = System::Drawing::Size(241, 20);
			this->dateTimePickerFecha->TabIndex = 33;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(28)));
			this->ClientSize = System::Drawing::Size(1146, 562);
			this->Controls->Add(this->dateTimePickerFecha);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->dateTimePickerSalida);
			this->Controls->Add(this->dateTimePickerEntrada);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->btnAgregarRecordatorio);
			this->Controls->Add(this->comboBoxImportancia);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->txtNombreRecordatorio);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->btnActualizarLista);
			this->Controls->Add(this->btnCancelar);
			this->Controls->Add(this->btnAgregar);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txtMaestro);
			this->Controls->Add(this->txtAulaModalidad);
			this->Controls->Add(this->txtDiaClases);
			this->Controls->Add(this->txtNombreMateria);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->dataGridViewMaterias);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->monthCalendarExamenes);
			this->Controls->Add(this->label1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewMaterias))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::DateTime GetNextDateOfWeek(System::DayOfWeek dayOfWeek) {
		DateTime today = DateTime::Today;
		int daysUntilNext = ((int)dayOfWeek - (int)today.DayOfWeek + 7) % 7;
		return today.AddDays(daysUntilNext);
	}

	private: System::Void btnAgregar_Click(System::Object^ sender, System::EventArgs^ e) {
		// Capturar la información de los campos de texto
		String^ nombre = txtNombreMateria->Text;
		String^ maestro = txtMaestro->Text;
		String^ diaClases = txtDiaClases->Text;
		String^ aulaModalidad = txtAulaModalidad->Text;

		// Obtener las horas seleccionadas de los DateTimePicker
		String^ horario = dateTimePickerEntrada->Value.ToShortTimeString() + " a " + dateTimePickerSalida->Value.ToShortTimeString();

		// Verificar que no estén vacíos los campos requeridos
		if (String::IsNullOrEmpty(nombre) || String::IsNullOrEmpty(maestro) || String::IsNullOrEmpty(diaClases)) {
			MessageBox::Show("Por favor, completa todos los campos requeridos.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		// Mapear los días de la semana en inglés a los en español
		System::Collections::Generic::Dictionary<String^, System::DayOfWeek>^ dias = gcnew System::Collections::Generic::Dictionary<String^, System::DayOfWeek>();
		dias->Add("Lunes", System::DayOfWeek::Monday);
		dias->Add("Martes", System::DayOfWeek::Tuesday);
		dias->Add("Miércoles", System::DayOfWeek::Wednesday);
		dias->Add("Jueves", System::DayOfWeek::Thursday);
		dias->Add("Viernes", System::DayOfWeek::Friday);
		dias->Add("Sábado", System::DayOfWeek::Saturday);
		dias->Add("Domingo", System::DayOfWeek::Sunday);

		if (dias->ContainsKey(diaClases)) {
			// Obtener la próxima fecha correspondiente al día de la semana
			DateTime fechaClase = GetNextDateOfWeek(dias[diaClases]);

			// Añadir la fecha al calendario en negrita
			monthCalendarExamenes->AddBoldedDate(fechaClase);
			monthCalendarExamenes->UpdateBoldedDates();
		}
		else {
			MessageBox::Show("El día de la semana ingresado no es válido.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		// Agregar la información al DataGridView
		int n = dataGridViewMaterias->Rows->Add();
		dataGridViewMaterias->Rows[n]->Cells[0]->Value = nombre;
		dataGridViewMaterias->Rows[n]->Cells[1]->Value = maestro;
		dataGridViewMaterias->Rows[n]->Cells[2]->Value = horario;
		dataGridViewMaterias->Rows[n]->Cells[3]->Value = diaClases;
		dataGridViewMaterias->Rows[n]->Cells[4]->Value = aulaModalidad;

		// Limpiar los campos después de agregar la materia
		txtNombreMateria->Clear();
		txtMaestro->Clear();
		txtDiaClases->Clear();
		txtAulaModalidad->Clear();
		dateTimePickerEntrada->Value = DateTime::Now;
		dateTimePickerSalida->Value = DateTime::Now;
	}
private: System::Void btnCancelar_Click(System::Object^ sender, System::EventArgs^ e) {
	txtNombreMateria->Clear();
	txtMaestro->Clear();
	txtDiaClases->Clear();
	txtAulaModalidad->Clear();
	dateTimePickerEntrada->Value = DateTime::Now; // Resetear a la hora actual
	dateTimePickerSalida->Value = DateTime::Now;
}
private: System::Void btnAgregarRecordatorio_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ nombreRecordatorio = txtNombreRecordatorio->Text;
	DateTime fechaRecordatorio = dateTimePickerFecha->Value.Date;  // Solo la fecha, sin hora
	String^ importancia = comboBoxImportancia->SelectedItem->ToString();

	if (String::IsNullOrEmpty(nombreRecordatorio) || String::IsNullOrEmpty(importancia)) {
		MessageBox::Show("Por favor, completa todos los campos.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	// Guardar el recordatorio en el diccionario
	if (!recordatorios->ContainsKey(fechaRecordatorio)) {
		recordatorios[fechaRecordatorio] = gcnew System::Collections::Generic::List<String^>();
	}
	recordatorios[fechaRecordatorio]->Add(nombreRecordatorio + " (" + importancia + ")");

	// Agregar el recordatorio al calendario
	monthCalendarExamenes->AddBoldedDate(fechaRecordatorio);
	monthCalendarExamenes->UpdateBoldedDates();

	// Limpiar los campos después de agregar el recordatorio
	txtNombreRecordatorio->Clear();
	comboBoxImportancia->SelectedIndex = -1;
	dateTimePickerFecha->Value = DateTime::Now;
}
private: System::Void monthCalendarExamenes_DateChanged(System::Object^ sender, System::Windows::Forms::DateRangeEventArgs^ e) {
}
private: System::Void monthCalendarExamenes_DateSelected(System::Object^ sender, System::Windows::Forms::DateRangeEventArgs^ e) {
	DateTime fechaSeleccionada = e->Start.Date;  // Obtener la fecha seleccionada

	if (recordatorios->ContainsKey(fechaSeleccionada)) {
		// Concatenar todos los recordatorios de esa fecha
		String^ mensaje = "Recordatorios para " + fechaSeleccionada.ToShortDateString() + ":\n";
		for each (String ^ recordatorio in recordatorios[fechaSeleccionada]) {
			mensaje += "- " + recordatorio + "\n";
		}
		MessageBox::Show(mensaje, "Recordatorios", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	else {
		MessageBox::Show("No hay recordatorios para esta fecha.", "Recordatorios", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
}
};
}
