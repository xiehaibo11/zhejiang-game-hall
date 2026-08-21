
/* fairygui::GTextInput::~GTextInput() */

void __thiscall fairygui::GTextInput::~GTextInput(GTextInput *this)

{
  GBasicTextField::~GBasicTextField((GBasicTextField *)this);
  operator_delete(this);
  return;
}

