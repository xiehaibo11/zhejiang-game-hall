
/* fairygui::GComboBox::setTitle(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void fairygui::GComboBox::setTitle(basic_string *param_1)

{
  if (*(long **)(param_1 + 0x290) != (long *)0x0) {
                    /* try { // try from 00a6e5d4 to 00b6e5e7 has its CatchHandler @ 00a6e918 */
    (**(code **)(**(long **)(param_1 + 0x290) + 0x18))();
  }
  GObject::updateGear((GObject *)param_1,6);
  return;
}

