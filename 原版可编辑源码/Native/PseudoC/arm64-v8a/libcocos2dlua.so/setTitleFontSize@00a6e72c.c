
/* fairygui::GComboBox::setTitleFontSize(int) */

void __thiscall fairygui::GComboBox::setTitleFontSize(GComboBox *this,int param_1)

{
  GTextField *this_00;
  
  this_00 = (GTextField *)getTextField(this);
  if (this_00 != (GTextField *)0x0) {
    GTextField::setFontSize(this_00,(float)param_1);
    return;
  }
  return;
}

