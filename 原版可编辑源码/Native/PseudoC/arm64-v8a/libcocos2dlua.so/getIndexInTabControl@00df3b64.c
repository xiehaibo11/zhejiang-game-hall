
/* cocos2d::ui::TabHeader::getIndexInTabControl() const */

ulong __thiscall cocos2d::ui::TabHeader::getIndexInTabControl(TabHeader *this)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  lVar2 = *(long *)(this + 0x5d0);
  if (lVar2 != 0) {
    uVar4 = *(long *)(lVar2 + 0x558) - *(long *)(lVar2 + 0x550);
    uVar3 = (long)uVar4 >> 3;
    if (0 < (int)uVar3) {
      uVar1 = 0;
      do {
        if (uVar3 == uVar1) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_out_of_range();
        }
        if ((TabHeader *)**(undefined8 **)(*(long *)(lVar2 + 0x550) + uVar1 * 8) == this) {
          return uVar1;
        }
        uVar1 = uVar1 + 1;
      } while ((uVar4 >> 3 & 0xffffffff) != uVar1);
    }
  }
  return 0xffffffff;
}

