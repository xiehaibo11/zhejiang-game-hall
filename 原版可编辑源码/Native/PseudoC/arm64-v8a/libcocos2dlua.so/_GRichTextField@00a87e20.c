
/* fairygui::GRichTextField::~GRichTextField() */

void __thiscall fairygui::GRichTextField::~GRichTextField(GRichTextField *this)

{
  GBasicTextField::~GBasicTextField((GBasicTextField *)this);
  operator_delete(this);
  return;
}

