#include "pch.h"
BEBS::DiscountControl::DiscountControl(void)
{
	InitializeComponent();
	fillListBox();
	fillCurrent();
	fillListBox2();
}
BEBS::DiscountControl::DiscountControl(Form^ lastForm)
{
	this->lastForm = lastForm;
	InitializeComponent();
	fillListBox();
	fillCurrent();
	fillListBox2();
}

BEBS::DiscountControl::~DiscountControl()
		{
			if (components)
			{
				delete components;
			}
		}



void BEBS::DiscountControl::InitializeComponent(void)
{
	System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(DiscountControl::typeid));
	this->discount = (gcnew System::Windows::Forms::TextBox());
	this->start = (gcnew System::Windows::Forms::TextBox());
	this->end = (gcnew System::Windows::Forms::TextBox());
	this->label2 = (gcnew System::Windows::Forms::Label());
	this->label1 = (gcnew System::Windows::Forms::Label());
	this->label3 = (gcnew System::Windows::Forms::Label());
	this->Delete = (gcnew System::Windows::Forms::Button());
	this->edit = (gcnew System::Windows::Forms::Button());
	this->save = (gcnew System::Windows::Forms::Button());
	this->HomePage = (gcnew System::Windows::Forms::PictureBox());
	this->id_tet = (gcnew System::Windows::Forms::TextBox());
	this->label4 = (gcnew System::Windows::Forms::Label());
	this->listBox1 = (gcnew System::Windows::Forms::ListBox());
	this->label6 = (gcnew System::Windows::Forms::Label());
	this->label7 = (gcnew System::Windows::Forms::Label());
	this->listBox2 = (gcnew System::Windows::Forms::ListBox());
	this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
	this->UpdateInventoryButton = (gcnew System::Windows::Forms::Button());
	this->DiscountButton = (gcnew System::Windows::Forms::Button());
	this->OrderButton = (gcnew System::Windows::Forms::Button());
	this->UsersButton = (gcnew System::Windows::Forms::Button());
	this->ProfitButton = (gcnew System::Windows::Forms::Button());
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->HomePage))->BeginInit();
	this->SuspendLayout();
	// 
	// discount
	// 
	this->discount->BackColor = System::Drawing::Color::Black;
	this->discount->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->discount->ForeColor = System::Drawing::Color::White;
	this->discount->Location = System::Drawing::Point(51, 131);
	this->discount->Name = L"discount";
	this->discount->Size = System::Drawing::Size(485, 44);
	this->discount->TabIndex = 29;
	// 
	// start
	// 
	this->start->BackColor = System::Drawing::Color::Black;
	this->start->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->start->ForeColor = System::Drawing::Color::White;
	this->start->Location = System::Drawing::Point(53, 244);
	this->start->Name = L"start";
	this->start->Size = System::Drawing::Size(485, 44);
	this->start->TabIndex = 30;
	// 
	// end
	// 
	this->end->BackColor = System::Drawing::Color::Black;
	this->end->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->end->ForeColor = System::Drawing::Color::White;
	this->end->Location = System::Drawing::Point(53, 342);
	this->end->Name = L"end";
	this->end->Size = System::Drawing::Size(485, 44);
	this->end->TabIndex = 31;
	// 
	// label2
	// 
	this->label2->AutoSize = true;
	this->label2->BackColor = System::Drawing::Color::Transparent;
	this->label2->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->label2->ForeColor = System::Drawing::Color::White;
	this->label2->Location = System::Drawing::Point(49, 89);
	this->label2->Name = L"label2";
	this->label2->Size = System::Drawing::Size(103, 33);
	this->label2->TabIndex = 32;
	this->label2->Text = L"Discount";
	// 
	// label1
	// 
	this->label1->AutoSize = true;
	this->label1->BackColor = System::Drawing::Color::Transparent;
	this->label1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->label1->ForeColor = System::Drawing::Color::White;
	this->label1->Location = System::Drawing::Point(51, 207);
	this->label1->Name = L"label1";
	this->label1->Size = System::Drawing::Size(284, 33);
	this->label1->TabIndex = 33;
	this->label1->Text = L"Date Start :: YYYY-MM-DD";
	// 
	// label3
	// 
	this->label3->AutoSize = true;
	this->label3->BackColor = System::Drawing::Color::Transparent;
	this->label3->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->label3->ForeColor = System::Drawing::Color::White;
	this->label3->Location = System::Drawing::Point(47, 306);
	this->label3->Name = L"label3";
	this->label3->Size = System::Drawing::Size(284, 33);
	this->label3->TabIndex = 34;
	this->label3->Text = L"Date End ::  YYYY-MM-DD";
	// 
	// Delete
	// 
	this->Delete->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
		static_cast<System::Int32>(static_cast<System::Byte>(0)));
	this->Delete->Cursor = System::Windows::Forms::Cursors::Hand;
	this->Delete->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->Delete->ForeColor = System::Drawing::Color::White;
	this->Delete->Location = System::Drawing::Point(411, 497);
	this->Delete->Name = L"Delete";
	this->Delete->Size = System::Drawing::Size(127, 50);
	this->Delete->TabIndex = 35;
	this->Delete->Text = L"Delete";
	this->Delete->UseVisualStyleBackColor = false;
	this->Delete->Click += gcnew System::EventHandler(this, &DiscountControl::block_Click);
	// 
	// edit
	// 
	this->edit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
		static_cast<System::Int32>(static_cast<System::Byte>(0)));
	this->edit->Cursor = System::Windows::Forms::Cursors::Hand;
	this->edit->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->edit->ForeColor = System::Drawing::Color::White;
	this->edit->Location = System::Drawing::Point(232, 500);
	this->edit->Name = L"edit";
	this->edit->Size = System::Drawing::Size(127, 50);
	this->edit->TabIndex = 36;
	this->edit->Text = L"Edit";
	this->edit->UseVisualStyleBackColor = false;
	this->edit->Click += gcnew System::EventHandler(this, &DiscountControl::edit_Click);
	// 
	// save
	// 
	this->save->BackColor = System::Drawing::Color::Chartreuse;
	this->save->Cursor = System::Windows::Forms::Cursors::Hand;
	this->save->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->save->ForeColor = System::Drawing::Color::White;
	this->save->Location = System::Drawing::Point(53, 500);
	this->save->Name = L"save";
	this->save->Size = System::Drawing::Size(144, 50);
	this->save->TabIndex = 37;
	this->save->Text = L"Add";
	this->save->UseVisualStyleBackColor = false;
	this->save->Click += gcnew System::EventHandler(this, &DiscountControl::SAVE_Click);
	// 
	// HomePage
	// 
	this->HomePage->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"HomePage.BackgroundImage")));
	this->HomePage->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
	this->HomePage->Cursor = System::Windows::Forms::Cursors::Hand;
	this->HomePage->Location = System::Drawing::Point(1005, 23);
	this->HomePage->Name = L"HomePage";
	this->HomePage->Size = System::Drawing::Size(40, 40);
	this->HomePage->TabIndex = 38;
	this->HomePage->TabStop = false;
	this->HomePage->Click += gcnew System::EventHandler(this, &DiscountControl::HomePageClick);
	// 
	// id_tet
	// 
	this->id_tet->BackColor = System::Drawing::Color::Black;
	this->id_tet->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->id_tet->ForeColor = System::Drawing::Color::White;
	this->id_tet->Location = System::Drawing::Point(53, 424);
	this->id_tet->Name = L"id_tet";
	this->id_tet->Size = System::Drawing::Size(485, 44);
	this->id_tet->TabIndex = 40;
	// 
	// label4
	// 
	this->label4->AutoSize = true;
	this->label4->BackColor = System::Drawing::Color::Transparent;
	this->label4->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->label4->ForeColor = System::Drawing::Color::White;
	this->label4->Location = System::Drawing::Point(47, 388);
	this->label4->Name = L"label4";
	this->label4->Size = System::Drawing::Size(34, 33);
	this->label4->TabIndex = 41;
	this->label4->Text = L"Id";
	// 
	// listBox1
	// 
	this->listBox1->BackColor = System::Drawing::Color::Black;
	this->listBox1->ForeColor = System::Drawing::Color::White;
	this->listBox1->FormattingEnabled = true;
	this->listBox1->ItemHeight = 24;
	this->listBox1->Location = System::Drawing::Point(632, 342);
	this->listBox1->Name = L"listBox1";
	this->listBox1->Size = System::Drawing::Size(310, 100);
	this->listBox1->TabIndex = 42;
	this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &DiscountControl::listBox1_SelectedIndexChanged);
	// 
	// label6
	// 
	this->label6->AutoSize = true;
	this->label6->BackColor = System::Drawing::Color::Transparent;
	this->label6->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->label6->ForeColor = System::Drawing::Color::White;
	this->label6->Location = System::Drawing::Point(624, 306);
	this->label6->Name = L"label6";
	this->label6->Size = System::Drawing::Size(197, 33);
	this->label6->TabIndex = 43;
	this->label6->Text = L"Expired Discounts";
	// 
	// label7
	// 
	this->label7->AutoSize = true;
	this->label7->BackColor = System::Drawing::Color::Transparent;
	this->label7->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->label7->ForeColor = System::Drawing::Color::White;
	this->label7->Location = System::Drawing::Point(628, 89);
	this->label7->Name = L"label7";
	this->label7->Size = System::Drawing::Size(193, 33);
	this->label7->TabIndex = 44;
	this->label7->Text = L"Future  Discounts";
	// 
	// listBox2
	// 
	this->listBox2->BackColor = System::Drawing::Color::Black;
	this->listBox2->ForeColor = System::Drawing::Color::White;
	this->listBox2->FormattingEnabled = true;
	this->listBox2->ItemHeight = 24;
	this->listBox2->Location = System::Drawing::Point(628, 172);
	this->listBox2->Name = L"listBox2";
	this->listBox2->Size = System::Drawing::Size(310, 100);
	this->listBox2->TabIndex = 45;
	this->listBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &DiscountControl::listBox2_SelectedIndexChanged);
	// 
	// comboBox1
	// 
	this->comboBox1->BackColor = System::Drawing::Color::Black;
	this->comboBox1->ForeColor = System::Drawing::Color::White;
	this->comboBox1->FormattingEnabled = true;
	this->comboBox1->Location = System::Drawing::Point(628, 131);
	this->comboBox1->Name = L"comboBox1";
	this->comboBox1->Size = System::Drawing::Size(310, 32);
	this->comboBox1->TabIndex = 46;
	this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &DiscountControl::comboBox1_SelectedIndexChanged);
	// 
	// UpdateInventoryButton
	// 
	this->UpdateInventoryButton->BackColor = System::Drawing::SystemColors::ActiveCaption;
	this->UpdateInventoryButton->Cursor = System::Windows::Forms::Cursors::Hand;
	this->UpdateInventoryButton->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->UpdateInventoryButton->ForeColor = System::Drawing::SystemColors::HighlightText;
	this->UpdateInventoryButton->Location = System::Drawing::Point(817, 12);
	this->UpdateInventoryButton->Name = L"UpdateInventoryButton";
	this->UpdateInventoryButton->Size = System::Drawing::Size(104, 50);
	this->UpdateInventoryButton->TabIndex = 52;
	this->UpdateInventoryButton->Text = L"Update Inventory";
	this->UpdateInventoryButton->UseVisualStyleBackColor = false;
	this->UpdateInventoryButton->Click += gcnew System::EventHandler(this, &DiscountControl::InventoryClick);
	// 
	// DiscountButton
	// 
	this->DiscountButton->BackColor = System::Drawing::Color::Gray;
	this->DiscountButton->Cursor = System::Windows::Forms::Cursors::Default;
	this->DiscountButton->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->DiscountButton->ForeColor = System::Drawing::SystemColors::HighlightText;
	this->DiscountButton->Location = System::Drawing::Point(355, 13);
	this->DiscountButton->Name = L"DiscountButton";
	this->DiscountButton->Size = System::Drawing::Size(132, 50);
	this->DiscountButton->TabIndex = 51;
	this->DiscountButton->Text = L"Discount";
	this->DiscountButton->UseVisualStyleBackColor = false;
	// 
	// OrderButton
	// 
	this->OrderButton->BackColor = System::Drawing::SystemColors::ActiveCaption;
	this->OrderButton->Cursor = System::Windows::Forms::Cursors::Hand;
	this->OrderButton->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->OrderButton->ForeColor = System::Drawing::SystemColors::HighlightText;
	this->OrderButton->Location = System::Drawing::Point(493, 12);
	this->OrderButton->Name = L"OrderButton";
	this->OrderButton->Size = System::Drawing::Size(109, 50);
	this->OrderButton->TabIndex = 50;
	this->OrderButton->Text = L"Orders";
	this->OrderButton->UseVisualStyleBackColor = false;
	this->OrderButton->Click += gcnew System::EventHandler(this, &DiscountControl::OrdersClick);
	// 
	// UsersButton
	// 
	this->UsersButton->BackColor = System::Drawing::SystemColors::ActiveCaption;
	this->UsersButton->Cursor = System::Windows::Forms::Cursors::Hand;
	this->UsersButton->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->UsersButton->ForeColor = System::Drawing::SystemColors::HighlightText;
	this->UsersButton->Location = System::Drawing::Point(608, 12);
	this->UsersButton->Name = L"UsersButton";
	this->UsersButton->Size = System::Drawing::Size(93, 50);
	this->UsersButton->TabIndex = 49;
	this->UsersButton->Text = L"Users";
	this->UsersButton->UseVisualStyleBackColor = false;
	this->UsersButton->Click += gcnew System::EventHandler(this, &DiscountControl::UsersClick);
	// 
	// ProfitButton
	// 
	this->ProfitButton->BackColor = System::Drawing::SystemColors::ActiveCaption;
	this->ProfitButton->Cursor = System::Windows::Forms::Cursors::Hand;
	this->ProfitButton->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->ProfitButton->ForeColor = System::Drawing::SystemColors::HighlightText;
	this->ProfitButton->Location = System::Drawing::Point(707, 12);
	this->ProfitButton->Name = L"ProfitButton";
	this->ProfitButton->Size = System::Drawing::Size(104, 50);
	this->ProfitButton->TabIndex = 47;
	this->ProfitButton->Text = L"Profit";
	this->ProfitButton->UseVisualStyleBackColor = false;
	this->ProfitButton->Click += gcnew System::EventHandler(this, &DiscountControl::ProfitClick);
	// 
	// DiscountControl
	// 
	this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
	this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
	this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
	this->ClientSize = System::Drawing::Size(1115, 582);
	this->Controls->Add(this->UpdateInventoryButton);
	this->Controls->Add(this->DiscountButton);
	this->Controls->Add(this->OrderButton);
	this->Controls->Add(this->UsersButton);
	this->Controls->Add(this->ProfitButton);
	this->Controls->Add(this->comboBox1);
	this->Controls->Add(this->listBox2);
	this->Controls->Add(this->label7);
	this->Controls->Add(this->label6);
	this->Controls->Add(this->listBox1);
	this->Controls->Add(this->label4);
	this->Controls->Add(this->id_tet);
	this->Controls->Add(this->HomePage);
	this->Controls->Add(this->save);
	this->Controls->Add(this->edit);
	this->Controls->Add(this->Delete);
	this->Controls->Add(this->label3);
	this->Controls->Add(this->label1);
	this->Controls->Add(this->label2);
	this->Controls->Add(this->end);
	this->Controls->Add(this->start);
	this->Controls->Add(this->discount);
	this->Name = L"DiscountControl";
	this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
	this->Text = L"DiscountControl";
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->HomePage))->EndInit();
	this->ResumeLayout(false);
	this->PerformLayout();

}

