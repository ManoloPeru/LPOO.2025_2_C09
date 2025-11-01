#pragma once

namespace SGELProdAutomView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace SGELProdAutomModel;
	using namespace SGELProdAutomController;

	/// <summary>
	/// Resumen de FormGraficosRendimiento
	/// </summary>
	public ref class FormGraficosRendimiento : public System::Windows::Forms::Form
	{
	public:
		FormGraficosRendimiento(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			this->maquinaController = gcnew MaquinaController();
			this->rendimientoController = gcnew RendimientoController();
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~FormGraficosRendimiento()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ labelTitulo;
	private: System::Windows::Forms::Panel^ panelControles;
	private: System::Windows::Forms::Label^ labelMaquina;
	private: System::Windows::Forms::TextBox^ textBoxX0;
	private: System::Windows::Forms::Label^ labelX0;
	private: System::Windows::Forms::TextBox^ textBoxK;
	private: System::Windows::Forms::Label^ labelK;
	private: System::Windows::Forms::ComboBox^ comboBoxMaquinas;
	private: System::Windows::Forms::Button^ buttonExportar;
	private: System::Windows::Forms::Button^ buttonLimpiar;
	private: System::Windows::Forms::Button^ buttonGraficar;
	private: System::Windows::Forms::PictureBox^ pictureBoxGrafico;
	private: MaquinaController^ maquinaController;
	private: RendimientoController^ rendimientoController;

	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->labelTitulo = (gcnew System::Windows::Forms::Label());
			this->panelControles = (gcnew System::Windows::Forms::Panel());
			this->buttonExportar = (gcnew System::Windows::Forms::Button());
			this->buttonLimpiar = (gcnew System::Windows::Forms::Button());
			this->buttonGraficar = (gcnew System::Windows::Forms::Button());
			this->comboBoxMaquinas = (gcnew System::Windows::Forms::ComboBox());
			this->labelMaquina = (gcnew System::Windows::Forms::Label());
			this->textBoxX0 = (gcnew System::Windows::Forms::TextBox());
			this->labelX0 = (gcnew System::Windows::Forms::Label());
			this->textBoxK = (gcnew System::Windows::Forms::TextBox());
			this->labelK = (gcnew System::Windows::Forms::Label());
			this->pictureBoxGrafico = (gcnew System::Windows::Forms::PictureBox());
			this->panelControles->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxGrafico))->BeginInit();
			this->SuspendLayout();
			// 
			// labelTitulo
			// 
			this->labelTitulo->AutoSize = true;
			this->labelTitulo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelTitulo->Location = System::Drawing::Point(157, 19);
			this->labelTitulo->Name = L"labelTitulo";
			this->labelTitulo->Size = System::Drawing::Size(388, 24);
			this->labelTitulo->TabIndex = 0;
			this->labelTitulo->Text = L"GRÁFICO DE RENDIMIENTO SIGMOIDE";
			// 
			// panelControles
			// 
			this->panelControles->Controls->Add(this->buttonExportar);
			this->panelControles->Controls->Add(this->buttonLimpiar);
			this->panelControles->Controls->Add(this->buttonGraficar);
			this->panelControles->Controls->Add(this->comboBoxMaquinas);
			this->panelControles->Controls->Add(this->labelMaquina);
			this->panelControles->Controls->Add(this->textBoxX0);
			this->panelControles->Controls->Add(this->labelX0);
			this->panelControles->Controls->Add(this->textBoxK);
			this->panelControles->Controls->Add(this->labelK);
			this->panelControles->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panelControles->Location = System::Drawing::Point(12, 46);
			this->panelControles->Name = L"panelControles";
			this->panelControles->Size = System::Drawing::Size(752, 230);
			this->panelControles->TabIndex = 1;
			// 
			// buttonExportar
			// 
			this->buttonExportar->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->buttonExportar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonExportar->ForeColor = System::Drawing::Color::White;
			this->buttonExportar->Location = System::Drawing::Point(269, 141);
			this->buttonExportar->Margin = System::Windows::Forms::Padding(5);
			this->buttonExportar->Name = L"buttonExportar";
			this->buttonExportar->Size = System::Drawing::Size(165, 43);
			this->buttonExportar->TabIndex = 15;
			this->buttonExportar->Text = L"Exportar a CSV";
			this->buttonExportar->UseVisualStyleBackColor = false;
			this->buttonExportar->Click += gcnew System::EventHandler(this, &FormGraficosRendimiento::buttonExportar_Click);
			// 
			// buttonLimpiar
			// 
			this->buttonLimpiar->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->buttonLimpiar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonLimpiar->ForeColor = System::Drawing::Color::White;
			this->buttonLimpiar->Location = System::Drawing::Point(486, 141);
			this->buttonLimpiar->Margin = System::Windows::Forms::Padding(5);
			this->buttonLimpiar->Name = L"buttonLimpiar";
			this->buttonLimpiar->Size = System::Drawing::Size(137, 43);
			this->buttonLimpiar->TabIndex = 14;
			this->buttonLimpiar->Text = L"Limpiar";
			this->buttonLimpiar->UseVisualStyleBackColor = false;
			this->buttonLimpiar->Click += gcnew System::EventHandler(this, &FormGraficosRendimiento::buttonLimpiar_Click);
			// 
			// buttonGraficar
			// 
			this->buttonGraficar->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->buttonGraficar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonGraficar->ForeColor = System::Drawing::Color::White;
			this->buttonGraficar->Location = System::Drawing::Point(83, 141);
			this->buttonGraficar->Margin = System::Windows::Forms::Padding(5);
			this->buttonGraficar->Name = L"buttonGraficar";
			this->buttonGraficar->Size = System::Drawing::Size(137, 43);
			this->buttonGraficar->TabIndex = 13;
			this->buttonGraficar->Text = L"Graficar";
			this->buttonGraficar->UseVisualStyleBackColor = false;
			this->buttonGraficar->Click += gcnew System::EventHandler(this, &FormGraficosRendimiento::buttonGraficar_Click);
			// 
			// comboBoxMaquinas
			// 
			this->comboBoxMaquinas->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->comboBoxMaquinas->FormattingEnabled = true;
			this->comboBoxMaquinas->Location = System::Drawing::Point(240, 80);
			this->comboBoxMaquinas->Name = L"comboBoxMaquinas";
			this->comboBoxMaquinas->Size = System::Drawing::Size(471, 32);
			this->comboBoxMaquinas->TabIndex = 5;
			// 
			// labelMaquina
			// 
			this->labelMaquina->AutoSize = true;
			this->labelMaquina->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelMaquina->Location = System::Drawing::Point(19, 83);
			this->labelMaquina->Name = L"labelMaquina";
			this->labelMaquina->Size = System::Drawing::Size(88, 24);
			this->labelMaquina->TabIndex = 4;
			this->labelMaquina->Text = L"Máquina:";
			// 
			// textBoxX0
			// 
			this->textBoxX0->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBoxX0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxX0->Location = System::Drawing::Point(611, 28);
			this->textBoxX0->Name = L"textBoxX0";
			this->textBoxX0->Size = System::Drawing::Size(100, 29);
			this->textBoxX0->TabIndex = 3;
			// 
			// labelX0
			// 
			this->labelX0->AutoSize = true;
			this->labelX0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelX0->Location = System::Drawing::Point(390, 33);
			this->labelX0->Name = L"labelX0";
			this->labelX0->Size = System::Drawing::Size(199, 24);
			this->labelX0->TabIndex = 2;
			this->labelX0->Text = L"Punto de Inflexión (x₀):";
			// 
			// textBoxK
			// 
			this->textBoxK->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBoxK->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxK->Location = System::Drawing::Point(240, 28);
			this->textBoxK->Name = L"textBoxK";
			this->textBoxK->Size = System::Drawing::Size(100, 29);
			this->textBoxK->TabIndex = 1;
			// 
			// labelK
			// 
			this->labelK->AutoSize = true;
			this->labelK->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelK->Location = System::Drawing::Point(19, 33);
			this->labelK->Name = L"labelK";
			this->labelK->Size = System::Drawing::Size(215, 24);
			this->labelK->TabIndex = 0;
			this->labelK->Text = L"Tasa de Crecimiento (k):";
			// 
			// pictureBoxGrafico
			// 
			this->pictureBoxGrafico->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->pictureBoxGrafico->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBoxGrafico->Location = System::Drawing::Point(18, 282);
			this->pictureBoxGrafico->Name = L"pictureBoxGrafico";
			this->pictureBoxGrafico->Size = System::Drawing::Size(745, 409);
			this->pictureBoxGrafico->TabIndex = 2;
			this->pictureBoxGrafico->TabStop = false;
			// 
			// FormGraficosRendimiento
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(794, 725);
			this->Controls->Add(this->pictureBoxGrafico);
			this->Controls->Add(this->panelControles);
			this->Controls->Add(this->labelTitulo);
			this->Name = L"FormGraficosRendimiento";
			this->Text = L"Gráficos de Rendimiento - Línea de Producción";
			this->Load += gcnew System::EventHandler(this, &FormGraficosRendimiento::FormGraficosRendimiento_Load);
			this->panelControles->ResumeLayout(false);
			this->panelControles->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxGrafico))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: System::Void FormGraficosRendimiento_Load(System::Object^ sender, System::EventArgs^ e) {
			// Cargar las máquinas en el ComboBox al cargar el formulario
			this->comboBoxMaquinas->Items->Clear();

			// Configurar el ComboBox para mostrar objetos Maquina
			this->comboBoxMaquinas->DisplayMember = "ToString"; // Mostrará el resultado de ToString()
			this->comboBoxMaquinas->ValueMember = "IdMaquina";  // Valor interno será el ID

			List<Maquina^>^ listaMaquinas = this->maquinaController->ObtenerTodosMaquinas();
			for each (Maquina ^ maquina in listaMaquinas) {
				this->comboBoxMaquinas->Items->Add(maquina);
			}
			// Seleccionar el primer elemento si existe
			if (this->comboBoxMaquinas->Items->Count > 0) {
				this->comboBoxMaquinas->SelectedIndex = 0;
			}
		}

			   void FormGraficosRendimiento::pictureBoxGrafico_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e)
			   {
				   Graphics^ g = e->Graphics;
				   g->SmoothingMode = System::Drawing::Drawing2D::SmoothingMode::AntiAlias;
				   g->Clear(Color::White);

				   // Dibujar siempre los ejes
				   DibujarEjes(g);
			   }

			   PointF FormGraficosRendimiento::ConvertirCoordenadas(double x, double y)
			   {
				   int ancho = this->pictureBoxGrafico->Width;
				   int alto = this->pictureBoxGrafico->Height;

				   // Margen para que la curva no toque los bordes
				   float margen = 20.0f;
				   float areaUtilAncho = ancho - 2 * margen;
				   float areaUtilAlto = alto - 2 * margen;

				   // Rango de datos (puedes ajustar según tus necesidades)
				   double xMin = 0.0;
				   double xMax = 100.0; // O calcular dinámicamente basado en el modelo
				   double yMin = 0.0;
				   double yMax = 100.0;

				   // Escalas con márgenes
				   float escalaX = areaUtilAncho / (xMax - xMin);
				   float escalaY = areaUtilAlto / (yMax - yMin);

				   // Convertir coordenadas con márgenes
				   float px = margen + static_cast<float>((x - xMin) * escalaX);
				   float py = margen + static_cast<float>(areaUtilAlto - ((y - yMin) * escalaY));

				   return PointF(px, py);
			   }

			   void FormGraficosRendimiento::DibujarEjes(Graphics^ g)
			   {
				   // Usar System::Drawing::Pen y System::Drawing::Font
				   System::Drawing::Pen^ penEjes = gcnew System::Drawing::Pen(System::Drawing::Color::Black, 2);
				   System::Drawing::Pen^ penGrid = gcnew System::Drawing::Pen(System::Drawing::Color::LightGray, 1);
				   System::Drawing::SolidBrush^ brushTexto = gcnew System::Drawing::SolidBrush(System::Drawing::Color::Black);
				   System::Drawing::Font^ fontEjes = gcnew System::Drawing::Font("Arial", 8);

				   // Obtener dimensiones del PictureBox
				   float ancho = static_cast<float>(this->pictureBoxGrafico->Width);
				   float alto = static_cast<float>(this->pictureBoxGrafico->Height);

				   // Rangos de datos (deben coincidir con ConvertirCoordenadas)
				   double xMin = -10.0, xMax = 110.0;
				   double yMin = -10.0, yMax = 110.0;

				   float escalaX = (ancho - 10) / (xMax - xMin);
				   float escalaY = (alto - 10) / (yMax - yMin);

				   // Dibujar ejes principales
				   g->DrawLine(penEjes, 0.0f, alto, ancho, alto);  // Eje X (inferior)
				   g->DrawLine(penEjes, 0.0f, 0.0f, 0.0f, alto);   // Eje Y (izquierdo)

				   // Dibujar grid y marcas en eje X
				   for (int x = 0; x <= 100; x += 10) {
					   float px = static_cast<float>((x - xMin) * escalaX);
					   g->DrawLine(penGrid, px, 0.0f, px, alto);

					   if (x % 20 == 0) {
						   String^ texto = x.ToString();
						   g->DrawString(texto, fontEjes, brushTexto, px - 10.0f, alto + 5.0f);
						   // Marca en el eje
						   g->DrawLine(penEjes, px, alto - 5.0f, px, alto + 5.0f);
					   }
				   }

				   // Dibujar grid y marcas en eje Y
				   for (int y = 0; y <= 100; y += 10) {
					   float py = static_cast<float>(alto - ((y - yMin) * escalaY));
					   g->DrawLine(penGrid, 0.0f, py, ancho, py);

					   if (y % 20 == 0) {
						   String^ texto = y.ToString() + "%";
						   g->DrawString(texto, fontEjes, brushTexto, 5.0f, py - 8.0f);
						   // Marca en el eje
						   g->DrawLine(penEjes, -5.0f, py, 5.0f, py);
					   }
				   }

				   // Etiquetas de ejes
				   System::Drawing::Font^ fontEtiquetas = gcnew System::Drawing::Font("Arial", 10, System::Drawing::FontStyle::Bold);
				   g->DrawString("Horas Operativas", fontEtiquetas, brushTexto, ancho / 2.0f - 50.0f, alto + 25.0f);

				   // Para el eje Y, usar transformación de rotación
				   System::Drawing::StringFormat^ formatoVertical = gcnew System::Drawing::StringFormat();
				   formatoVertical->FormatFlags = System::Drawing::StringFormatFlags::DirectionVertical;
				   g->DrawString("Rendimiento (%)", fontEtiquetas, brushTexto, 5.0f, alto / 2.0f - 50.0f, formatoVertical);

				   // Liberar recursos
				   delete penEjes;
				   delete penGrid;
				   delete brushTexto;
				   delete fontEjes;
				   delete fontEtiquetas;
				   delete formatoVertical;
			   }


			   void FormGraficosRendimiento::DibujarSigmoide(Graphics^ g, RendimientoSigmoide^ modelo)
			   {
				   if (modelo == nullptr || modelo->getPuntos()->Count == 0)
					   return;

				   // Crear lápiz para la curva
				   System::Drawing::Pen^ penCurva = gcnew System::Drawing::Pen(System::Drawing::Color::FromArgb(0, 100, 200), 3);

				   // Dibujar la curva punto por punto
				   List<PuntoRendimiento^>^ puntos = modelo->getPuntos();
				   array<System::Drawing::PointF>^ puntosGrafico = gcnew array<System::Drawing::PointF>(puntos->Count);

				   for (int i = 0; i < puntos->Count; i++) {
					   puntosGrafico[i] = ConvertirCoordenadas(puntos[i]->getX(), puntos[i]->getY());
				   }

				   // Dibujar la curva suavizada
				   if (puntos->Count >= 2) {
					   g->DrawLines(penCurva, puntosGrafico);
				   }

				   // Dibujar punto de inflexión
				   PuntoRendimiento^ inflexion = modelo->ObtenerPuntoInflexion();
				   System::Drawing::PointF puntoInf = ConvertirCoordenadas(inflexion->getX(), inflexion->getY());

				   System::Drawing::SolidBrush^ brushInfleccion = gcnew System::Drawing::SolidBrush(System::Drawing::Color::Red);
				   g->FillEllipse(brushInfleccion, puntoInf.X - 4.0f, puntoInf.Y - 4.0f, 8.0f, 8.0f);

				   // Etiqueta del punto de inflexión
				   System::Drawing::Font^ fontInfleccion = gcnew System::Drawing::Font("Arial", 8, System::Drawing::FontStyle::Bold);
				   System::Drawing::SolidBrush^ brushTexto = gcnew System::Drawing::SolidBrush(System::Drawing::Color::Red);
				   String^ textoInfleccion = String::Format("Inflección ({0:F1}h, {1:F1}%)",
					   inflexion->getX(), inflexion->getY());
				   g->DrawString(textoInfleccion, fontInfleccion, brushTexto, puntoInf.X + 10.0f, puntoInf.Y - 15.0f);

				   // Leyenda
				   String^ leyenda = String::Format("Sigmoide - k={0:F3}, x₀={1:F1}",
					   modelo->getK(), modelo->getX0());
				   System::Drawing::Font^ fontLeyenda = gcnew System::Drawing::Font("Arial", 10, System::Drawing::FontStyle::Bold);
				   System::Drawing::SolidBrush^ brushLeyenda = gcnew System::Drawing::SolidBrush(System::Drawing::Color::FromArgb(0, 100, 200));

				   // Usar coordenadas relativas al PictureBox para la leyenda
				   float posXLeyenda = static_cast<float>(this->pictureBoxGrafico->Width - 200);
				   g->DrawString(leyenda, fontLeyenda, brushLeyenda, posXLeyenda, 20.0f);

				   // Liberar recursos
				   delete penCurva;
				   delete brushInfleccion;
				   delete fontInfleccion;
				   delete brushTexto;
				   delete fontLeyenda;
				   delete brushLeyenda;
			   }

