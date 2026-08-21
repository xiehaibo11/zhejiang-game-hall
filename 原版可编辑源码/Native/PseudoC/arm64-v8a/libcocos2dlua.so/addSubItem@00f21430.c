
/* cocos2d::MenuItemToggle::addSubItem(cocos2d::MenuItem*) */

void __thiscall cocos2d::MenuItemToggle::addSubItem(MenuItemToggle *this,MenuItem *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  MenuItem *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  puVar2 = *(undefined8 **)(this + 0x348);
  local_30 = param_1;
  if (puVar2 == *(undefined8 **)(this + 0x350)) {
    std::__ndk1::vector<cocos2d::MenuItem*,std::__ndk1::allocator<cocos2d::MenuItem*>>::
    __push_back_slow_path<cocos2d::MenuItem*const&>
              ((vector<cocos2d::MenuItem*,std::__ndk1::allocator<cocos2d::MenuItem*>> *)
               (this + 0x340),&local_30);
  }
  else {
    *puVar2 = param_1;
    *(undefined8 **)(this + 0x348) = puVar2 + 1;
  }
  Ref::retain((Ref *)local_30);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

