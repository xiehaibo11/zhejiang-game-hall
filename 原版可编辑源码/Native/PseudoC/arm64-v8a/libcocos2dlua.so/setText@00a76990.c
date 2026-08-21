
/* fairygui::GLabel::setText(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void fairygui::GLabel::setText(basic_string *param_1)

{
  if (*(long **)(param_1 + 0x280) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x280) + 0x18))();
  }
                    /* try { // try from 00a769b4 to 00b769f3 has its CatchHandler @ 00a769b4
                       catch() { ... } // from try @ 00a769b4 with catch @ 00a769b4
                       catch() { ... } // from try @ 00a76ac4 with catch @ 00a769b4
                       catch() { ... } // from try @ 00a76b9c with catch @ 00a769b4 */
  GObject::updateGear((GObject *)param_1,6);
  return;
}

