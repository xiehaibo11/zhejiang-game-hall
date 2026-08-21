
/* cocos2d::ui::TabControl::setSelectTab(cocos2d::ui::TabHeader*) */

void __thiscall cocos2d::ui::TabControl::setSelectTab(TabControl *this,TabHeader *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  if ((*(undefined8 **)(this + 0x520) != (undefined8 *)0x0) &&
     ((TabHeader *)**(undefined8 **)(this + 0x520) == param_1)) {
    return;
  }
  uVar3 = *(long *)(this + 0x558) - *(long *)(this + 0x550);
  uVar2 = (long)uVar3 >> 3;
  if (0 < (int)uVar2) {
    uVar1 = 0;
    do {
      if (uVar2 == uVar1) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_out_of_range();
      }
      if ((TabHeader *)**(undefined8 **)(*(long *)(this + 0x550) + uVar1 * 8) == param_1)
      goto LAB_00df284c;
      uVar1 = uVar1 + 1;
    } while ((uVar3 >> 3 & 0xffffffff) != uVar1);
  }
  uVar1 = 0xffffffff;
LAB_00df284c:
  dispatchSelectedTabChanged(this,uVar1 & 0xffffffff,0);
  return;
}

