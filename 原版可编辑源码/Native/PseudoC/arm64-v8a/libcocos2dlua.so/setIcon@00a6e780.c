
/* fairygui::GComboBox::setIcon(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void fairygui::GComboBox::setIcon(basic_string *param_1)

{
  if (*(long **)(param_1 + 0x298) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x298) + 0x28))();
  }
  GObject::updateGear((GObject *)param_1,7);
  return;
}

