
/* fairygui::PopupMenu::setItemChecked(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, bool) */

void __thiscall
fairygui::PopupMenu::setItemChecked(PopupMenu *this,basic_string *param_1,bool param_2)

{
  long lVar1;
  long lVar2;
  GComponent *this_00;
  GController *this_01;
  int iVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = GComponent::getChild(*(GComponent **)(this + 0x30),param_1);
  if (lVar2 == 0) {
    this_00 = (GComponent *)0x0;
  }
  else {
    this_00 = (GComponent *)__dynamic_cast(lVar2,&GObject::typeinfo,&GButton::typeinfo,0);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_50,"checked");
  this_01 = (GController *)GComponent::getController(this_00,(basic_string *)local_50);
  if (((byte)local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (this_01 != (GController *)0x0) {
    iVar3 = 1;
    if (param_2) {
      iVar3 = 2;
    }
    GController::setSelectedIndex(this_01,iVar3,true);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

