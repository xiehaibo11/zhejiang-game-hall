
/* fairygui::Window::addUISource(fairygui::IUISource*) */

void __thiscall fairygui::Window::addUISource(Window *this,IUISource *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  IUISource *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  puVar2 = *(undefined8 **)(this + 0x2c8);
  local_30 = param_1;
  if (puVar2 == *(undefined8 **)(this + 0x2d0)) {
    std::__ndk1::vector<fairygui::IUISource*,std::__ndk1::allocator<fairygui::IUISource*>>::
    __push_back_slow_path<fairygui::IUISource*const&>
              ((vector<fairygui::IUISource*,std::__ndk1::allocator<fairygui::IUISource*>> *)
               (this + 0x2c0),&local_30);
  }
  else {
    *puVar2 = param_1;
    *(undefined8 **)(this + 0x2c8) = puVar2 + 1;
  }
  cocos2d::Ref::retain((Ref *)local_30);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

