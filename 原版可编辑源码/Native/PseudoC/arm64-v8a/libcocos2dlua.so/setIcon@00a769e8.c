
/* fairygui::GLabel::setIcon(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void fairygui::GLabel::setIcon(basic_string *param_1)

{
                    /* try { // try from 00a769f4 to 00b76a0b has its CatchHandler @ 00a76c24 */
  if (*(long **)(param_1 + 0x288) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x288) + 0x28))();
  }
                    /* try { // try from 00a76a18 to 00b76a2f has its CatchHandler @ 00a76c04 */
  GObject::updateGear((GObject *)param_1,7);
  return;
}

