
/* fairygui::PopupMenu::onClickItem(fairygui::EventContext*) */

void __thiscall fairygui::PopupMenu::onClickItem(PopupMenu *this,EventContext *param_1)

{
  long lVar1;
  GComponent *this_00;
  GController *this_01;
  int iVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_60 [16];
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if ((*(long *)(param_1 + 0x20) != 0) &&
     (this_00 = (GComponent *)
                __dynamic_cast(*(long *)(param_1 + 0x20),&GObject::typeinfo,&GButton::typeinfo,0),
     this_00 != (GComponent *)0x0)) {
    if (this_00[0xf6] == (GComponent)0x0) {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_60,"checked");
      this_01 = (GController *)GComponent::getController(this_00,(basic_string *)local_60);
      if (((byte)local_60[0] & 1) != 0) {
        operator_delete(local_50);
      }
      if ((this_01 != (GController *)0x0) && (*(int *)(this_01 + 0x70) != 0)) {
        if (*(int *)(this_01 + 0x70) == 1) {
          iVar2 = 2;
        }
        else {
          iVar2 = 1;
        }
        GController::setSelectedIndex(this_01,iVar2,true);
      }
      GRoot::hidePopup(*(GRoot **)(*(GObject **)(this + 0x28) + 0xa0),*(GObject **)(this + 0x28));
      UIEventDispatcher::dispatchEvent
                ((UIEventDispatcher *)this_00,0x34,*(void **)(param_1 + 0x20),
                 (Value *)&cocos2d::Value::Null);
    }
    else {
      GList::setSelectedIndex(*(GList **)(this + 0x30),-1);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

