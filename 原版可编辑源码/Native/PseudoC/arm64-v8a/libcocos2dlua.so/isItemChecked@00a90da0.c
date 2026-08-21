
/* fairygui::PopupMenu::isItemChecked(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) const */

bool __thiscall fairygui::PopupMenu::isItemChecked(PopupMenu *this,basic_string *param_1)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  GComponent *this_00;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_40 [16];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar3 = GComponent::getChild(*(GComponent **)(this + 0x30),param_1);
  if (lVar3 == 0) {
    this_00 = (GComponent *)0x0;
  }
  else {
    this_00 = (GComponent *)__dynamic_cast(lVar3,&GObject::typeinfo,&GButton::typeinfo,0);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_40,"checked");
  lVar3 = GComponent::getController(this_00,(basic_string *)local_40);
                    /* try { // try from 00a90e0c to 00b90e87 has its CatchHandler @ 00a90e0c
                       catch() { ... } // from try @ 00a90e0c with catch @ 00a90e0c
                       catch() { ... } // from try @ 00a90f6c with catch @ 00a90e0c */
  if (((byte)local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  if (lVar3 == 0) {
    bVar2 = false;
  }
  else {
    bVar2 = *(int *)(lVar3 + 0x70) == 2;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

