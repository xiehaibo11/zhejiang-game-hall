
/* cocos2d::ui::RichText::pushBackElement(cocos2d::ui::RichElement*) */

void __thiscall cocos2d::ui::RichText::pushBackElement(RichText *this,RichElement *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  RichElement *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  puVar2 = *(undefined8 **)(this + 0x500);
  local_30 = param_1;
  if (puVar2 == *(undefined8 **)(this + 0x508)) {
    std::__ndk1::vector<cocos2d::ui::RichElement*,std::__ndk1::allocator<cocos2d::ui::RichElement*>>
    ::__push_back_slow_path<cocos2d::ui::RichElement*const&>
              ((vector<cocos2d::ui::RichElement*,std::__ndk1::allocator<cocos2d::ui::RichElement*>>
                *)(this + 0x4f8),&local_30);
  }
  else {
    *puVar2 = param_1;
    *(undefined8 **)(this + 0x500) = puVar2 + 1;
  }
  Ref::retain((Ref *)local_30);
  this[0x4f0] = (RichText)0x1;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00dd4218 to 00ed4233 has its CatchHandler @ 00dd4808 */
  __stack_chk_fail();
}

