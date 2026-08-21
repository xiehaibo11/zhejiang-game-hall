
/* fairygui::PopupMenu::setItemText(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
fairygui::PopupMenu::setItemText(PopupMenu *this,basic_string *param_1,basic_string *param_2)

{
  long lVar1;
  GButton *this_00;
  
  lVar1 = GComponent::getChild(*(GComponent **)(this + 0x30),param_1);
  this_00 = (GButton *)0x0;
  if (lVar1 != 0) {
    this_00 = (GButton *)__dynamic_cast(lVar1,&GObject::typeinfo,&GButton::typeinfo,0);
  }
  GButton::setTitle(this_00,param_2);
  return;
}

