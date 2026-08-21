
/* fairygui::PopupMenu::addItem(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::function<void (fairygui::EventContext*)>) */

GButton * __thiscall
fairygui::PopupMenu::addItem(PopupMenu *this,basic_string *param_1,function *param_3)

{
  long lVar1;
  long lVar2;
  GButton *this_00;
  GController *this_01;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = GList::addItemFromPool
                    (*(GList **)(this + 0x30),(basic_string *)&cocos2d::STD_STRING_EMPTY);
  if (lVar2 == 0) {
    this_00 = (GButton *)0x0;
  }
  else {
    this_00 = (GButton *)__dynamic_cast(lVar2,&GObject::typeinfo,&GButton::typeinfo,0);
  }
  GButton::setTitle(this_00,param_1);
  GObject::setGrayed((GObject *)this_00,false);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_50,"checked");
  this_01 = (GController *)GComponent::getController((GComponent *)this_00,(basic_string *)local_50)
  ;
  if (((byte)local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (this_01 != (GController *)0x0) {
    GController::setSelectedIndex(this_01,0,true);
  }
  UIEventDispatcher::removeEventListener
            ((UIEventDispatcher *)this_00,0x34,(EventTag *)&EventTag::None);
  if (*(long *)(param_3 + 0x20) != 0) {
    UIEventDispatcher::addEventListener
              ((UIEventDispatcher *)this_00,0x34,param_3,(EventTag *)&EventTag::None);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return this_00;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

