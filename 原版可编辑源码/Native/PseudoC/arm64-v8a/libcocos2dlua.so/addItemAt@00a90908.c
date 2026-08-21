
/* fairygui::PopupMenu::addItemAt(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, int, std::__ndk1::function<void
   (fairygui::EventContext*)>) */

GButton * __thiscall
fairygui::PopupMenu::addItemAt
          (PopupMenu *this,basic_string *param_1,undefined4 param_2,function *param_4)

{
  long lVar1;
  long lVar2;
  GButton *this_00;
  GController *this_01;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_60 [16];
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar2 = GList::getFromPool(*(GList **)(this + 0x30),
                             (basic_string *)(*(GList **)(this + 0x30) + 0x308));
  if (lVar2 == 0) {
    this_00 = (GButton *)0x0;
  }
  else {
    this_00 = (GButton *)__dynamic_cast(lVar2,&GObject::typeinfo,&GButton::typeinfo,0);
  }
  (**(code **)(**(long **)(this + 0x30) + 0xb0))(*(long **)(this + 0x30),this_00,param_2);
  GButton::setTitle(this_00,param_1);
  GObject::setGrayed((GObject *)this_00,false);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,"checked");
  this_01 = (GController *)GComponent::getController((GComponent *)this_00,(basic_string *)local_60)
  ;
  if (((byte)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if (this_01 != (GController *)0x0) {
    GController::setSelectedIndex(this_01,0,true);
  }
  UIEventDispatcher::removeEventListener
            ((UIEventDispatcher *)this_00,0x34,(EventTag *)&EventTag::None);
  if (*(long *)(param_4 + 0x20) != 0) {
    UIEventDispatcher::addEventListener
              ((UIEventDispatcher *)this_00,0x34,param_4,(EventTag *)&EventTag::None);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return this_00;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