System::Void BEBS::DiscountControl::listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}

Void BEBS::DiscountControl::fillListBox(void) {
	MySQL db;
	db.discountList(this->listBox1);
}


Void BEBS::DiscountControl::fillListBox2(void) {
	MySQL db;
	db.discountList2(this->listBox2, this->comboBox1);
}

Void BEBS::DiscountControl::fillCurrent(void) {
	MySQL db;
	db.discountCurr(this->id_tet, this->discount, this->start, this->end);
}
System::Void BEBS::DiscountControl::SAVE_Click(System::Object^ sender, System::EventArgs^ e) {
	MySQL db;
	Int32^ idVal = db.getID();

	if (idVal != -1) {
		Boolean^ isOk = db.insertNew(idVal, discount, start,end);
		if (isOk) {
			this->Hide();
			BEBS::DiscountControl renderPage;
			renderPage.ShowDialog();
		}
	}
	else {
		MessageBox::Show("worning");
	}

}
	System::Void BEBS::DiscountControl::listBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
System::Void BEBS::DiscountControl::comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	String^ listVal = comboBox1->Text;
	MySQL db;
	db.changeVal(listVal, id_tet, discount, start, end);
}
System::Void BEBS::DiscountControl::edit_Click(System::Object^ sender, System::EventArgs^ e) {
	MySQL db;
	Boolean^ isOk = db.editVal(id_tet, discount, start, end);
	if (isOk) {
		this->Hide();
		BEBS::DiscountControl renderPage;
		renderPage.ShowDialog();
	}
}
System::Void BEBS::DiscountControl::block_Click(System::Object^ sender, System::EventArgs^ e) {
	
	MySqlConnection^ conData = gcnew MySqlConnection(con);
	MySqlCommand^ cmdDB = gcnew MySqlCommand("delete from book_store.discounts where discount_id='" + id_tet->Text + "' ;", conData);
	MySqlDataReader^ myRender;

	try {
		conData->Open();
		myRender = cmdDB->ExecuteReader();
		MessageBox::Show("Deleted");
		while (myRender->Read()) {

		}
		this->Hide();
		BEBS::DiscountControl renderPage;
		renderPage.ShowDialog();
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}



System::Void BEBS::DiscountControl::InventoryClick(System::Object^ sender, System::EventArgs^ e) {
	this->~DiscountControl();
	BEBS::AdminMenu admin;
	admin.ShowDialog();
}
System::Void BEBS::DiscountControl::OrdersClick(System::Object^ sender, System::EventArgs^ e) {
	this->~DiscountControl();
	BEBS::OrdersControl order;
	order.ShowDialog();
}
System::Void BEBS::DiscountControl::UsersClick(System::Object^ sender, System::EventArgs^ e) {
	this->~DiscountControl();
	BEBS::UsersControl users;
	users.ShowDialog();
}
//System::Void BEBS::DiscountControl::SalesClick(System::Object^ sender, System::EventArgs^ e) {
//	this->~DiscountControl();
//	BEBS::SalesControl sales;
//	sales.ShowDialog();
//}
System::Void BEBS::DiscountControl::ProfitClick(System::Object^ sender, System::EventArgs^ e) {
	this->~DiscountControl();
	BEBS::ProfitControl profit;
	profit.ShowDialog();
}
System::Void BEBS::DiscountControl::HomePageClick(System::Object^ sender, System::EventArgs^ e) {
	this->~DiscountControl();
	BEBS::HomePage HomePage;
	HomePage.ShowDialog();
}
