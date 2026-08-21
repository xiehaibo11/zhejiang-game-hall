
/* cocos2d::ui::TabControl::indexOfTabHeader(cocos2d::ui::TabHeader const*) const */

ulong __thiscall cocos2d::ui::TabControl::indexOfTabHeader(TabControl *this,TabHeader *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = *(long *)(this + 0x558) - *(long *)(this + 0x550);
  uVar2 = (long)uVar3 >> 3;
  if (0 < (int)uVar2) {
    uVar1 = 0;
    do {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00df2774 with catch @ 00df2720
                        */
      if (uVar2 == uVar1) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_out_of_range();
      }
      if ((TabHeader *)**(undefined8 **)(*(long *)(this + 0x550) + uVar1 * 8) == param_1) {
        return uVar1;
      }
      uVar1 = uVar1 + 1;
    } while ((uVar3 >> 3 & 0xffffffff) != uVar1);
  }
  return 0xffffffff;
}

