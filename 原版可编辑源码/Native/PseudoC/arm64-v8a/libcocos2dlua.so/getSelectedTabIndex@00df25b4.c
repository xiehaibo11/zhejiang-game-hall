
/* cocos2d::ui::TabControl::getSelectedTabIndex() const */

ulong __thiscall cocos2d::ui::TabControl::getSelectedTabIndex(TabControl *this)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (*(long **)(this + 0x520) != (long *)0x0) {
    uVar3 = *(long *)(this + 0x558) - *(long *)(this + 0x550);
    uVar2 = (long)uVar3 >> 3;
    if (0 < (int)uVar2) {
      uVar1 = 0;
      do {
        if (uVar2 == uVar1) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_out_of_range();
        }
        if (**(long **)(*(long *)(this + 0x550) + uVar1 * 8) == **(long **)(this + 0x520)) {
          return uVar1;
        }
        uVar1 = uVar1 + 1;
      } while ((uVar3 >> 3 & 0xffffffff) != uVar1);
    }
  }
  return 0xffffffff;
}

