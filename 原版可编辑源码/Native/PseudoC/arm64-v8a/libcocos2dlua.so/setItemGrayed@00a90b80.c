
/* fairygui::PopupMenu::setItemGrayed(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, bool) */

void __thiscall
fairygui::PopupMenu::setItemGrayed(PopupMenu *this,basic_string *param_1,bool param_2)

{
  long lVar1;
  GObject *this_00;
  
  lVar1 = GComponent::getChild(*(GComponent **)(this + 0x30),param_1);
  this_00 = (GObject *)0x0;
  if (lVar1 != 0) {
    this_00 = (GObject *)__dynamic_cast(lVar1,&GObject::typeinfo,&GButton::typeinfo,0);
  }
  GObject::setGrayed(this_00,param_2);
  return;
}

