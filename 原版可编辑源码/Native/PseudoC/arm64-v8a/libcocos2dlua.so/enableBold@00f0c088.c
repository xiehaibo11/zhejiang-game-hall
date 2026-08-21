
/* cocos2d::Label::enableBold() */

void __thiscall cocos2d::Label::enableBold(Label *this)

{
  long lVar1;
  float fVar2;
  Size aSStack_30 [8];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (this[0x68c] == (Label)0x0) {
    Size::Size(aSStack_30,0.9,0.0);
    (**(code **)(*(long *)this + 0x5a0))(this,&Color4B::WHITE,aSStack_30,0);
    if ((*(int *)(this + 0x308) != 3) &&
       (fVar2 = *(float *)(this + 0x42c) + 1.0, *(float *)(this + 0x42c) != fVar2)) {
      *(float *)(this + 0x42c) = fVar2;
      this[0x30c] = (Label)0x1;
    }
    this[0x68c] = (Label)0x1;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