private: System::Void buttonGraficar_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		// Validar y obtener parámetros
		double k = Double::Parse(textBoxK->Text);
		double x0 = Double::Parse(textBoxX0->Text);
		

		if (k <= 0 || x0 <= 0) {
			MessageBox::Show("Los valores de k y x₀ deben ser mayores que cero.",
				"Error de Validación", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}
		
		if (this->comboBoxMaquinas->SelectedItem == nullptr) {
			MessageBox::Show("Debe seleccionar una Máquina.",
				"Error de Validación", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}
		Maquina^ maquina = dynamic_cast<Maquina^>(comboBoxMaquinas->SelectedItem);
		int idMaquina = maquina->getIdMaquina();
		String^ maquinaSeleccionada = maquina->getNombre();

		// Crear y configurar el modelo sigmoide con rango más amplio
		RendimientoSigmoide^ modelo = this->rendimientoController->CrearModeloPersonalizado(k, x0);

		// Generar puntos en un rango que muestre bien la curva
		// Si x0 es 50, generar de 0 a 2*x0 para ver la curva completa
		double xMax = Math::Max(100.0, x0 * 2.5); // Mínimo 100, máximo 2.5*x0
		modelo->GenerarPuntos(0, xMax, xMax / 100.0); // Incremento dinámico

		// Redibujar el gráfico
		Graphics^ g = pictureBoxGrafico->CreateGraphics();
		g->SmoothingMode = System::Drawing::Drawing2D::SmoothingMode::AntiAlias;
		g->Clear(Color::White);

		DibujarEjes(g);
		DibujarSigmoide(g, modelo);

		// Mostrar información adicional
		String^ info = String::Format(
			"Máquina: {0}\nPuntos calculados: {1}\nRendimiento máximo: {2:F1}%\nRango X: 0-{3:F1}h",
			maquinaSeleccionada, modelo->ObtenerCantidadPuntos(),
			modelo->ObtenerRendimientoMaximo(), xMax);

		MessageBox::Show(info, "Gráfico Generado", MessageBoxButtons::OK, MessageBoxIcon::Information);

	}
	catch (FormatException^) {
		MessageBox::Show("Por favor ingrese valores numéricos válidos para k y x₀.",
			"Error de Formato", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	catch (Exception^ ex) {
		MessageBox::Show("Error al generar el gráfico: " + ex->Message,
			"Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void buttonLimpiar_Click(System::Object^ sender, System::EventArgs^ e) {
	// Limpiar el gráfico
	Graphics^ g = pictureBoxGrafico->CreateGraphics();
	g->Clear(Color::White);
	DibujarEjes(g);

	// Restablecer valores por defecto
	textBoxK->Text = "0.1";
	textBoxX0->Text = "50.0";

	MessageBox::Show("Gráfico limpiado correctamente.",
		"Limpiar", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
private: System::Void buttonExportar_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		double k = Double::Parse(textBoxK->Text);
		double x0 = Double::Parse(textBoxX0->Text);
		if (k <= 0 || x0 <= 0) {
			MessageBox::Show("Los valores de k y x₀ deben ser mayores que cero.",
				"Error de Validación", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		if (this->comboBoxMaquinas->SelectedItem == nullptr) {
			MessageBox::Show("Debe seleccionar una Máquina.",
				"Error de Validación", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		Maquina^ maquina = dynamic_cast<Maquina^>(comboBoxMaquinas->SelectedItem);
		int idMaquina = maquina->getIdMaquina();
		String^ maquinaSeleccionada = maquina->getNombre();

		// Crear y configurar el modelo sigmoide
		RendimientoSigmoide^ modelo = this->rendimientoController->CrearModeloPersonalizado(k, x0);
		modelo->GenerarPuntos(0, 100, 1.0);

		// Crear contenido CSV/Excel básico
		String^ contenido = GenerarContenidoExcel(modelo, maquinaSeleccionada, k, x0);

		// Diálogo para guardar
		SaveFileDialog^ saveDialog = gcnew SaveFileDialog();
		saveDialog->Filter = "Archivos CSV (*.csv)|*.csv";
		saveDialog->Title = "Exportar Datos de Rendimiento";
		saveDialog->FileName = "Rendimiento_Sigmoide_" + maquinaSeleccionada->Replace(" ", "_");

		if (saveDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			System::IO::File::WriteAllText(saveDialog->FileName, contenido, System::Text::Encoding::UTF8);

			MessageBox::Show("Datos exportados correctamente a:\n" + saveDialog->FileName +
				"\n\nEl archivo incluye:\n- Parámetros del modelo\n- Tabla de datos completa",
				"Exportación Exitosa", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show("Error al exportar datos: " + ex->Message,
			"Error de Exportación", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}

	   // Función auxiliar para generar contenido
	   String^ FormGraficosRendimiento::GenerarContenidoExcel(RendimientoSigmoide^ modelo, String^ maquina, double k, double x0) {
		   System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

		   // Encabezado
		   sb->AppendLine("Reporte de Rendimiento Sigmoide");
		   sb->AppendLine("===============================");
		   sb->AppendLine("Máquina: " + maquina);
		   sb->AppendLine("Tasa de Crecimiento (k): " + k.ToString("F3"));
		   sb->AppendLine("Punto de Inflexión (x₀): " + x0.ToString("F1"));
		   sb->AppendLine();

		   // Encabezados de tabla
		   sb->AppendLine("Hora Operativa,Rendimiento (%),Estado");

		   // Datos
		   List<PuntoRendimiento^>^ puntos = modelo->getPuntos();
		   for each (PuntoRendimiento ^ punto in puntos) {
			   double rendimiento = punto->getY();
			   String^ estado = ClasificarRendimiento(rendimiento);

			   sb->AppendLine(
				   punto->getX().ToString("F1") + "," +
				   punto->getY().ToString("F2") + "," +
				   estado
			   );
		   }

		   return sb->ToString();
	   }

	   String^ FormGraficosRendimiento::ClasificarRendimiento(double rendimiento) {
		   if (rendimiento < 20) return "Muy Bajo";
		   else if (rendimiento < 40) return "Bajo";
		   else if (rendimiento < 60) return "Moderado";
		   else if (rendimiento < 80) return "Alto";
		   else return "Muy Alto";
	   }

	};
}
