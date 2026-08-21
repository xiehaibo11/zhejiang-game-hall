
/* fairygui::PopupMenu::setItemVisible(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, bool) */

void __thiscall
fairygui::PopupMenu::setItemVisible(PopupMenu *this,basic_string *param_1,bool param_2)

{
  undefined8 uVar1;
  GObject *this_00;
  
  uVar1 = GComponent::getChild(*(GComponent **)(this + 0x30),param_1);
  this_00 = (GObject *)__dynamic_cast(uVar1,&GObject::typeinfo,&GButton::typeinfo,0);
  if ((this_00[0xf4] != (GObject)0x0) != param_2) {
    GObject::setVisible(this_00,param_2);
    GComponent::setBoundsChangedFlag(*(GComponent **)(this + 0x30));
    return;
  }
  return;
}

