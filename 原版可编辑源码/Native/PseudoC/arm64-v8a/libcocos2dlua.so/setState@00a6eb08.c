
/* fairygui::GComboBox::setState(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void __thiscall fairygui::GComboBox::setState(GComboBox *this,basic_string *param_1)

{
  if (*(GController **)(this + 0x300) != (GController *)0x0) {
    GController::setSelectedPage(*(GController **)(this + 0x300),param_1,true);
    return;
  }
  return;
}

