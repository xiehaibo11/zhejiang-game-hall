
/* fairygui::GComboBox::setValue(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void __thiscall fairygui::GComboBox::setValue(GComboBox *this,basic_string *param_1)

{
  int iVar1;
  
  iVar1 = ToolSet::findInStringArray((vector *)(this + 0x2e0),param_1);
  setSelectedIndex(this,iVar1);
  return;
}

