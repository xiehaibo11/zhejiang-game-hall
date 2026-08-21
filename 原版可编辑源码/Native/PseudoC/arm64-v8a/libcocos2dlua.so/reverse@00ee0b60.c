
/* cocos2d::ResizeBy::reverse() const */

void __thiscall cocos2d::ResizeBy::reverse(ResizeBy *this)

{
  long lVar1;
  Size aSStack_30 [8];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  Size::Size(aSStack_30,-*(float *)(this + 0x58),-*(float *)(this + 0x5c));
  create(*(float *)(this + 0x4c),aSStack_30);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

