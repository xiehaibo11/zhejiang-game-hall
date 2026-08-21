
/* cocos2d::GLView::setFrameSize(float, float) */

void __thiscall cocos2d::GLView::setFrameSize(GLView *this,float param_1,float param_2)

{
  long lVar1;
  ulong uVar2;
  Size aSStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  Size::Size(aSStack_40,param_1,param_2);
  Size::operator=((Size *)(this + 0x24),aSStack_40);
  uVar2 = Size::equals((Size *)(this + 0x2c),(Size *)&Size::ZERO);
  if ((uVar2 & 1) != 0) {
    Size::operator=((Size *)(this + 0x2c),(Size *)(this + 0x24));
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

