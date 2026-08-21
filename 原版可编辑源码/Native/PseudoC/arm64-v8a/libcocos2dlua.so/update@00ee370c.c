
/* cocos2d::TintBy::update(float) */

void __thiscall cocos2d::TintBy::update(TintBy *this,float param_1)

{
  long lVar1;
  long *plVar2;
  Color3B aCStack_30 [8];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  plVar2 = *(long **)(this + 0x38);
  if (plVar2 != (long *)0x0) {
    Color3B::Color3B(aCStack_30,
                     (uchar)(int)((float)(int)*(short *)(this + 0x56) * param_1 +
                                 (float)(int)*(short *)(this + 0x5c)),
                     (uchar)(int)((float)(int)*(short *)(this + 0x58) * param_1 +
                                 (float)(int)*(short *)(this + 0x5e)),
                     (uchar)(int)((float)(int)*(short *)(this + 0x5a) * param_1 +
                                 (float)(int)*(short *)(this + 0x60)));
    (**(code **)(*plVar2 + 0x4c0))(plVar2,aCStack_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

