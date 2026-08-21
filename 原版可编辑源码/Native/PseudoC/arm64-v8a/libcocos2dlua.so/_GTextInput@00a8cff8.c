
/* non-virtual thunk to fairygui::GTextInput::~GTextInput() */

void __thiscall fairygui::GTextInput::~GTextInput(GTextInput *this)

{
  GBasicTextField::~GBasicTextField((GBasicTextField *)(this + -0x200));
  operator_delete((GBasicTextField *)(this + -0x200));
  return;
}

